/*
 * XREFs of AlpcpInitializeCompletionList @ 0x14052CDBC
 * Callers:
 *     NtAlpcSetInformation @ 0x14052C6F0 (NtAlpcSetInformation.c)
 * Callees:
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x140034050 (MmProbeAndLockPages.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x14006BCD8 (AlpcpFreeCompletionPacketLookaside.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1400B0D00 (MmUnlockPages.c)
 *     AlpcGetHeaderSize @ 0x1400EE200 (AlpcGetHeaderSize.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14042D0F4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     AlpcpRegisterCompletionListDatabase @ 0x14052D210 (AlpcpRegisterCompletionListDatabase.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x14052D33C (AlpcpUnregisterCompletionListDatabase.c)
 */

__int64 __fastcall AlpcpInitializeCompletionList(__int64 a1, char *a2, unsigned int a3, int a4, int Flags, int a6)
{
  size_t v6; // r13
  char v9; // r15
  PVOID v10; // rsi
  PVOID PoolWithTag; // rax
  struct _MDL *Mdl; // rcx
  __int64 v13; // rcx
  PVOID v14; // rax
  __int64 v15; // r15
  __int64 v16; // r9
  __int64 v17; // r10
  unsigned int v18; // r11d
  __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v27; // rdx
  char *CompletionPacketLookaside; // r12
  unsigned int v29; // ebx
  char v30; // r12
  char v31; // r13
  int v33; // ecx
  struct _MDL *v34; // rcx
  unsigned int v35; // [rsp+38h] [rbp-50h]
  int v36; // [rsp+3Ch] [rbp-4Ch]
  unsigned int P; // [rsp+40h] [rbp-48h]

  v6 = a3;
  v9 = 0;
  v10 = 0LL;
  if ( ((unsigned __int16)a2 & 0xFFF) != 0LL
    || (a3 & 0xFFF) != 0
    || a3 - 0x4000 > 0x3FFFC000
    || (Flags & 0x57FFFFFF) != 0
    || !a4 )
  {
    v31 = 0;
    v30 = 0;
    v29 = -1073741811;
    goto LABEL_28;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x6E496C41u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v29 = -1073741670;
LABEL_36:
    v30 = 0;
    v31 = 0;
    goto LABEL_28;
  }
  memset(PoolWithTag, 0, 0xA0uLL);
  *((_QWORD *)v10 + 3) = 0LL;
  *((_QWORD *)v10 + 2) = KeGetCurrentThread()->ApcState.Process;
  *((_QWORD *)v10 + 5) = a2;
  *((_QWORD *)v10 + 6) = &a2[v6];
  if ( !(unsigned int)AlpcpRegisterCompletionListDatabase(v10) )
  {
    v29 = -1073741800;
    goto LABEL_36;
  }
  Mdl = IoAllocateMdl(a2, v6, 0, 0, 0LL);
  *((_QWORD *)v10 + 4) = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, KeGetCurrentThread()->PreviousMode, IoModifyAccess);
    v13 = *((_QWORD *)v10 + 4);
    if ( (*(_BYTE *)(v13 + 10) & 5) != 0 )
      v14 = *(PVOID *)(v13 + 24);
    else
      v14 = MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, 0x40000000u);
    *((_QWORD *)v10 + 8) = v14;
    if ( v14 )
    {
      memset(v14, 0, v6);
      v15 = *((_QWORD *)v10 + 8);
      *(_QWORD *)v15 = 0xDEADBEEFBAADF00DuLL;
      *(_QWORD *)(v15 + 328) = 0xBAADF00DDEADBEEFuLL;
      v16 = (8 * ((unsigned int)v6 >> 6) + 4095) & 0xFFFFF000;
      v35 = v16;
      v17 = (((unsigned int)(v6 - v16 - 4096) >> 9) + 4095) & 0xFFFFF000;
      v36 = v17;
      v18 = v6 - v16 - 4096 - v17;
      P = v18;
      *((_QWORD *)v10 + 9) = v6;
      *((_QWORD *)v10 + 10) = v15;
      v19 = *((_QWORD *)v10 + 8) + 4096LL;
      *((_QWORD *)v10 + 11) = v19;
      *((_QWORD *)v10 + 12) = v16;
      v20 = v16 + v19;
      *((_QWORD *)v10 + 13) = v20;
      *((_QWORD *)v10 + 14) = v17;
      *((_DWORD *)v10 + 34) = ((unsigned int)(v6 - v16 - 4096) >> 6)
                            - (((((unsigned int)(v6 - v16 - 4096) >> 9) + 4095) & 0xFFFFF000) >> 6);
      *((_QWORD *)v10 + 15) = v17 + v20;
      *((_QWORD *)v10 + 16) = v18;
      *((_DWORD *)v10 + 36) = a4;
      *((_QWORD *)v10 + 5) = a2;
      *((_QWORD *)v10 + 6) = &a2[v6];
      *((_QWORD *)v10 + 7) = &a2[v17 + 4096 + v16];
      *((_DWORD *)v10 + 37) = Flags;
      if ( a6 )
      {
        v33 = 8;
        if ( Flags < 0 )
          v33 = 20;
        if ( (Flags & 0x40000000) != 0 )
          v33 += 16;
        if ( (Flags & 0x20000000) != 0 )
          v33 += 20;
        if ( (Flags & 0x10000000) != 0 )
          v33 += 16;
        if ( (Flags & 0x8000000) != 0 )
          v33 += 24;
        *((_DWORD *)v10 + 38) = v33;
      }
      else
      {
        *((_DWORD *)v10 + 38) = AlpcGetHeaderSize(Flags);
        v16 = v35;
        LODWORD(v17) = v36;
        v18 = P;
      }
      *(_DWORD *)(v15 + 8) = v6;
      *(_DWORD *)(v15 + 12) = 4096;
      *(_DWORD *)(v15 + 16) = v16;
      *(_DWORD *)(v15 + 20) = v16 + 4096;
      *(_DWORD *)(v15 + 24) = v17;
      *(_DWORD *)(v15 + 28) = v17 + v16 + 4096;
      *(_DWORD *)(v15 + 32) = v18;
      *(_QWORD *)(v15 + 64) |= 0xFFFFFFuLL;
      *(_QWORD *)(v15 + 64) |= 0xFFFFFF000000uLL;
      *(_QWORD *)(v15 + 64) &= 0xFFFFFFFFFFFFuLL;
      *(_DWORD *)(v15 + 36) = *((_DWORD *)v10 + 37);
      *(_DWORD *)(v15 + 40) = *((_DWORD *)v10 + 38);
      v21 = (_DWORD *)*((_QWORD *)v10 + 11);
      v22 = 0LL;
      v23 = (unsigned __int64)(*((_QWORD *)v10 + 12) + 3LL) >> 2;
      if ( v21 > (_DWORD *)((char *)v21 + *((_QWORD *)v10 + 12)) )
        v23 = 0LL;
      if ( v23 )
      {
        do
        {
          *v21++ = -1;
          ++v22;
        }
        while ( v22 < v23 );
      }
      v24 = KeAbPreAcquire(a1 + 352, 0LL, 0LL, v16);
      v26 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v24, a1 + 352, v25);
      if ( v26 )
        *(_BYTE *)(v26 + 26) |= 1u;
      v9 = 1;
      if ( *(_QWORD *)(a1 + 360) )
      {
        v29 = -1073740006;
        goto LABEL_27;
      }
      if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
      {
        v29 = -1073740032;
        goto LABEL_27;
      }
      v27 = *(_QWORD *)(a1 + 32);
      if ( !v27 )
        goto LABEL_26;
      CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(v35 >> 3, v27, *(_QWORD *)(a1 + 40));
      if ( CompletionPacketLookaside )
      {
        AlpcpFreeCompletionPacketLookaside(*(_QWORD *)(a1 + 48));
        *(_QWORD *)(a1 + 48) = CompletionPacketLookaside;
LABEL_26:
        *(_QWORD *)(a1 + 360) = v10;
        v10 = 0LL;
        *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 416) & 0xFFFFF7FF | ((a6 & 1 | 0x38) << 11);
        v29 = 0;
LABEL_27:
        v30 = 1;
        v31 = 1;
        goto LABEL_28;
      }
    }
    v29 = -1073741670;
    goto LABEL_27;
  }
  v29 = -1073741670;
  v30 = 0;
  v31 = 1;
LABEL_28:
  if ( v9 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
  }
  if ( v10 )
  {
    if ( v30 )
      MmUnlockPages(*((PMDL *)v10 + 4));
    v34 = (struct _MDL *)*((_QWORD *)v10 + 4);
    if ( v34 )
      IoFreeMdl(v34);
    if ( v31 )
      AlpcpUnregisterCompletionListDatabase(v10);
    ExFreePoolWithTag(v10, 0);
  }
  return v29;
}

/*
 * XREFs of AlpcpInitializeCompletionList @ 0x1404C1114
 * Callers:
 *     NtAlpcSetInformation @ 0x140471BA8 (NtAlpcSetInformation.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x140009B98 (AlpcGetHeaderSize.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400F59F4 (AlpcpFreeCompletionPacketLookaside.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140470730 (AlpcpAllocateCompletionPacketLookaside.c)
 *     AlpcpRegisterCompletionListDatabase @ 0x1404C1558 (AlpcpRegisterCompletionListDatabase.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1404D217C (AlpcpUnregisterCompletionListDatabase.c)
 *     AlpcpGetMessageAttributeSize32 @ 0x1405298AC (AlpcpGetMessageAttributeSize32.c)
 */

__int64 __fastcall AlpcpInitializeCompletionList(__int64 a1, char *a2, unsigned int a3, int a4, ULONG Flags, int a6)
{
  size_t v6; // r13
  char v9; // r15
  char v10; // r12
  PVOID v11; // rsi
  PVOID PoolWithTag; // rax
  struct _MDL *Mdl; // rcx
  __int64 v14; // rcx
  PVOID v15; // rax
  __int64 v16; // r15
  __int64 v17; // r12
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  ULONG MessageAttributeSize32; // eax
  int v23; // r9d
  unsigned int v24; // r10d
  _DWORD *v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rax
  _BYTE *v28; // rax
  _BYTE *v29; // r15
  __int64 v30; // rdx
  char *CompletionPacketLookaside; // r12
  unsigned int v32; // ebx
  char v33; // r13
  struct _MDL *v35; // rcx
  int v36; // [rsp+34h] [rbp-54h]
  unsigned int v37; // [rsp+38h] [rbp-50h]

  v6 = a3;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  if ( ((unsigned __int16)a2 & 0xFFF) != 0LL
    || (a3 & 0xFFF) != 0
    || a3 - 0x4000 > 0x3FFFC000
    || (Flags & 0x57FFFFFF) != 0
    || !a4 )
  {
    v33 = 0;
    v32 = -1073741811;
    goto LABEL_28;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x6E496C41u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v32 = -1073741670;
LABEL_36:
    v33 = 0;
    goto LABEL_28;
  }
  memset(PoolWithTag, 0, 0xA0uLL);
  *((_QWORD *)v11 + 3) = 0LL;
  *((_QWORD *)v11 + 2) = KeGetCurrentThread()->ApcState.Process;
  *((_QWORD *)v11 + 5) = a2;
  *((_QWORD *)v11 + 6) = &a2[v6];
  if ( !(unsigned int)AlpcpRegisterCompletionListDatabase(v11) )
  {
    v32 = -1073741800;
    goto LABEL_36;
  }
  Mdl = IoAllocateMdl(a2, v6, 0, 0, 0LL);
  *((_QWORD *)v11 + 4) = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, KeGetCurrentThread()->PreviousMode, IoModifyAccess);
    v10 = 1;
    v14 = *((_QWORD *)v11 + 4);
    v15 = (*(_BYTE *)(v14 + 10) & 5) != 0
        ? *(PVOID *)(v14 + 24)
        : MmMapLockedPagesSpecifyCache((PMDL)v14, 0, MmCached, 0LL, 0, 0x40000000u);
    *((_QWORD *)v11 + 8) = v15;
    if ( v15 )
    {
      memset(v15, 0, v6);
      v16 = *((_QWORD *)v11 + 8);
      *(_QWORD *)v16 = 0xDEADBEEFBAADF00DuLL;
      *(_QWORD *)(v16 + 328) = 0xBAADF00DDEADBEEFuLL;
      v17 = (8 * ((unsigned int)v6 >> 6) + 4095) & 0xFFFFF000;
      v18 = (((unsigned int)(v6 - v17 - 4096) >> 9) + 4095) & 0xFFFFF000;
      v36 = v18;
      v37 = v6 - v17 - 4096 - v18;
      *((_QWORD *)v11 + 9) = v6;
      *((_QWORD *)v11 + 10) = v16;
      v19 = *((_QWORD *)v11 + 8) + 4096LL;
      *((_QWORD *)v11 + 11) = v19;
      *((_QWORD *)v11 + 12) = v17;
      v20 = v17 + v19;
      *((_QWORD *)v11 + 13) = v20;
      *((_QWORD *)v11 + 14) = v18;
      *((_DWORD *)v11 + 34) = ((unsigned int)(v6 - v17 - 4096) >> 6)
                            - (((((unsigned int)(v6 - v17 - 4096) >> 9) + 4095) & 0xFFFFF000) >> 6);
      *((_QWORD *)v11 + 15) = v18 + v20;
      *((_QWORD *)v11 + 16) = v37;
      *((_DWORD *)v11 + 36) = a4;
      *((_QWORD *)v11 + 5) = a2;
      *((_QWORD *)v11 + 6) = &a2[v6];
      v21 = (__int64)&a2[v18 + 4096 + v17];
      *((_QWORD *)v11 + 7) = v21;
      *((_DWORD *)v11 + 37) = Flags;
      if ( a6 )
      {
        MessageAttributeSize32 = AlpcpGetMessageAttributeSize32(Flags, v21, v17);
      }
      else
      {
        MessageAttributeSize32 = AlpcGetHeaderSize(Flags);
        v23 = v36;
        v24 = v37;
      }
      *((_DWORD *)v11 + 38) = MessageAttributeSize32;
      *(_DWORD *)(v16 + 8) = v6;
      *(_DWORD *)(v16 + 12) = 4096;
      *(_DWORD *)(v16 + 16) = v17;
      *(_DWORD *)(v16 + 20) = v17 + 4096;
      *(_DWORD *)(v16 + 24) = v23;
      *(_DWORD *)(v16 + 28) = v23 + v17 + 4096;
      *(_DWORD *)(v16 + 32) = v24;
      *(_QWORD *)(v16 + 64) |= 0xFFFFFFuLL;
      *(_QWORD *)(v16 + 64) |= 0xFFFFFF000000uLL;
      *(_QWORD *)(v16 + 64) &= 0xFFFFFFFFFFFFuLL;
      *(_DWORD *)(v16 + 36) = *((_DWORD *)v11 + 37);
      *(_DWORD *)(v16 + 40) = *((_DWORD *)v11 + 38);
      v25 = (_DWORD *)*((_QWORD *)v11 + 11);
      v26 = 0LL;
      v27 = (unsigned __int64)(*((_QWORD *)v11 + 12) + 3LL) >> 2;
      if ( v25 > (_DWORD *)((char *)v25 + *((_QWORD *)v11 + 12)) )
        v27 = 0LL;
      if ( v27 )
      {
        do
        {
          *v25++ = -1;
          ++v26;
        }
        while ( v26 < v27 );
      }
      v28 = (_BYTE *)KeAbPreAcquire(a1 + 352, 0LL, 0);
      v29 = v28;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v28, a1 + 352);
      if ( v29 )
        v29[26] |= 1u;
      v9 = 1;
      if ( *(_QWORD *)(a1 + 360) )
      {
        v32 = -1073740006;
      }
      else if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
      {
        v32 = -1073740032;
      }
      else
      {
        v30 = *(_QWORD *)(a1 + 32);
        if ( v30 )
        {
          CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(
                                        (unsigned int)v17 >> 3,
                                        v30,
                                        *(_QWORD *)(a1 + 40));
          if ( !CompletionPacketLookaside )
          {
            v32 = -1073741670;
            goto LABEL_27;
          }
          AlpcpFreeCompletionPacketLookaside(*(_QWORD *)(a1 + 48));
          *(_QWORD *)(a1 + 48) = CompletionPacketLookaside;
        }
        *(_QWORD *)(a1 + 360) = v11;
        v11 = 0LL;
        *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 416) & 0xFFFFF7FF | ((a6 & 1 | 0x38) << 11);
        v32 = 0;
      }
LABEL_27:
      v10 = 1;
      v33 = 1;
      goto LABEL_28;
    }
  }
  v32 = -1073741670;
  v33 = 1;
LABEL_28:
  if ( v9 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
  }
  if ( v11 )
  {
    if ( v10 )
      MmUnlockPages(*((PMDL *)v11 + 4));
    v35 = (struct _MDL *)*((_QWORD *)v11 + 4);
    if ( v35 )
      IoFreeMdl(v35);
    if ( v33 )
      AlpcpUnregisterCompletionListDatabase(v11);
    ExFreePoolWithTag(v11, 0);
  }
  return v32;
}

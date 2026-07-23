/*
 * XREFs of ObpFreeObject @ 0x14042F610
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x14042F540 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x140012DFC (PspReturnResourceQuota.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspReturnQuota @ 0x140089190 (PspReturnQuota.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     PspDereferenceQuotaBlock @ 0x14046C324 (PspDereferenceQuotaBlock.c)
 *     PspRemoveQuotaBlock @ 0x14063E5B0 (PspRemoveQuotaBlock.c)
 */

void __fastcall ObpFreeObject(unsigned __int64 a1, PVOID *a2, __int64 a3)
{
  char v3; // al
  _QWORD *v5; // r15
  PVOID *v6; // r12
  int *v7; // rsi
  unsigned int *v8; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  void *v11; // r15
  unsigned int v12; // r12d
  unsigned int v13; // r13d
  __int64 v14; // rsi
  __int64 v15; // r9
  ULONG v16; // edx
  __int64 v17; // rax
  __int64 v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _SLIST_ENTRY *v20; // rdx
  _GENERAL_LOOKASIDE *P; // r8
  PVOID v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  signed __int64 v29; // rax
  signed __int64 v30; // rcx
  signed __int64 v31; // rtt
  signed int v32; // r12d
  char *v33; // r13
  __int64 v34; // r15
  __int64 v35; // r8
  PVOID *v36; // [rsp+70h] [rbp+8h]
  PVOID *v37; // [rsp+78h] [rbp+10h]
  PVOID *v38; // [rsp+80h] [rbp+18h]
  __int64 v39; // [rsp+88h] [rbp+20h]

  v3 = *(_BYTE *)(a1 + 26);
  if ( (v3 & 1) != 0 )
    v5 = (_QWORD *)(a1 - 32);
  else
    v5 = 0LL;
  if ( (v3 & 2) != 0 )
  {
    a2 = (PVOID *)(a1 - ObpInfoMaskToOffset[v3 & 3]);
    v37 = a2;
  }
  else
  {
    v37 = 0LL;
  }
  if ( (v3 & 4) != 0 )
    v6 = (PVOID *)(a1 - ObpInfoMaskToOffset[v3 & 7]);
  else
    v6 = 0LL;
  v36 = v6;
  if ( (v3 & 8) != 0 )
    v7 = (int *)(a1 - ObpInfoMaskToOffset[v3 & 0xF]);
  else
    v7 = 0LL;
  if ( (v3 & 0x20) != 0 )
  {
    a2 = (PVOID *)(a1 - ObpInfoMaskToOffset[v3 & 0x3F]);
    v38 = a2;
  }
  else
  {
    v38 = 0LL;
  }
  v8 = (unsigned int *)(a1 - ObpInfoMaskToOffset[(unsigned __int8)v3]);
  if ( v3 < 0 )
    v8 = (unsigned int *)((char *)v8 + 4LL - *v8);
  v9 = a1 >> 8;
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ BYTE1(a1) ^ (unsigned __int64)*(unsigned __int8 *)(a1 + 24)];
  if ( v5 && (_QWORD *)*v5 != v5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v24 = (signed __int64 *)(v10 + 184);
    v25 = KeAbPreAcquire(v10 + 184, 0LL, 0LL);
    v26 = v25;
    v39 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 184), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v10 + 184), v25, v10 + 184);
      v26 = v39;
    }
    if ( v26 )
      *(_BYTE *)(v26 + 26) |= 1u;
    v27 = *v5;
    v28 = (_QWORD *)v5[1];
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v28 != v5 )
      __fastfail(3u);
    *v28 = v27;
    *(_QWORD *)(v27 + 8) = v28;
    _m_prefetchw(v24);
    v29 = *v24;
    if ( (*v24 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v30 = 0LL;
    else
      v30 = v29 - 16;
    if ( (v29 & 2) != 0 || (v31 = *v24, v31 != _InterlockedCompareExchange64(v24, v30, v29)) )
      ExfReleasePushLock((_QWORD *)(v10 + 184));
    KeAbPostRelease(v10 + 184);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  _InterlockedDecrement((volatile signed __int32 *)(v10 + 44));
  if ( (*(_BYTE *)(a1 + 27) & 1) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 32);
    if ( !v17 )
      goto LABEL_26;
    v18 = *(_QWORD *)(v17 + 32);
    if ( v18 )
    {
      LOBYTE(a3) = 1;
      SeReleaseSecurityDescriptor(v18, *(unsigned __int8 *)(v17 + 16), a3);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v20 = *(_SLIST_ENTRY **)(a1 + 32);
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v20);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v20);
    }
    goto LABEL_25;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    if ( v7 )
    {
      v11 = (void *)*((_QWORD *)v7 + 2);
      v12 = *v7;
      v13 = v7[1];
      if ( (unsigned __int64)v11 > 1 )
      {
        if ( v7[2] )
          PspReturnQuota(*((char **)v7 + 2), 0LL, 1, (unsigned int)v7[2]);
        PspDereferenceQuotaBlock(v11);
      }
    }
    else
    {
      v12 = *(_DWORD *)(v10 + 104);
      v13 = *(_DWORD *)(v10 + 108);
    }
    v14 = *(_QWORD *)(a1 + 32);
    v15 = v12;
    if ( v14 == 1 )
      goto LABEL_24;
    if ( v12 )
      PspReturnQuota(*(char **)(a1 + 32), 0LL, 1, v12);
    if ( v13 )
      PspReturnQuota((char *)v14, 0LL, 0, v13);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 512), 0xFFFFFFFF) != 1 )
    {
LABEL_24:
      v6 = v36;
LABEL_25:
      *(_QWORD *)(a1 + 32) = 0LL;
      goto LABEL_26;
    }
    v32 = 0;
    v33 = PspResourceFlags;
    v34 = v14 + 64;
    while ( 1 )
    {
      if ( (*v33 & 3) == 1 )
      {
        a3 = *(_QWORD *)v34;
        v15 = *(_QWORD *)(v34 + 16) != 0LL;
        if ( *(_QWORD *)v34 + *(_QWORD *)(v34 + 8) )
        {
          if ( *(_QWORD *)(v34 + 16) )
          {
            v35 = _InterlockedExchange64((volatile __int64 *)(v34 + 8), 0LL);
            a3 = _InterlockedExchange64((volatile __int64 *)v34, 0LL) + v35;
          }
          if ( a3 )
          {
LABEL_76:
            PspReturnResourceQuota(v32, v34 - 64, a3, v15);
            goto LABEL_77;
          }
        }
        else
        {
          a3 = 0LL;
        }
        if ( (_DWORD)v15 )
          goto LABEL_76;
      }
LABEL_77:
      ++v32;
      v34 += 128LL;
      v33 += 8;
      if ( v32 >= 4 )
      {
        PspRemoveQuotaBlock(v14, a2, a3, v15);
        ExFreePoolWithTag((PVOID)v14, 0);
        goto LABEL_24;
      }
    }
  }
LABEL_26:
  if ( v6 && (*(_BYTE *)(a1 + 27) & 0x40) == 0 )
  {
    ExFreePoolWithTag(*v6, 0);
    *v6 = 0LL;
  }
  if ( v37 )
  {
    v22 = v37[2];
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      v37[2] = 0LL;
    }
  }
  if ( v38 && *v38 )
  {
    ExFreePoolWithTag(*v38, 0);
    *v38 = 0LL;
  }
  *(_BYTE *)(a1 + 24) = ObHeaderCookie ^ v9 ^ 1;
  if ( v10 )
    v16 = *(_DWORD *)(v10 + 192);
  else
    v16 = 1416258127;
  ExFreePoolWithTag(v8, v16);
}

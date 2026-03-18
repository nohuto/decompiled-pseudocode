/*
 * XREFs of IoBoostThreadIoPriority @ 0x1400D69B0
 * Callers:
 *     FsRtlpDoBoost @ 0x140074438 (FsRtlpDoBoost.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400D5A80 (FsRtlpWaitForIoAtEof.c)
 *     KiAbThreadBoostIoPriority @ 0x1400D635C (KiAbThreadBoostIoPriority.c)
 *     ExpBoostIoAfterAcquire @ 0x1400D6454 (ExpBoostIoAfterAcquire.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14012E1F4 (CcBoostLowPriorityWorkerThread.c)
 *     IoBoostThreadIo @ 0x14014C778 (IoBoostThreadIo.c)
 *     MiModifiedPageWriter @ 0x140169194 (MiModifiedPageWriter.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     CmpBoostActiveHiveWriter @ 0x1404AF82C (CmpBoostActiveHiveWriter.c)
 *     PspBoostJobIoPriorityCallback @ 0x1404F5EBC (PspBoostJobIoPriorityCallback.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x1400D6F58 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall IoBoostThreadIoPriority(__int64 a1, int a2, int a3)
{
  char v5; // si
  unsigned int v6; // r15d
  volatile signed __int32 *v7; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v9; // r14
  __int64 v10; // rdi
  struct _EX_RUNDOWN_REF *v11; // rax
  volatile signed __int32 *v12; // r14
  unsigned __int8 v13; // di
  __int64 *v14; // rsi
  char v15; // al
  unsigned __int64 v16; // rdx
  void *v17; // r12
  unsigned __int16 v18; // r13
  unsigned __int16 v19; // si
  __int64 v20; // r14
  __int64 v21; // r12
  unsigned __int16 j; // di
  _QWORD *v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rsi
  struct _EX_RUNDOWN_REF *v26; // rdx
  __int64 i; // rdx
  volatile signed __int64 **v28; // rdi
  __int64 v29; // rax
  KIRQL v30; // r13
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  _QWORD *v34; // rax
  _QWORD *PoolWithTag; // rax
  char v36; // [rsp+28h] [rbp-E0h]
  void *v38; // [rsp+30h] [rbp-D8h]
  __int64 v39; // [rsp+30h] [rbp-D8h]
  unsigned __int8 v41; // [rsp+48h] [rbp-C0h]
  _QWORD v42[10]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v43; // [rsp+A8h] [rbp-60h]
  _QWORD v44[16]; // [rsp+B8h] [rbp-50h]
  void *retaddr; // [rsp+170h] [rbp+68h]

  v5 = 0;
  v6 = 0;
  if ( a3 < 0 )
  {
    v5 = 1;
  }
  else
  {
    v7 = (volatile signed __int32 *)(a1 + 1832);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(a1 + 1832);
    }
    else if ( _interlockedbittestandset64(v7, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 1832));
    }
    if ( *(_QWORD *)(a1 + 1632) == a1 + 1632 )
    {
      if ( (a3 & 0x40000000) == 0 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(a1 + 1832, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
        __writecr8(CurrentIrql);
        return;
      }
      v5 = 1;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(a1 + 1832, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
    __writecr8(CurrentIrql);
  }
  v9 = 8LL;
  v10 = 0LL;
  do
  {
    v11 = ExReferenceCallBackBlock((signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v10 * 8));
    v44[v10] = v11;
    if ( v11 )
      v44[v10 + 8] = v11[2].Count;
    ++v10;
    --v9;
  }
  while ( v9 );
  if ( v5 == 1 )
    goto LABEL_33;
  v12 = (volatile signed __int32 *)(a1 + 1832);
  v38 = 0LL;
  v13 = KeGetCurrentIrql();
  v41 = v13;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a1 + 1832);
  }
  else if ( _interlockedbittestandset64(v12, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 1832));
  }
  v14 = *(__int64 **)(a1 + 1632);
  if ( v14 == (__int64 *)(a1 + 1632) )
    goto LABEL_30;
  do
  {
    v15 = *((_BYTE *)v14 + 34);
    if ( *((char *)v14 + 35) > v15 )
      goto LABEL_28;
    v16 = v14[19];
    if ( v16 >= (unsigned __int64)&v14[9 * v15 + 22] )
      goto LABEL_28;
    v17 = *(void **)(v16 + 40);
    if ( !v17 )
      goto LABEL_28;
    v18 = 0;
    while ( !v44[v18] )
    {
LABEL_27:
      if ( ++v18 >= 8u )
        goto LABEL_28;
    }
    v36 = 0;
    KeAcquireQueuedSpinLockAtDpcLevel((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
    for ( i = *(_QWORD *)(*(_QWORD *)(v44[v18 + 8] + 32LL) + 8LL); i; i = *(_QWORD *)(i + 16) )
    {
      if ( (void *)i == v17 && (*(_DWORD *)(i + 48) & 0x1000000) != 0 )
      {
        v36 = 1;
        break;
      }
    }
    v28 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v28, retaddr);
      goto LABEL_58;
    }
    _m_prefetchw(v28);
    v29 = (__int64)*v28;
    if ( *v28 )
      goto LABEL_79;
    if ( v28 != (volatile signed __int64 **)_InterlockedCompareExchange64(v28[1], 0LL, (signed __int64)v28) )
    {
      v29 = KxWaitForLockChainValid((__int64 *)v28);
LABEL_79:
      *v28 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v29 + 8), 1uLL);
    }
LABEL_58:
    if ( v36 != 1 || v38 == v17 )
      goto LABEL_27;
    v38 = v17;
    if ( v6 >= 2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
      if ( PoolWithTag )
      {
        PoolWithTag[4] = v43;
        v43 = PoolWithTag;
        *((_WORD *)PoolWithTag + 20) = v18;
        PoolWithTag[1] = v17;
        PoolWithTag[2] = a1;
        *PoolWithTag = v44[v18];
        *((_DWORD *)PoolWithTag + 6) = a2;
        goto LABEL_71;
      }
    }
    else
    {
      v33 = 6LL * v6;
      v42[v33] = v44[v18];
      LODWORD(v42[v33 + 3]) = a2;
      LOWORD(v42[v33 + 5]) = v18;
      v42[v33 + 1] = v17;
      v42[v33 + 2] = a1;
      v42[v33 + 4] = 0LL;
LABEL_71:
      ObfReferenceObjectWithTag(v17, 0x746C6644u);
      ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
      ++v6;
      if ( (*(_DWORD *)(v14 - 2) & 2) != 0 )
        ++IoBoostedPagingIrpCount;
      else
        ++IoBoostedThreadedIrpCount;
    }
LABEL_28:
    v14 = (__int64 *)*v14;
  }
  while ( v14 != (__int64 *)(a1 + 1632) );
  v12 = (volatile signed __int32 *)(a1 + 1832);
  v13 = v41;
LABEL_30:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v12, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
  __writecr8(v13);
  if ( v6 )
    goto LABEL_38;
LABEL_33:
  v19 = 0;
  v39 = 0LL;
  v20 = 0LL;
  while ( 2 )
  {
    v21 = *(_QWORD *)((char *)v44 + v20);
    if ( !v21 )
      goto LABEL_35;
    v30 = KeAcquireQueuedSpinLock(0xAuLL);
    v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)&v44[8] + v20) + 32LL) + 8LL);
    if ( !v31 )
      goto LABEL_67;
    while ( 2 )
    {
      if ( (*(_DWORD *)(v31 + 48) & 0x1000000) == 0 )
        goto LABEL_65;
      if ( v6 < 2 )
      {
        v32 = 6LL * v6;
        v42[v32 + 4] = 0LL;
        v42[v32] = v21;
        LOWORD(v42[v32 + 5]) = v19;
        v42[v32 + 1] = v31;
        v42[v32 + 2] = a1;
        LODWORD(v42[v32 + 3]) = a2;
        goto LABEL_64;
      }
      v34 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43426F49u);
      if ( v34 )
      {
        v34[4] = v43;
        v43 = v34;
        *v34 = v21;
        *((_WORD *)v34 + 20) = v19;
        v34[1] = v31;
        v34[2] = a1;
        *((_DWORD *)v34 + 6) = a2;
LABEL_64:
        ObfReferenceObjectWithTag((PVOID)v31, 0x746C6644u);
        ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
        ++v6;
LABEL_65:
        v31 = *(_QWORD *)(v31 + 16);
        if ( !v31 )
          break;
        continue;
      }
      break;
    }
    v20 = v39;
LABEL_67:
    KeReleaseQueuedSpinLock(0xAuLL, v30);
LABEL_35:
    ++v19;
    v20 += 8LL;
    v39 = v20;
    if ( v19 < 8u )
      continue;
    break;
  }
  if ( v6 )
    ++IoBlanketBoostCount;
LABEL_38:
  for ( j = 0; j < v6; ++j )
  {
    if ( j >= 2u )
    {
      v23 = v43;
      v43 = (_QWORD *)v43[4];
    }
    else
    {
      v23 = &v42[6 * j];
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(*v23 + 8LL))(*v23, v23 + 1, 0LL);
    if ( j >= 2u )
      ExFreePoolWithTag(v23, 0);
  }
  v24 = 0LL;
  v25 = 8LL;
  do
  {
    v26 = (struct _EX_RUNDOWN_REF *)v44[v24];
    if ( v26 )
      ExDereferenceCallBackBlock((signed __int64 *)((char *)&IopUpdatePriorityCallbackRoutine + v24 * 8), v26);
    ++v24;
    --v25;
  }
  while ( v25 );
}

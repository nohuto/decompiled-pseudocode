/*
 * XREFs of ExConvertExclusiveToSharedLite @ 0x140103870
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x1400E6A80 (FsRtlAcquireFileForModWriteEx.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x140417490 (PspFreezeJobTree.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     NtMapCMFModule @ 0x14053AB00 (NtMapCMFModule.c)
 *     CmpReplicateKeyToVirtual @ 0x140658F4C (CmpReplicateKeyToVirtual.c)
 *     VerifierExConvertExclusiveToSharedLite @ 0x140741B5C (VerifierExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpApplyPriorityBoost @ 0x14009CD90 (ExpApplyPriorityBoost.c)
 *     KeWakeWaitChain @ 0x140103A14 (KeWakeWaitChain.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x140103D00 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08 (KiFastAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall ExConvertExclusiveToSharedLite(PERESOURCE Resource)
{
  KSPIN_LOCK *p_SpinLock; // rcx
  char v3; // al
  __int64 v4; // rdx
  ULONG NumberOfSharedWaiters; // ecx
  USHORT Flag; // ax
  __int64 v7; // rax
  PVOID SharedWaiters; // rax
  int WaiterPriority; // esi
  __int64 v10; // rax
  unsigned __int8 CurrentIrql; // di
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  KSPIN_LOCK *v13; // [rsp+28h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+28h]
  unsigned __int8 v15; // [rsp+70h] [rbp+30h] BYREF
  PVOID v16; // [rsp+78h] [rbp+38h] BYREF

  p_SpinLock = &Resource->SpinLock;
  v15 = 2;
  v13 = p_SpinLock;
  v12 = 0LL;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v3 = KiFastAcquireQueuedSpinLockInstrumented(&v12, p_SpinLock, &v15);
  }
  else
  {
    v3 = 0;
    v4 = _InterlockedExchange64((volatile __int64 *)p_SpinLock, (__int64)&v12);
    if ( v4 )
    {
      KxWaitForLockOwnerShipWithIrql(&v12, v4, &v15);
      v3 = 1;
    }
  }
  if ( v3 )
  {
    _disable();
    __writecr8(v15);
  }
  NumberOfSharedWaiters = Resource->NumberOfSharedWaiters;
  Resource->Flag &= ~0x80u;
  Flag = Resource->Flag;
  if ( !NumberOfSharedWaiters )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v12, retaddr);
      goto LABEL_10;
    }
    _m_prefetchw(&v12);
    v7 = v12;
    if ( !v12 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v13, 0LL, (signed __int64)&v12) == &v12 )
      {
LABEL_10:
        _enable();
        goto LABEL_11;
      }
      v7 = KxWaitForLockChainValid(&v12);
    }
    v12 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v7 + 8), 1uLL);
    goto LABEL_10;
  }
  Resource->ActiveEntries += NumberOfSharedWaiters;
  Resource->NumberOfSharedWaiters = 0;
  if ( !Resource->NumberOfExclusiveWaiters )
    Resource->Flag = Flag & 0xFB;
  SharedWaiters = Resource->SharedWaiters;
  WaiterPriority = Resource->WaiterPriority;
  Resource->SharedWaiters = 0LL;
  v16 = SharedWaiters;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v12, retaddr);
    goto LABEL_19;
  }
  _m_prefetchw(&v12);
  v10 = v12;
  if ( v12 )
    goto LABEL_23;
  if ( (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)v13, 0LL, (signed __int64)&v12) != &v12 )
  {
    v10 = KxWaitForLockChainValid(&v12);
LABEL_23:
    v12 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v10 + 8), 1uLL);
  }
LABEL_19:
  _enable();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KeWakeWaitChain(&v16, 0LL, 0LL);
  if ( WaiterPriority )
    ExpApplyPriorityBoost((__int64)Resource, 65280, (__int64)KeGetCurrentThread());
  __writecr8(CurrentIrql);
LABEL_11:
  __incgsdword(0x6334u);
}

/*
 * XREFs of ExConvertExclusiveToSharedLite @ 0x1400A4198
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14009E320 (FsRtlAcquireFileForModWriteEx.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     NtMapCMFModule @ 0x1404B3BEC (NtMapCMFModule.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     PspFreezeJobTree @ 0x1404D4EDC (PspFreezeJobTree.c)
 *     CmpReplicateKeyToVirtual @ 0x14060184C (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x14005CE50 (ExpApplyPriorityBoost.c)
 *     KeWakeWaitChain @ 0x1400A4264 (KeWakeWaitChain.c)
 *     EXP_LOCK_RESOURCE @ 0x14022D6D0 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D744 (EXP_UNLOCK_RESOURCE.c)
 */

void __stdcall ExConvertExclusiveToSharedLite(PERESOURCE Resource)
{
  __int64 NumberOfSharedWaiters; // rcx
  USHORT Flag; // ax
  PVOID SharedWaiters; // rax
  int WaiterPriority; // ebx
  unsigned __int8 CurrentIrql; // si
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF
  PVOID v8; // [rsp+50h] [rbp+8h] BYREF

  EXP_LOCK_RESOURCE(Resource, v7);
  NumberOfSharedWaiters = Resource->NumberOfSharedWaiters;
  Resource->Flag &= ~0x80u;
  Flag = Resource->Flag;
  if ( (_DWORD)NumberOfSharedWaiters )
  {
    Resource->ActiveEntries += NumberOfSharedWaiters;
    Resource->NumberOfSharedWaiters = 0;
    if ( !Resource->NumberOfExclusiveWaiters )
    {
      NumberOfSharedWaiters = 249LL;
      Resource->Flag = Flag & 0xF9;
    }
    SharedWaiters = Resource->SharedWaiters;
    WaiterPriority = Resource->WaiterPriority;
    Resource->SharedWaiters = 0LL;
    v8 = SharedWaiters;
    EXP_UNLOCK_RESOURCE(NumberOfSharedWaiters, v7);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KeWakeWaitChain(&v8, 0LL, 0LL);
    if ( WaiterPriority )
      ExpApplyPriorityBoost((__int64)Resource, 65280, (__int64)KeGetCurrentThread());
    __writecr8(CurrentIrql);
  }
  else
  {
    EXP_UNLOCK_RESOURCE(NumberOfSharedWaiters, v7);
  }
  __incgsdword(0x63B4u);
}

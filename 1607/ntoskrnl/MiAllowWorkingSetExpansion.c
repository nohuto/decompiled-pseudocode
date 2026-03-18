/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x14007BE5C
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14046D378 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405362FC (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeHandBuiltProcess @ 0x14057D0BC (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnWsToExpansionList @ 0x14007BEAC (MiReturnWsToExpansionList.c)
 *     MiInsertSessionWorkingSet @ 0x1401EC928 (MiInsertSessionWorkingSet.c)
 */

void __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140327740, &LockHandle);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 1 )
    MiInsertSessionWorkingSet(a1 - 3008);
  MiReturnWsToExpansionList(a1, 0LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

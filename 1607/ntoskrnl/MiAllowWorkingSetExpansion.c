/*
 * XREFs of MiAllowWorkingSetExpansion @ 0x14007BEDC
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14046C248 (MmInitializeProcessAddressSpace.c)
 *     MiInitializeSystemWorkingSetList @ 0x14053683C (MiInitializeSystemWorkingSetList.c)
 *     MmInitializeHandBuiltProcess @ 0x14057D568 (MmInitializeHandBuiltProcess.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnWsToExpansionList @ 0x14007BF2C (MiReturnWsToExpansionList.c)
 *     MiInsertSessionWorkingSet @ 0x1401EC754 (MiInsertSessionWorkingSet.c)
 */

void __fastcall MiAllowWorkingSetExpansion(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 1 )
    MiInsertSessionWorkingSet(a1 - 3008);
  MiReturnWsToExpansionList(a1, 0LL);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}

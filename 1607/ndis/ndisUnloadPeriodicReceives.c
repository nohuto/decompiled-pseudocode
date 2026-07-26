/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x1C010650C
 * Callers:
 *     ndisInitializePeriodicReceives @ 0x1C01024DC (ndisInitializePeriodicReceives.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C0004CA0 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C000DF90 (NdisReleaseRWLock.c)
 *     NdisFreeRWLock @ 0x1C000FF60 (NdisFreeRWLock.c)
 *     NdisFreeNetBufferListPool @ 0x1C001F360 (NdisFreeNetBufferListPool.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

void ndisUnloadPeriodicReceives()
{
  void *v0; // rbx
  void *SystemArgument1; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+0h] BYREF

  v0 = 0LL;
  if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
  {
    NdisAcquireRWLockWrite(
      (PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink,
      (PLOCK_STATE_EX)((unsigned __int64)&LockState & 0xFFFFFFFFFFFFFFC0uLL),
      0);
    SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      WPP_MAIN_CB.Dpc.SystemArgument1 = 0LL;
      v0 = SystemArgument1;
    }
    if ( LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) == 1 )
    {
      LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 0;
      ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead);
      ExDeleteNPagedLookasideList(&Lookaside);
      memset(&WPP_MAIN_CB.DeviceLock.Header.WaitListHead, 0, 0x100uLL);
    }
    NdisReleaseRWLock(
      (PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink,
      (PLOCK_STATE_EX)((unsigned __int64)&LockState & 0xFFFFFFFFFFFFFFC0uLL));
    NdisFreeRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
    if ( v0 )
      NdisFreeNetBufferListPool(v0);
  }
  if ( WPP_MAIN_CB.DeviceExtension )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.DeviceExtension, 0);
    WPP_MAIN_CB.DeviceExtension = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.Dpc.DeferredContext, 0);
    WPP_MAIN_CB.Dpc.DeferredContext = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.DeferredRoutine )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.Dpc.DeferredRoutine, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.ProcessorHistory )
  {
    ExFreePoolWithTag((PVOID)WPP_MAIN_CB.Dpc.ProcessorHistory, 0);
    WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.DpcListEntry.Next )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.Dpc.DpcListEntry.Next, 0);
    WPP_MAIN_CB.Dpc.DpcListEntry.Next = 0LL;
  }
}

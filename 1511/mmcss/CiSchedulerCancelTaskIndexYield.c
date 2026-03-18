/*
 * XREFs of CiSchedulerCancelTaskIndexYield @ 0x1C00019E0
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A3D0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x1C0001250 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001370 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0001A40 (CiSchedulerRemoveDeadline.c)
 *     CiLogTaskIndexCancelYield @ 0x1C00039D4 (CiLogTaskIndexCancelYield.c)
 */

void __fastcall CiSchedulerCancelTaskIndexYield(__int64 a1)
{
  if ( byte_1C0007298 )
    CiLogTaskIndexCancelYield();
  CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    CiSchedulerUpdateTaskIndexPriorities(a1);
  }
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}

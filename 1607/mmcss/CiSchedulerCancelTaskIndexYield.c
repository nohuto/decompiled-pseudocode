/*
 * XREFs of CiSchedulerCancelTaskIndexYield @ 0x1C0001900
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A2A0 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x1C0001000 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001800 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerRemoveDeadline @ 0x1C0001990 (CiSchedulerRemoveDeadline.c)
 *     CiLogTaskIndexCancelYield @ 0x1C0003D5C (CiLogTaskIndexCancelYield.c)
 */

void __fastcall CiSchedulerCancelTaskIndexYield(__int64 a1)
{
  char v1; // di

  v1 = 0;
  if ( byte_1C0007290 )
    CiLogTaskIndexCancelYield();
  CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( *(_QWORD *)(a1 + 80) )
  {
    CiSchedulerRemoveDeadline(a1 + 56);
    v1 = 1;
  }
  if ( *(_BYTE *)(a1 + 132) && *(_QWORD *)(a1 + 120) )
  {
    CiSchedulerRemoveDeadline(a1 + 96);
  }
  else if ( !v1 )
  {
    goto LABEL_9;
  }
  CiSchedulerUpdateTaskIndexPriorities(a1);
LABEL_9:
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}

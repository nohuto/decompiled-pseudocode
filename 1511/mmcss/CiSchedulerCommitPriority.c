/*
 * XREFs of CiSchedulerCommitPriority @ 0x1C0001730
 * Callers:
 *     CiThreadSetRelativePriority @ 0x1C000A650 (CiThreadSetRelativePriority.c)
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x1C0001250 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerSetPriority @ 0x1C0001930 (CiSchedulerSetPriority.c)
 */

void __fastcall CiSchedulerCommitPriority(__int64 a1)
{
  CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  CiSchedulerSetPriority(a1);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}

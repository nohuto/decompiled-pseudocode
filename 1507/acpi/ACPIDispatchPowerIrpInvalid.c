/*
 * XREFs of ACPIDispatchPowerIrpInvalid @ 0x1C0023470
 * Callers:
 *     ACPIProcessorDeviceControl @ 0x1C0069B70 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDispatchPowerIrpInvalid(__int64 a1, IRP *a2)
{
  a2->IoStatus.Status = -1073741822;
  IofCompleteRequest(a2, 0);
  return 3221225474LL;
}

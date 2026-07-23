/*
 * XREFs of PoRequestPowerIrp @ 0x14012B0E0
 * Callers:
 *     PopScanIdleList @ 0x1400094AC (PopScanIdleList.c)
 * Callees:
 *     PopRequestPowerIrp @ 0x14012B108 (PopRequestPowerIrp.c)
 */

NTSTATUS __stdcall PoRequestPowerIrp(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        PIRP *Irp)
{
  return PopRequestPowerIrp((int)DeviceObject, (__int64)Context, 0, (__int64)Irp);
}

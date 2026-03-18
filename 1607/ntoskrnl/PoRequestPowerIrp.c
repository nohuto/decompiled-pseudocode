/*
 * XREFs of PoRequestPowerIrp @ 0x14012AB70
 * Callers:
 *     PopScanIdleList @ 0x140009938 (PopScanIdleList.c)
 * Callees:
 *     PopRequestPowerIrp @ 0x14012AB98 (PopRequestPowerIrp.c)
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

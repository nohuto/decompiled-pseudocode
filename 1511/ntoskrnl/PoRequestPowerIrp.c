/*
 * XREFs of PoRequestPowerIrp @ 0x140121B0C
 * Callers:
 *     PopScanIdleList @ 0x1400990D8 (PopScanIdleList.c)
 *     VerifierPoRequestPowerIrp @ 0x1406C0BB0 (VerifierPoRequestPowerIrp.c)
 * Callees:
 *     PopRequestPowerIrp @ 0x140121B34 (PopRequestPowerIrp.c)
 */

NTSTATUS __stdcall PoRequestPowerIrp(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        PIRP *Irp)
{
  return PopRequestPowerIrp((int)DeviceObject, (__int64)Context, 0, (PIRP)Irp);
}

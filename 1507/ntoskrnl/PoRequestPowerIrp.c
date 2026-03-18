/*
 * XREFs of PoRequestPowerIrp @ 0x140136E4C
 * Callers:
 *     PopScanIdleList @ 0x1400D0490 (PopScanIdleList.c)
 *     VerifierPoRequestPowerIrp @ 0x1407423F0 (VerifierPoRequestPowerIrp.c)
 * Callees:
 *     PopRequestPowerIrp @ 0x140136E74 (PopRequestPowerIrp.c)
 */

NTSTATUS __stdcall PoRequestPowerIrp(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        PIRP *Irp)
{
  return PopRequestPowerIrp(DeviceObject, (__int64)Context, 0, (PIRP)Irp);
}

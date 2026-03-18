/*
 * XREFs of PoRequestPowerIrp_0 @ 0x1C000FE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall PoRequestPowerIrp_0(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PREQUEST_POWER_COMPLETE CompletionFunction,
        PVOID Context,
        PIRP *Irp)
{
  return PoRequestPowerIrp(DeviceObject, MinorFunction, PowerState, CompletionFunction, Context, Irp);
}

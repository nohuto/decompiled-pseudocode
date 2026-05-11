/*
 * XREFs of PowerIrpComplete @ 0x1C0001BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PowerIrpComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        PVOID Context)
{
  KeSetEvent((PRKEVENT)Context + 22, 0, 0);
  KeReleaseSemaphore((PRKSEMAPHORE)Context + 20, 0, 1, 0);
}

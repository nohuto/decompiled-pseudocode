/*
 * XREFs of AcpiCPCNotifyWorker @ 0x1C0011740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall AcpiCPCNotifyWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  CpcNotifyWorker(DeviceObject, Context);
}

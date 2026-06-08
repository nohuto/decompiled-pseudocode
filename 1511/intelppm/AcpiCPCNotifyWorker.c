/*
 * XREFs of AcpiCPCNotifyWorker @ 0x1C001B300
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

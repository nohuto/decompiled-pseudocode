/*
 * XREFs of AcpiCppcGuaranteedNotifyWorker @ 0x1C00119B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall AcpiCppcGuaranteedNotifyWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  CpcGuaranteedNotifyWorker(DeviceObject, Context);
}

/*
 * XREFs of AcpiCppcGuaranteedNotifyWorker @ 0x1C001E8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall AcpiCppcGuaranteedNotifyWorker(__int64 DeviceObject, struct _IO_WORKITEM *Context)
{
  CpcGuaranteedNotifyWorker(DeviceObject, Context);
}

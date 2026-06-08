/*
 * XREFs of AcpiCPCNotifyWorker @ 0x1C001D1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall AcpiCPCNotifyWorker(__int64 DeviceObject, struct _IO_WORKITEM *Context)
{
  CpcNotifyWorker(DeviceObject, Context);
}

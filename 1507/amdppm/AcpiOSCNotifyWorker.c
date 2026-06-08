/*
 * XREFs of AcpiOSCNotifyWorker @ 0x1C0001820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AcpiOSCNotifyWorker(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  if ( Context )
    IoFreeWorkItem(Context);
}

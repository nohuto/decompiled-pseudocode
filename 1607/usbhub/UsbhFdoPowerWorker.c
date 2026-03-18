/*
 * XREFs of UsbhFdoPowerWorker @ 0x1C0045ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __fastcall UsbhFdoPowerWorker(struct _DEVICE_OBJECT *a1, IRP *a2, __int64 a3, __int64 a4)
{
  return UsbhFdoPowerWorkerInternal(a1, a2, a3, a4);
}

/*
 * XREFs of IoSetHardErrorOrVerifyDevice @ 0x1401C90C8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoSetHardErrorOrVerifyDevice(PIRP Irp, PDEVICE_OBJECT DeviceObject)
{
  PETHREAD Thread; // rax

  Thread = Irp->Tail.Overlay.Thread;
  if ( Thread )
    Thread[1].ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)DeviceObject;
}

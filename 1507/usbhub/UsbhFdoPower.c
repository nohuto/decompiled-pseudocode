/*
 * XREFs of UsbhFdoPower @ 0x1C00247F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoPowerWorkerInternal @ 0x1C0024820 (UsbhFdoPowerWorkerInternal.c)
 *     Usbh_HubDeferIrpProcessing @ 0x1C00461FC (Usbh_HubDeferIrpProcessing.c)
 */

__int64 __fastcall UsbhFdoPower(__int64 a1, IRP *a2)
{
  unsigned int v3; // ebx
  int v5; // eax

  if ( KeGetCurrentIrql() >= 2u )
  {
    v5 = Usbh_HubDeferIrpProcessing(a1, a1, UsbhFdoPowerWorker, a2);
    v3 = v5;
    if ( v5 >= 0 )
    {
      return 259;
    }
    else
    {
      a2->IoStatus.Status = v5;
      IofCompleteRequest(a2, 0);
    }
  }
  else
  {
    return (unsigned int)UsbhFdoPowerWorkerInternal();
  }
  return v3;
}

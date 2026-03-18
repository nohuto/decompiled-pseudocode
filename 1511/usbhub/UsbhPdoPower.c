/*
 * XREFs of UsbhPdoPower @ 0x1C000C830
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPdoPowerWorkerInternal @ 0x1C000C9D8 (UsbhPdoPowerWorkerInternal.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Usbh_HubDeferIrpProcessing @ 0x1C004632C (Usbh_HubDeferIrpProcessing.c)
 */

__int64 __fastcall UsbhPdoPower(__int64 a1, IRP *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  int v7; // eax

  if ( KeGetCurrentIrql() >= 2u )
  {
    v6 = PdoExt(a1);
    v7 = Usbh_HubDeferIrpProcessing(*(_QWORD *)(v6 + 1176), a1, UsbhPdoPowerWorker, a2);
    v4 = v7;
    if ( v7 >= 0 )
    {
      return 259;
    }
    else
    {
      a2->IoStatus.Status = v7;
      IofCompleteRequest(a2, 0);
    }
  }
  else
  {
    return (unsigned int)UsbhPdoPowerWorkerInternal();
  }
  return v4;
}

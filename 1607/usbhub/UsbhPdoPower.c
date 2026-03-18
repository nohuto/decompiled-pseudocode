/*
 * XREFs of UsbhPdoPower @ 0x1C001ACB0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhPdoPowerWorkerInternal @ 0x1C001ABD8 (UsbhPdoPowerWorkerInternal.c)
 *     Usbh_HubDeferIrpProcessing @ 0x1C00465AC (Usbh_HubDeferIrpProcessing.c)
 */

__int64 __fastcall UsbhPdoPower(ULONG_PTR a1, IRP *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  _DWORD *v8; // rax
  int v9; // eax

  if ( KeGetCurrentIrql() >= 2u )
  {
    v8 = PdoExt(a1, (__int64)a2, a3, a4);
    v9 = Usbh_HubDeferIrpProcessing(*((_QWORD *)v8 + 147), a1, UsbhPdoPowerWorker, a2);
    v6 = v9;
    if ( v9 >= 0 )
    {
      return 259;
    }
    else
    {
      a2->IoStatus.Status = v9;
      IofCompleteRequest(a2, 0);
    }
  }
  else
  {
    return (unsigned int)UsbhPdoPowerWorkerInternal(a1, a2, a3, a4);
  }
  return v6;
}

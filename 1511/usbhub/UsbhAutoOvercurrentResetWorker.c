/*
 * XREFs of UsbhAutoOvercurrentResetWorker @ 0x1C003DE30
 * Callers:
 *     <none>
 * Callees:
 *     Usbh__TestPoint__Ulong @ 0x1C00058D0 (Usbh__TestPoint__Ulong.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhReferenceListAdd @ 0x1C001E480 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x1C0024EB0 (UsbhReferenceListRemove.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E018 (UsbhOvercurrentResetWorker.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003E538 (Usbh_OvercurrentDerefHubBusy.c)
 */

void __fastcall UsbhAutoOvercurrentResetWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 PortData; // rbp
  __int64 v8; // r8
  __int64 v9; // r9

  v5 = a2;
  FdoExt(a1, a2, a3, a4);
  PortData = UsbhGetPortData(a1, v5);
  if ( (int)Usbh__TestPoint__Ulong(a1, 8u, 0, v5) < 0 || (int)UsbhReferenceListAdd(a1, a3, 1466000239) < 0 )
  {
    LOBYTE(v8) = 1;
    Usbh_OvercurrentDerefHubBusy(a1, PortData, v8);
  }
  else
  {
    LOBYTE(v9) = 1;
    UsbhOvercurrentResetWorker(a1, v5, a3, v9);
    UsbhReferenceListRemove(a1, a3);
  }
}

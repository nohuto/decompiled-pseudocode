/*
 * XREFs of UsbhAutoOvercurrentResetWorker @ 0x1C003DC00
 * Callers:
 *     <none>
 * Callees:
 *     Usbh__TestPoint__Ulong @ 0x1C00075B8 (Usbh__TestPoint__Ulong.c)
 *     UsbhReferenceListAdd @ 0x1C000A030 (UsbhReferenceListAdd.c)
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhReferenceListRemove @ 0x1C00257E0 (UsbhReferenceListRemove.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003DDE8 (UsbhOvercurrentResetWorker.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003E308 (Usbh_OvercurrentDerefHubBusy.c)
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

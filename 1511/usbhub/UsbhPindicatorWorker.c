/*
 * XREFs of UsbhPindicatorWorker @ 0x1C003DA50
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C003DD04 (Usbh_PIND_Timeout_Action.c)
 */

__int64 __fastcall UsbhPindicatorWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // bx
  __int64 result; // rax

  v5 = a2;
  FdoExt(a1, a2, a3, a4);
  result = UsbhGetPortData(a1, v5);
  if ( result )
    return Usbh_PIND_Timeout_Action(a1, result, a3);
  return result;
}

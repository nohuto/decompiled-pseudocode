/*
 * XREFs of UsbhSetPindicatorState @ 0x1C0028674
 * Callers:
 *     Usbh_PIND_Enable_Action @ 0x1C00285AC (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_Disable_Action @ 0x1C003DA9C (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C003DB60 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C003DC24 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C003DD04 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

__int64 __fastcall UsbhSetPindicatorState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v6; // rax
  __int64 result; // rax

  v4 = a3;
  FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  v6 = *(unsigned int *)(a2 + 2828);
  *(_DWORD *)(a2 + 2824) = v4;
  result = 32 * (v6 + 78);
  *(_DWORD *)(result + a2) = v4;
  return result;
}

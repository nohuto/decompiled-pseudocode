/*
 * XREFs of UsbhLockPindicator @ 0x1C0028E84
 * Callers:
 *     Usbh_PIND_Enable_Action @ 0x1C0028C6C (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_Disable_Action @ 0x1C003DDBC (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C003DE80 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C003DF44 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C003E024 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall UsbhLockPindicator(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  _DWORD *v7; // rax
  __int64 v8; // rcx

  v5 = a3;
  v7 = FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  KeWaitForSingleObject(v7 + 1280, Executive, 0, 0, 0LL);
  *(_DWORD *)(a1 + 112) = 2017742416;
  *(_DWORD *)(a1 + 116) = v5;
  v8 = ((unsigned __int8)*(_DWORD *)(a2 + 2828) + 1) & 7;
  *(_DWORD *)(a2 + 2828) = v8;
  v8 *= 32LL;
  *(_DWORD *)(v8 + a2 + 2488) = v5;
  *(_DWORD *)(v8 + a2 + 2492) = *(_DWORD *)(a2 + 2824);
  return *(unsigned int *)(a2 + 2824);
}

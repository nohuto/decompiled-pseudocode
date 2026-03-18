/*
 * XREFs of UsbhUnlockPindicator @ 0x1C0028CFC
 * Callers:
 *     Usbh_PIND_Enable_Action @ 0x1C0028C6C (Usbh_PIND_Enable_Action.c)
 *     Usbh_PIND_Disable_Action @ 0x1C003DDBC (Usbh_PIND_Disable_Action.c)
 *     Usbh_PIND_SetAuto_Action @ 0x1C003DE80 (Usbh_PIND_SetAuto_Action.c)
 *     Usbh_PIND_SetBlink_Action @ 0x1C003DF44 (Usbh_PIND_SetBlink_Action.c)
 *     Usbh_PIND_Timeout_Action @ 0x1C003E024 (Usbh_PIND_Timeout_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

LONG __fastcall UsbhUnlockPindicator(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KSEMAPHORE *v5; // rax

  v5 = (struct _KSEMAPHORE *)FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  *(_DWORD *)(a1 + 112) = 1734964085;
  return KeReleaseSemaphore(v5 + 160, 16, 1, 0);
}

/*
 * XREFs of Usbh_PIND_Enable_Action @ 0x1C00295EC
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x1C0029550 (UsbhDispatch_PindicatorEvent.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSetPindicatorState @ 0x1C00296B4 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x1C00296F0 (UsbhSetPortIndicator.c)
 *     UsbhLockPindicator @ 0x1C0029804 (UsbhLockPindicator.c)
 */

__int64 __fastcall Usbh_PIND_Enable_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  int v8; // r11d

  FdoExt(a1, a2, a3, a4);
  v7 = UsbhLockPindicator(a3, a2, 5LL);
  Log(a1, 0x8000, 1718383411, v7, *(unsigned __int16 *)(a2 + 4));
  if ( v8 == 4 )
  {
    UsbhSetPortIndicator(a1);
    UsbhSetPindicatorState(a3, a2, 3LL);
  }
  return UsbhUnlockPindicator(a3);
}

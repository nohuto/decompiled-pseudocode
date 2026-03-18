/*
 * XREFs of Usbh_PIND_SetBlink_Action @ 0x1C003D9F4
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x1C0029550 (UsbhDispatch_PindicatorEvent.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhEnableTimerObject @ 0x1C001A8E0 (UsbhEnableTimerObject.c)
 *     UsbhSetPindicatorState @ 0x1C00296B4 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x1C00296F0 (UsbhSetPortIndicator.c)
 *     UsbhLockPindicator @ 0x1C0029804 (UsbhLockPindicator.c)
 */

LONG __fastcall Usbh_PIND_SetBlink_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r11d
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9

  FdoExt(a1, a2, a3, a4);
  v8 = UsbhLockPindicator(a3, a2, 4LL, v7);
  Log(a1, 0x8000, 1718383409, v8, *(unsigned __int16 *)(a2 + 4));
  if ( v12 > 0 )
  {
    if ( v12 <= 2 )
    {
      v13 = (unsigned int)v12;
      goto LABEL_8;
    }
    if ( v12 == 3 )
    {
      UsbhEnableTimerObject(
        *(_QWORD *)(a3 + 8),
        a2 + 2744,
        *(unsigned int *)(a2 + 2832),
        *(unsigned __int16 *)(a2 + 4),
        a3,
        0x646E6950u);
      UsbhSetPindicatorState(a3, a2, 1LL, v14);
      UsbhSetPortIndicator(a1, *(unsigned __int16 *)(a2 + 4), 768LL, v15);
    }
    else if ( v12 == 4 )
    {
      v13 = 4LL;
LABEL_8:
      UsbhSetPindicatorState(a3, a2, v13, v11);
    }
  }
  return UsbhUnlockPindicator(a3, v9, v10, v11);
}

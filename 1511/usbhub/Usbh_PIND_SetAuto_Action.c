/*
 * XREFs of Usbh_PIND_SetAuto_Action @ 0x1C003DB60
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x1C0028510 (UsbhDispatch_PindicatorEvent.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x1C000E0A0 (UsbhDisableTimerObject.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSetPindicatorState @ 0x1C0028674 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x1C00286B0 (UsbhSetPortIndicator.c)
 *     UsbhLockPindicator @ 0x1C00287C4 (UsbhLockPindicator.c)
 */

LONG __fastcall Usbh_PIND_SetAuto_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r11d
  __int64 v13; // r9

  FdoExt(a1, a2, a3, a4);
  v8 = UsbhLockPindicator(a3, a2, 3LL, v7);
  Log(a1, 0x8000, 1718383412, v8, *(unsigned __int16 *)(a2 + 4));
  if ( v12 <= 0 )
    return UsbhUnlockPindicator(a3, v9, v10, v11);
  if ( v12 <= 2 )
  {
    UsbhDisableTimerObject(*(_QWORD *)(a3 + 8), a2 + 2744, v10, v11);
    goto LABEL_7;
  }
  if ( v12 == 3 )
  {
LABEL_7:
    UsbhSetPindicatorState(a3, a2, 3LL, v11);
    UsbhSetPortIndicator(a1, *(unsigned __int16 *)(a2 + 4), 0LL, v13);
    return UsbhUnlockPindicator(a3, v9, v10, v11);
  }
  v10 = 4LL;
  if ( v12 == 4 )
    UsbhSetPindicatorState(a3, a2, 4LL, v11);
  return UsbhUnlockPindicator(a3, v9, v10, v11);
}

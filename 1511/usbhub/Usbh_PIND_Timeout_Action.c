/*
 * XREFs of Usbh_PIND_Timeout_Action @ 0x1C003DD04
 * Callers:
 *     UsbhDispatch_PindicatorEvent @ 0x1C0028510 (UsbhDispatch_PindicatorEvent.c)
 *     UsbhPindicatorWorker @ 0x1C003DA50 (UsbhPindicatorWorker.c)
 * Callees:
 *     UsbhEnableTimerObject @ 0x1C000E3D0 (UsbhEnableTimerObject.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSetPindicatorState @ 0x1C0028674 (UsbhSetPindicatorState.c)
 *     UsbhSetPortIndicator @ 0x1C00286B0 (UsbhSetPortIndicator.c)
 *     UsbhLockPindicator @ 0x1C00287C4 (UsbhLockPindicator.c)
 */

LONG __fastcall Usbh_PIND_Timeout_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r11d
  __int64 v13; // rcx
  __int64 v14; // r8

  FdoExt(a1, a2, a3, a4);
  v8 = UsbhLockPindicator(a3, a2, 1LL, v7);
  Log(a1, 0x8000, 1718383413, v8, *(unsigned __int16 *)(a2 + 4));
  if ( v12 == 1 )
  {
    UsbhSetPortIndicator(a1, *(unsigned __int16 *)(a2 + 4), *(unsigned __int16 *)(a2 + 2836), v11);
    UsbhEnableTimerObject(
      *(_QWORD *)(a3 + 8),
      a2 + 2744,
      *(unsigned int *)(a2 + 2832),
      *(unsigned __int16 *)(a2 + 4),
      a3,
      0x646E6950u);
    v14 = 2LL;
    goto LABEL_7;
  }
  if ( v12 == 2 )
  {
    UsbhSetPortIndicator(a1, *(unsigned __int16 *)(a2 + 4), 768LL, v11);
    UsbhEnableTimerObject(
      *(_QWORD *)(a3 + 8),
      a2 + 2744,
      *(unsigned int *)(a2 + 2832),
      *(unsigned __int16 *)(a2 + 4),
      a3,
      0x646E6950u);
    v14 = 1LL;
LABEL_7:
    v13 = a3;
    goto LABEL_8;
  }
  v13 = a3;
  if ( v12 - 3 <= 1 )
  {
    v14 = v12;
LABEL_8:
    UsbhSetPindicatorState(v13, a2, v14, v11);
    v13 = a3;
  }
  return UsbhUnlockPindicator(v13, v9, v10, v11);
}

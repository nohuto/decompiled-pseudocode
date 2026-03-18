/*
 * XREFs of Usbh_BS_BusRemove @ 0x1C003F48C
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C0021780 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_BS_BusRemove(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebp
  __int64 v11; // r9

  v4 = (int)a3;
  FdoExt((__int64)a1, a2, a3, a4);
  FdoExt(*(_QWORD *)(a2 + 8), v7, v8, v9);
  v10 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651724371, a2, v4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      15,
      (__int64)&WPP_fbd879e33feb48e7a921aba0522b0728_Traceguids,
      v4);
  return UsbhReleaseBusStateLock(a1, a2, v10, v11);
}

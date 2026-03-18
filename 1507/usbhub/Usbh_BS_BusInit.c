/*
 * XREFs of Usbh_BS_BusInit @ 0x1C001C22C
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C0019640 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_BS_BusInit(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned int v7; // ebp
  __int64 v8; // r9
  __int64 v9; // r8

  v5 = (int)a3;
  FdoExt(*(_QWORD *)(a2 + 8), a2, a3, a4);
  v7 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651722574, a2, v5);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      10,
      (__int64)&WPP_fbd879e33feb48e7a921aba0522b0728_Traceguids,
      v5);
  v9 = v7;
  if ( (_DWORD)v5 == 1 )
    v9 = 2LL;
  return UsbhReleaseBusStateLock(a1, a2, v9, v8);
}

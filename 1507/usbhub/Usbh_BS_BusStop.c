/*
 * XREFs of Usbh_BS_BusStop @ 0x1C001C2B0
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C0019640 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0044AE4 (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusStop(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebp
  __int64 v11; // r9
  __int64 v12; // r8
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx

  v4 = (int)a3;
  FdoExt((__int64)a1, a2, a3, a4);
  FdoExt(*(_QWORD *)(a2 + 8), v7, v8, v9);
  v10 = *(_DWORD *)(a2 + 80);
  Log((__int64)a1, 2048, 1651725140, a2, v4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      11,
      (__int64)&WPP_fbd879e33feb48e7a921aba0522b0728_Traceguids,
      v4);
  v12 = 6LL;
  if ( (int)v4 > 6 )
  {
    if ( (int)v4 <= 8 )
      goto LABEL_10;
    if ( (_DWORD)v4 == 9 )
      goto LABEL_8;
    if ( (_DWORD)v4 != 12 )
      goto LABEL_10;
    Usbh_BusRemove_PdoEvent(*(_QWORD *)(a2 + 8), a2);
    goto LABEL_13;
  }
  if ( (_DWORD)v4 == 6 )
    goto LABEL_10;
  v13 = v4 - 2;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
LABEL_8:
        v12 = 4LL;
        return UsbhReleaseBusStateLock(a1, a2, v12, v11);
      }
      if ( v15 == 1 )
      {
        v12 = 3LL;
        return UsbhReleaseBusStateLock(a1, a2, v12, v11);
      }
LABEL_10:
      v12 = v10;
      return UsbhReleaseBusStateLock(a1, a2, v12, v11);
    }
LABEL_13:
    v12 = 2LL;
  }
  return UsbhReleaseBusStateLock(a1, a2, v12, v11);
}

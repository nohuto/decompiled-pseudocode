/*
 * XREFs of Usbh_BS_BusSuspend @ 0x1C0003D94
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C0019640 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     UsbhBusReset_Action @ 0x1C0003E4C (UsbhBusReset_Action.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhBusDisconnect_Action @ 0x1C003EF30 (UsbhBusDisconnect_Action.c)
 *     UsbhBusPnpStop_Action @ 0x1C003EFB0 (UsbhBusPnpStop_Action.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Usbh_BS_BusSuspend(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx

  v3 = a3;
  FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  Log(a1, 2048, 1651724371, a2, v3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_fbd879e33feb48e7a921aba0522b0728_Traceguids,
      v3);
  v6 = v3 - 3;
  if ( v6 )
  {
    v7 = v6 - 4;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = a2;
        v10 = a1;
        v11 = v8 - 2;
        if ( v11 )
        {
          if ( v11 != 1 )
            return UsbhReleaseBusStateLock(v10, v9);
          UsbhBusDisconnect_Action(a1, a2);
        }
        else
        {
          UsbhBusReset_Action(a1, a2);
        }
      }
    }
  }
  else
  {
    UsbhBusPnpStop_Action(a1, a2);
  }
  v9 = a2;
  v10 = a1;
  return UsbhReleaseBusStateLock(v10, v9);
}

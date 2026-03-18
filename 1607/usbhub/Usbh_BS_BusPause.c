/*
 * XREFs of Usbh_BS_BusPause @ 0x1C000D114
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C000CF00 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     UsbhBusDisconnect_Action @ 0x1C003F480 (UsbhBusDisconnect_Action.c)
 *     UsbhBusPnpStop_Action @ 0x1C003F500 (UsbhBusPnpStop_Action.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0044F54 (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusPause(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _DWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  __int64 v15; // rdx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx

  v4 = (int)a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_DWORD **)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v7, a3, a4);
  FdoExt(*(_QWORD *)(a2 + 8));
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 1397781346;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = a2;
      *(_QWORD *)(v9 + 24) = v4;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_99dd9bfc408b3f1dff14dd9b257ad869_Traceguids,
      v4);
  v10 = v4 - 3;
  if ( v10 )
  {
    v11 = v10 - 2;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v17 = v14 - 1;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v15 = a2;
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 != 1 )
                    return UsbhReleaseBusStateLock(a1, v15);
                  Usbh_BusRemove_PdoEvent(*(_QWORD *)(a2 + 8), a2);
                }
                else
                {
                  UsbhBusDisconnect_Action(a1, a2);
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    UsbhBusPnpStop_Action(a1, a2);
  }
  v15 = a2;
  return UsbhReleaseBusStateLock(a1, v15);
}

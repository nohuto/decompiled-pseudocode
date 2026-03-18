/*
 * XREFs of UsbhFinishStart @ 0x1C001B760
 * Callers:
 *     UsbhHubStart @ 0x1C000A268 (UsbhHubStart.c)
 *     UsbhAsyncStartComplete @ 0x1C0020E84 (UsbhAsyncStartComplete.c)
 * Callees:
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001212C (UsbhDispatch_HardResetEvent.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C001B4B0 (UsbhSyncPowerOnPorts.c)
 *     UsbhEnablePortIndicators @ 0x1C001D834 (UsbhEnablePortIndicators.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     UsbhLogStartFailure @ 0x1C003C578 (UsbhLogStartFailure.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041718 (UsbhQueueSoftConnectChange.c)
 *     UsbhDisablePort @ 0x1C004332C (UsbhDisablePort.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhFinishStart(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int16 i; // di
  __int64 v11; // rdx
  int v12; // eax
  char v14; // r10
  int v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+90h] [rbp+18h] BYREF
  int v17; // [rsp+98h] [rbp+20h] BYREF

  Log(a1, 16, 1715622740, a1, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids);
  v7 = UsbhSyncPowerOnPorts(a1, v4, v5, v6);
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    UsbhLogStartFailure(a1, v7, 3, 482, (__int64)"drivers\\wdm\\usb\\hub\\usbhub\\bus.c", "PowerOnPorts");
  }
  else
  {
    UsbhEnablePortIndicators(a1);
    for ( i = 1; ; ++i )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL, v8, v9);
      v11 = *(_QWORD *)(a1 + 64);
      if ( !v11 )
        UsbhTrapFatal_Dbg(a1, 0LL, v8, v9);
      if ( *(_DWORD *)v11 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v11, v8, v9);
      if ( i > *(unsigned __int8 *)(v11 + 2938) )
        break;
      v12 = UsbhQueryPortState(a1, i, &v16, &v17);
      v7 = v12;
      if ( (v12 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 16, 1768843569, i + 1, v12);
        if ( !(unsigned __int8)Usb_Disconnected((unsigned int)v7) )
        {
          LOBYTE(v15) = 0;
          UsbhException(a1, i, 23, 0, 0, v7, v17, usbfile_bus_c, 511, v15);
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            13,
            (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids,
            v7);
        break;
      }
      if ( (v16 & 1) != 0 && (v16 & 0x10000) == 0 )
      {
        Log(a1, 16, 1768843570, i, v12);
        if ( (v14 & 2) != 0 )
        {
          if ( UsbhGetPortData(a1, i) )
            UsbhDisablePort(a1);
        }
        UsbhQueueSoftConnectChange(a1);
      }
    }
  }
  if ( v7 >= 0 )
  {
    Log(a1, 8, 1381192747, 0LL, 0LL);
    UsbhDispatch_HardResetEvent(a1, a2, 1);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids,
      v7);
  Log(a1, 16, 1718514515, a1, v7);
  return (unsigned int)v7;
}

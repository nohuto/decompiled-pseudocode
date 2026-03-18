/*
 * XREFs of UsbhFinishStart @ 0x1C0025AA0
 * Callers:
 *     UsbhHubStart @ 0x1C000AFA4 (UsbhHubStart.c)
 *     UsbhAsyncStartComplete @ 0x1C00259E4 (UsbhAsyncStartComplete.c)
 * Callees:
 *     UsbhQueryPortState @ 0x1C00150B0 (UsbhQueryPortState.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C0017864 (UsbhDispatch_HardResetEvent.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0018950 (UsbhSyncPowerOnPorts.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     UsbhEnablePortIndicators @ 0x1C0025C24 (UsbhEnablePortIndicators.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     UsbhLogStartFailure @ 0x1C003C998 (UsbhLogStartFailure.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041A50 (UsbhQueueSoftConnectChange.c)
 *     UsbhDisablePort @ 0x1C004366C (UsbhDisablePort.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
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
  __int64 v13; // r9
  char v15; // r10
  int v16; // [rsp+48h] [rbp-30h]
  char v17; // [rsp+90h] [rbp+18h] BYREF
  char v18; // [rsp+92h] [rbp+1Ah]
  int v19; // [rsp+98h] [rbp+20h] BYREF

  Log(a1, 16, 1715622740, a1, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids);
  v7 = UsbhSyncPowerOnPorts(a1, v4, v5, v6);
  if ( (v7 & 0xC0000000) == 0xC0000000 )
  {
    UsbhLogStartFailure(a1, v7, 3, 482, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\bus.c", "PowerOnPorts");
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
      v12 = UsbhQueryPortState(a1, i, (__int64)&v17, &v19);
      v7 = v12;
      if ( (v12 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 16, 1768843569, i + 1, v12);
        if ( !(unsigned __int8)Usb_Disconnected((unsigned int)v7) )
        {
          LOBYTE(v16) = 0;
          UsbhException(a1, i, 23, 0, 0, v7, v19, usbfile_bus_c, 511, v16);
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            13,
            (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
            v7);
        break;
      }
      if ( (v17 & 1) != 0 && (v18 & 1) == 0 )
      {
        Log(a1, 16, 1768843570, i, v12);
        if ( (v15 & 2) != 0 )
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
    UsbhDispatch_HardResetEvent(a1, a2, 1LL, v13);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_aa88946eb7ae3adf49862ed4f4bccb5e_Traceguids,
      v7);
  Log(a1, 16, 1718514515, a1, v7);
  return (unsigned int)v7;
}

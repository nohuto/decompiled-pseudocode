/*
 * XREFs of UsbhIoctlValidateParameters @ 0x1C004A218
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C0047854 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0047EDC (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048204 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C004844C (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C00486BC (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048950 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048BB4 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049004 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049310 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C00495E4 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049898 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049B54 (UsbhIoctlGetPortConnectorProperties.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhIoctlValidateParameters(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  int v8; // esi
  _DWORD *v10; // rax
  int v11; // r11d
  unsigned int v12; // r14d
  __int64 v13; // r11
  __int64 v14; // r10
  unsigned int v15; // ebx
  PDEVICE_OBJECT v16; // r10
  int *v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // [rsp+28h] [rbp-51h]
  int v24; // [rsp+48h] [rbp-31h]
  int v25[8]; // [rsp+50h] [rbp-29h] BYREF
  int v26; // [rsp+70h] [rbp-9h]

  v8 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x30u,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
  v10 = FdoExt(a1, a2, a3, a4);
  v11 = *(_DWORD *)(a4 + 16);
  v12 = *(_DWORD *)(a4 + 8);
  v25[1] = v8;
  v25[3] = v11;
  v25[2] = v12;
  v25[4] = a5;
  v25[5] = a6;
  v25[6] = v10[610];
  v25[7] = v10[640];
  v26 = 0;
  Log(a1, 32, 1768912433, a3, (__int64)v25);
  v15 = 0;
  if ( *(_DWORD *)(v14 + 2440) == 3 )
  {
    if ( (unsigned int)v13 >= a5 )
    {
      if ( v12 >= a6 )
      {
        if ( a5 < 4
          || (v17 = *(int **)(a3 + 24), v18 = v13, v25[0] = *v17, Log(a1, 32, 1768912437, (__int64)v17, v13), *v17)
          && *v17 <= (unsigned int)*((unsigned __int8 *)FdoExt(a1, v19, v20, v21) + 2938) )
        {
          v16 = WPP_GLOBAL_Control;
        }
        else
        {
          Log(a1, 32, 1768912437, (__int64)v17, v18);
          v16 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              0,
              2u,
              0x34u,
              (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
            v16 = WPP_GLOBAL_Control;
          }
          v15 = -1073741811;
          v26 = 2378;
        }
      }
      else
      {
        Log(a1, 32, 1768912436, 0LL, v13);
        v16 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            0,
            2u,
            0x33u,
            (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
          v16 = WPP_GLOBAL_Control;
        }
        v15 = -1073741789;
        v26 = 2358;
      }
    }
    else
    {
      Log(a1, 32, 1768912435, 0LL, v13);
      v16 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          2u,
          0x32u,
          (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
        v16 = WPP_GLOBAL_Control;
      }
      v15 = -1073741811;
      v26 = 2349;
    }
  }
  else
  {
    Log(a1, 32, 1768912434, 0LL, v13);
    v16 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        2u,
        0x31u,
        (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids);
      v16 = WPP_GLOBAL_Control;
    }
    v15 = -1073741823;
    v26 = 2340;
  }
  if ( (v15 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v15) )
  {
    LOBYTE(v24) = 0;
    UsbhException(a1, 0, 90, (int)v25, 36, v15, 0, usbfile_ioctl_c, 2392, v24);
    v16 = WPP_GLOBAL_Control;
  }
  if ( LOWORD(v16->DeviceType) )
  {
    LODWORD(v23) = v15;
    WPP_RECORDER_SF_d(
      (__int64)v16->DeviceExtension,
      0,
      2u,
      0x35u,
      (__int64)&WPP_c5061be8c249ed4c77ab6f516d1c6e21_Traceguids,
      v23);
  }
  return v15;
}

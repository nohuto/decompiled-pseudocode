/*
 * XREFs of UsbhIoctlTraceOutput @ 0x1C004A598
 * Callers:
 *     UsbhIoctlCyclePort @ 0x1C0047CC4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0048440 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048768 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C00489B0 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C0048C20 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048EB4 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0049118 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049554 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049860 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049B34 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049DE8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004A0A4 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C004A358 (UsbhIoctlResetStuckHub.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D488 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x1C004AB70 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x1C004AC88 (log_xstr.c)
 */

__int64 __fastcall UsbhIoctlTraceOutput(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r14
  unsigned int v5; // esi
  __int64 v6; // rbp
  __int64 v7; // r10
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r10
  int v11; // r11d
  int v12; // ebx
  PDEVICE_OBJECT v13; // r10
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 result; // rax
  __int128 *v17; // rax
  __int64 v18; // r10
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // [rsp+28h] [rbp-50h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  __int128 v24; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v25[16]; // [rsp+50h] [rbp-28h] BYREF

  Log(a1, 32, 1768907604, 0LL, a2);
  v3 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = *(unsigned int *)(v3 + 16);
  Log(v7, 32, 1768911921, v5, v6);
  Log(v8, 32, 1768911922, v4, v9);
  Log(v10, 32, 1768911923, *(int *)(a2 + 48), *(_QWORD *)(a2 + 56));
  v12 = *(_DWORD *)(a2 + 56);
  v13 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0xAu,
      (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
      v11);
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v21) = v6;
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v14,
        2u,
        0xBu,
        (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
        v21,
        v5);
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v23) = v12;
        LODWORD(v22) = *(_DWORD *)(a2 + 48);
        WPP_RECORDER_SF_dd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v15,
          2u,
          0xCu,
          (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
          v22,
          v23);
        v13 = WPP_GLOBAL_Control;
      }
    }
  }
  result = 255LL;
  if ( (_BYTE)v12 )
  {
    if ( LOWORD(v13->DeviceType) )
    {
      v17 = (__int128 *)log_xstr(v25, (unsigned __int8)v12, v4);
      v19 = *(_QWORD *)(v18 + 64);
      v24 = *v17;
      return WPP_RECORDER_SF__HEX_(
               v19,
               v20,
               2,
               14,
               (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids,
               (__int64)&v24);
    }
  }
  else if ( LOWORD(v13->DeviceType) )
  {
    return WPP_RECORDER_SF_(
             (__int64)v13->DeviceExtension,
             0,
             2u,
             0xDu,
             (__int64)&WPP_e883a43a6edf3c2e1fcd13976c1e54bf_Traceguids);
  }
  return result;
}

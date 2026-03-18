/*
 * XREFs of HUBMISC_ControlTransfer @ 0x1C0026388
 * Callers:
 *     HUBHTX_GetDescriptor @ 0x1C00027EC (HUBHTX_GetDescriptor.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0002B24 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_GetPortStatusUsingControlTransfer @ 0x1C000368C (HUBHTX_GetPortStatusUsingControlTransfer.c)
 *     HUBHTX_AckPortChangeUsingControlTransfer @ 0x1C00037C8 (HUBHTX_AckPortChangeUsingControlTransfer.c)
 *     HUBHTX_ResetPortUsingControlTransfer @ 0x1C00038B8 (HUBHTX_ResetPortUsingControlTransfer.c)
 *     HUBHTX_DisablePortUsingControlTransfer @ 0x1C00039C4 (HUBHTX_DisablePortUsingControlTransfer.c)
 *     HUBHTX_SettingPortPowerUsingControlTransfer @ 0x1C0003AC0 (HUBHTX_SettingPortPowerUsingControlTransfer.c)
 *     HUBHTX_Suspend30PortUsingControlTransfer @ 0x1C0003BD0 (HUBHTX_Suspend30PortUsingControlTransfer.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C0004D84 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBHTX_GetPortStatusForBootDevice @ 0x1C00051B8 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBHTX_ClearTTBuffer @ 0x1C00055B0 (HUBHTX_ClearTTBuffer.c)
 *     HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer @ 0x1C00058C0 (HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer.c)
 *     HUBHTX_SetLinkStateToRxDetectUsingControlTransfer @ 0x1C00059C4 (HUBHTX_SetLinkStateToRxDetectUsingControlTransfer.c)
 *     HUBHSM_SendingAckForHubChange @ 0x1C0007460 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_GettingHubStatus @ 0x1C0007C20 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_SettingHubDepth @ 0x1C0008030 (HUBHSM_SettingHubDepth.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x1C000AC54 (HUBFDO_GetPortStatusForDebugging.c)
 *     HUBPSM20_InitiatingResume @ 0x1C000D5A0 (HUBPSM20_InitiatingResume.c)
 *     HUBPSM20_Suspending @ 0x1C000DC70 (HUBPSM20_Suspending.c)
 *     HUBPSM30_InitiatingResume @ 0x1C000E280 (HUBPSM30_InitiatingResume.c)
 *     HUBPSM30_InitiatingWarmResetPort @ 0x1C000E390 (HUBPSM30_InitiatingWarmResetPort.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x1C000E820 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x1C000E950 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBPSM30_DisablingRemoteWakeOnPort @ 0x1C000EDD0 (HUBPSM30_DisablingRemoteWakeOnPort.c)
 *     HUBPSM30_EnablingRemoteWakeOnPort @ 0x1C000EEE0 (HUBPSM30_EnablingRemoteWakeOnPort.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1C00191E0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_ConfiguringDevice @ 0x1C001A100 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x1C001A600 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_SetttingIsochDelay @ 0x1C001AF90 (HUBDSM_SetttingIsochDelay.c)
 *     HUBDSM_DisablingU1 @ 0x1C001B2B0 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1C001B3B0 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingU1 @ 0x1C001B470 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x1C001B530 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x1C001B780 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C001F6E8 (HUBDTX_GetMsOsFeatureDescriptor.c)
 *     HUBDTX_GetDescriptor @ 0x1C001F76C (HUBDTX_GetDescriptor.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C001F9B8 (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C001FD6C (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C00206DC (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C00207D4 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C0021470 (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C0022134 (HUBDTX_SetSelUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C00223A8 (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00341F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
 */

__int64 __fastcall HUBMISC_ControlTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8,
        char a9)
{
  _QWORD *v9; // rbx
  int v10; // esi
  int v12; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rax
  int v20; // [rsp+28h] [rbp-71h]
  _QWORD v21[3]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v22[9]; // [rsp+48h] [rbp-51h] BYREF

  v9 = a4 + 3;
  v10 = 0;
  *((_DWORD *)a4 + 14) = 8;
  v12 = *((_DWORD *)a4 + 14);
  a4[4] = a2;
  *((_DWORD *)a4 + 6) = 3276936;
  if ( a8 )
    v12 = 10;
  *((_DWORD *)a4 + 14) = v12;
  if ( *((char *)a4 + 152) < 0 )
    *((_DWORD *)a4 + 14) |= 1u;
  if ( a9 )
    *((_DWORD *)a4 + 14) |= 0x10u;
  a4[9] = 0LL;
  *((_DWORD *)a4 + 15) = a7;
  a4[8] = a6;
  *((_DWORD *)a4 + 20) = 5000;
  *((_DWORD *)a4 + 10) = *((_DWORD *)a4 + 40);
  memset(v22, 0, sizeof(v22));
  v15 = *a4;
  LOBYTE(v22[0]) = 15;
  LODWORD(v22[3]) = 2228227;
  v22[1] = v9;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
    WdfDriverGlobals,
    v15,
    v22);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    *a4,
    a5,
    a3);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          *a4,
          *(_QWORD *)(a1 + 32),
          0LL) )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2440), 2u, 3u, 0x39u, (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids);
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, *a4);
    if ( v10 < 0 )
    {
      v16 = *a4;
      v21[1] = 0LL;
      v21[2] = 0LL;
      v21[0] = 24LL;
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1992))(
              WdfDriverGlobals,
              v16,
              v21);
      if ( v17 < 0 )
      {
        v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_1C0057090);
        v20 = v17;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v18 + 64),
          2u,
          2u,
          0x3Au,
          (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
          v20);
      }
    }
  }
  return (unsigned int)v10;
}

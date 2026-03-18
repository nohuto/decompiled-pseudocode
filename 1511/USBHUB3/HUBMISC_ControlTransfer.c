/*
 * XREFs of HUBMISC_ControlTransfer @ 0x1C0026FD8
 * Callers:
 *     HUBHTX_GetDescriptor @ 0x1C0002B2C (HUBHTX_GetDescriptor.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0002E64 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_GetPortStatusUsingControlTransfer @ 0x1C00039CC (HUBHTX_GetPortStatusUsingControlTransfer.c)
 *     HUBHTX_AckPortChangeUsingControlTransfer @ 0x1C0003B08 (HUBHTX_AckPortChangeUsingControlTransfer.c)
 *     HUBHTX_ResetPortUsingControlTransfer @ 0x1C0003BF8 (HUBHTX_ResetPortUsingControlTransfer.c)
 *     HUBHTX_DisablePortUsingControlTransfer @ 0x1C0003D04 (HUBHTX_DisablePortUsingControlTransfer.c)
 *     HUBHTX_SettingPortPowerUsingControlTransfer @ 0x1C0003E00 (HUBHTX_SettingPortPowerUsingControlTransfer.c)
 *     HUBHTX_Suspend30PortUsingControlTransfer @ 0x1C0003F10 (HUBHTX_Suspend30PortUsingControlTransfer.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C00052B8 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBHTX_GetPortStatusForBootDevice @ 0x1C00056E8 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBHTX_ClearTTBuffer @ 0x1C0005AE0 (HUBHTX_ClearTTBuffer.c)
 *     HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer @ 0x1C0005DF0 (HUBHTX_SetLinkStateToSSDisabledUsingControlTransfer.c)
 *     HUBHTX_SetLinkStateToRxDetectUsingControlTransfer @ 0x1C0005EF4 (HUBHTX_SetLinkStateToRxDetectUsingControlTransfer.c)
 *     HUBHSM_SendingAckForHubChange @ 0x1C00079C0 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_GettingHubStatus @ 0x1C0008180 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_SettingHubDepth @ 0x1C00085B0 (HUBHSM_SettingHubDepth.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x1C000B1D4 (HUBFDO_GetPortStatusForDebugging.c)
 *     HUBPSM20_InitiatingResume @ 0x1C000DB60 (HUBPSM20_InitiatingResume.c)
 *     HUBPSM20_Suspending @ 0x1C000E230 (HUBPSM20_Suspending.c)
 *     HUBPSM30_InitiatingResume @ 0x1C000E840 (HUBPSM30_InitiatingResume.c)
 *     HUBPSM30_InitiatingWarmResetPort @ 0x1C000E950 (HUBPSM30_InitiatingWarmResetPort.c)
 *     HUBPSM30_SettingU1TImeOut @ 0x1C000EDE0 (HUBPSM30_SettingU1TImeOut.c)
 *     HUBPSM30_SettingU2TImeOut @ 0x1C000EF10 (HUBPSM30_SettingU2TImeOut.c)
 *     HUBPSM30_DisablingRemoteWakeOnPort @ 0x1C000F390 (HUBPSM30_DisablingRemoteWakeOnPort.c)
 *     HUBPSM30_EnablingRemoteWakeOnPort @ 0x1C000F4A0 (HUBPSM30_EnablingRemoteWakeOnPort.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1C0019BA0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_ConfiguringDevice @ 0x1C001AAC0 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x1C001B080 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_EnablingLTM @ 0x1C001BA50 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_SetttingIsochDelay @ 0x1C001BB30 (HUBDSM_SetttingIsochDelay.c)
 *     HUBDSM_DisablingU1 @ 0x1C001BE50 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1C001BF50 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingU1 @ 0x1C001C010 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x1C001C0D0 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x1C001C320 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBDTX_GetMsOsFeatureDescriptor @ 0x1C00202F8 (HUBDTX_GetMsOsFeatureDescriptor.c)
 *     HUBDTX_GetDescriptor @ 0x1C002037C (HUBDTX_GetDescriptor.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C00205D0 (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C0020984 (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C0021310 (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C0021408 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C00220B0 (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C0022D80 (HUBDTX_SetSelUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C0022FF4 (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0034B70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
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
  void (__fastcall *v16)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *); // rax
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *); // rax
  int v19; // ebx
  __int64 v20; // rax
  _QWORD v22[3]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v23[9]; // [rsp+48h] [rbp-51h] BYREF

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
  memset(v23, 0, sizeof(v23));
  v15 = *a4;
  LOBYTE(v23[0]) = 15;
  v16 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016);
  LODWORD(v23[3]) = 2228227;
  v23[1] = v9;
  v16(WdfDriverGlobals, v15, v23);
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
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2464), 2u, 3u, 0x39u, (__int64)&WPP_4365074be9fe45a9236a5dea2660cd62_Traceguids);
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, *a4);
    if ( v10 < 0 )
    {
      v17 = *a4;
      memset(v22, 0, sizeof(v22));
      v18 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 1992);
      LODWORD(v22[0]) = 24;
      v19 = v18(WdfDriverGlobals, v17, v22);
      if ( v19 < 0 )
      {
        v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                WdfDriverGlobals->Driver,
                off_1C00570E8);
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v20 + 64),
          2u,
          2u,
          0x3Au,
          (__int64)&WPP_4365074be9fe45a9236a5dea2660cd62_Traceguids,
          v19);
      }
    }
  }
  return (unsigned int)v10;
}

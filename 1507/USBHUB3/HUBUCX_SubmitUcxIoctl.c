/*
 * XREFs of HUBUCX_SubmitUcxIoctl @ 0x1C001C170
 * Callers:
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C0016E60 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C0016FE0 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C00178D0 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C0017D00 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_SettingNonZeroAddress @ 0x1C0018C60 (HUBDSM_SettingNonZeroAddress.c)
 *     HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure @ 0x1C001A550 (HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C001B870 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl @ 0x1C001C3B4 (HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl.c)
 *     HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C001C454 (HUBUCX_NotifyDeviceResetUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001C60C (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001C834 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001C8E4 (HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C001CB40 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x1C001E44C (HUBUCX_PurgeDeviceIoUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl @ 0x1C001E4E8 (HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl.c)
 *     HUBUCX_StartDeviceIoUsingUCXIoctl @ 0x1C001E584 (HUBUCX_StartDeviceIoUsingUCXIoctl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C000FA0C (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_SubmitUcxIoctl(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  int v11; // ebx
  int USBDErrorFromNTStatus; // eax
  int v14; // [rsp+28h] [rbp-60h]
  _DWORD v15[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 400);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v15[3] = 0;
  v16 = 0LL;
  v15[1] = 0;
  v15[2] = 0;
  v15[0] = 24;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v4,
         v15);
  if ( v6 < 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C0057090);
    v14 = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v7 + 64),
      2u,
      2u,
      0x3Au,
      (__int64)&WPP_869fbaf8a3d1cd509c2dba31f5510baf_Traceguids,
      v14);
  }
  v8 = *(_QWORD *)(a1 + 416);
  v9 = *(_QWORD *)(a1 + 400);
  *(_DWORD *)(a1 + 424) = a2;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(WdfFunctions_01015 + 1528))(
          WdfDriverGlobals,
          v5,
          v9,
          a2,
          v8,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
  v11 = v10;
  if ( v10 < 0 )
    goto LABEL_6;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 2080))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 400),
    HUBUCX_UCXIoctlComplete,
    a1);
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 400),
          v5,
          0LL) )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2032))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 400));
    v11 = v10;
LABEL_6:
    *(_DWORD *)(a1 + 1544) = v10;
    if ( v10 == -1073741667 )
      USBDErrorFromNTStatus = -1073713152;
    else
      USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v10);
    *(_DWORD *)(a1 + 1548) = USBDErrorFromNTStatus;
  }
  if ( v11 < 0 )
    HUBSM_AddEvent(a1 + 488, 0xFB4u);
  return (unsigned int)v11;
}

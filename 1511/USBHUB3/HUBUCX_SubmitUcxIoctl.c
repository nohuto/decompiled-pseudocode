/*
 * XREFs of HUBUCX_SubmitUcxIoctl @ 0x1C001CD0C
 * Callers:
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C0017890 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C0017A10 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_UpdatingDeviceInformationInEnum @ 0x1C0018300 (HUBDSM_UpdatingDeviceInformationInEnum.c)
 *     HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum @ 0x1C0018730 (HUBDSM_UpdatingDefaultEndpointMaxPacketSizeInEnum.c)
 *     HUBDSM_SettingNonZeroAddress @ 0x1C0019690 (HUBDSM_SettingNonZeroAddress.c)
 *     HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure @ 0x1C001AFD0 (HUBDSM_AbortingDeviceIoInSuspendingBeforeArmingForWakeFailure.c)
 *     HUBDSM_CheckingIf20LPMShouldBeEnabled @ 0x1C001C410 (HUBDSM_CheckingIf20LPMShouldBeEnabled.c)
 *     HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl @ 0x1C001CF50 (HUBUCX_AcquireAddress0OwnershipUsingUCXIoctl.c)
 *     HUBUCX_NotifyDeviceResetUsingUCXIoctl @ 0x1C001CFF0 (HUBUCX_NotifyDeviceResetUsingUCXIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001D1A8 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001D3D0 (HUBUCX_DisableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl @ 0x1C001D480 (HUBUCX_EnableDeviceAndDefaultEndpointUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C001D6DC (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoUsingUCXIoctl @ 0x1C001EF8C (HUBUCX_PurgeDeviceIoUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl @ 0x1C001F038 (HUBUCX_PurgeDeviceIoForSuspendUsingUCXIoctl.c)
 *     HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl @ 0x1C001F0E4 (HUBUCX_PurgeDeviceTreeIoUsingUCXIoctl.c)
 *     HUBUCX_StartDeviceIoUsingUCXIoctl @ 0x1C001F18C (HUBUCX_StartDeviceIoUsingUCXIoctl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     HUBPDO_GetUSBDErrorFromNTStatus @ 0x1C00100E4 (HUBPDO_GetUSBDErrorFromNTStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_SubmitUcxIoctl(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  PWDF_DRIVER_GLOBALS v10; // rcx
  int v11; // eax
  int v12; // ebx
  int USBDErrorFromNTStatus; // eax
  __int64 v15; // [rsp+20h] [rbp-68h]
  int v16; // [rsp+28h] [rbp-60h]
  _DWORD v17[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v18; // [rsp+70h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 400);
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  v17[3] = 0;
  v18 = 0LL;
  v17[1] = 0;
  v17[2] = 0;
  v17[0] = 24;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _DWORD *))(WdfFunctions_01015 + 1992))(
         WdfDriverGlobals,
         v4,
         v17);
  if ( v6 < 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C00570E8);
    v16 = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v7 + 64),
      2u,
      2u,
      0x3Au,
      (__int64)&WPP_4365074be9fe45a9236a5dea2660cd62_Traceguids,
      v16);
  }
  v8 = WdfFunctions_01015;
  v9 = *(_QWORD *)(a1 + 400);
  v15 = *(_QWORD *)(a1 + 416);
  v10 = WdfDriverGlobals;
  *(_DWORD *)(a1 + 424) = a2;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v8 + 1528))(
          v10,
          v5,
          v9,
          a2,
          v15,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
  v12 = v11;
  if ( v11 < 0 )
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
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2032))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 400));
    v12 = v11;
LABEL_6:
    *(_DWORD *)(a1 + 1544) = v11;
    if ( v11 == -1073741667 )
      USBDErrorFromNTStatus = -1073713152;
    else
      USBDErrorFromNTStatus = HUBPDO_GetUSBDErrorFromNTStatus(v11);
    *(_DWORD *)(a1 + 1548) = USBDErrorFromNTStatus;
  }
  if ( v12 < 0 )
    HUBSM_AddEvent(a1 + 488, 0xFB4u);
  return (unsigned int)v12;
}

/*
 * XREFs of HUBSM_AddEvent @ 0x1C0009730
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C00029C0 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C0002C30 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0002E64 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C0002F68 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003260 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C00052B8 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x1C00060B0 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C0006208 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C0006680 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPARENT_ResetHubComplete @ 0x1C00067E0 (HUBPARENT_ResetHubComplete.c)
 *     HUBPARENT_ResetHub @ 0x1C00068FC (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0006B10 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0006CB0 (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBHSM_QueueingPortStatusChangeEvents @ 0x1C0007670 (HUBHSM_QueueingPortStatusChangeEvents.c)
 *     HUBHSM_ResettingInterruptPipeOnFailure @ 0x1C0007810 (HUBHSM_ResettingInterruptPipeOnFailure.c)
 *     HUBHSM_SendingAckForHubChange @ 0x1C00079C0 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend @ 0x1C0007E50 (HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C0007F50 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x1C0008050 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 *     HUBHSM_GettingHubStatus @ 0x1C0008180 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_SettingHubDepth @ 0x1C00085B0 (HUBHSM_SettingHubDepth.c)
 *     HUBSM_AddHsmEvent @ 0x1C0008948 (HUBSM_AddHsmEvent.c)
 *     HUBSM_AddPsm20Event @ 0x1C0008960 (HUBSM_AddPsm20Event.c)
 *     HUBSM_AddDsmEvent @ 0x1C0008970 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000A690 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000A8F0 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000AC30 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000B080 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C000C9B0 (HUBMUX_QueuePowerUpEventToPSMs.c)
 *     HUBMUX_QueueStopToAllPSMs @ 0x1C000CA64 (HUBMUX_QueueStopToAllPSMs.c)
 *     HUBMUX_AcquirePortPowerReference @ 0x1C000CB1C (HUBMUX_AcquirePortPowerReference.c)
 *     HUBMUX_ReleasePortPowerReference @ 0x1C000CB60 (HUBMUX_ReleasePortPowerReference.c)
 *     HUBMUX_ReleaseResetReference @ 0x1C000CBF4 (HUBMUX_ReleaseResetReference.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C000CD04 (HUBMUX_ReEnableInterruptTransfer.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x1C000CD88 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000CEE4 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000CF54 (HUBMUX_QueuePowerDownEventToDSMs.c)
 *     HUBMUX_QueueStopAfterSuspendToAllDSMs @ 0x1C000D17C (HUBMUX_QueueStopAfterSuspendToAllDSMs.c)
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000D3E8 (HUBMUX_QueuePowerUpEventToDSMs.c)
 *     HUBMUX_UnregisterWithHSM @ 0x1C000D5F8 (HUBMUX_UnregisterWithHSM.c)
 *     HUBMUX_AcquireDevicePowerReference @ 0x1C000D754 (HUBMUX_AcquireDevicePowerReference.c)
 *     HUBMUX_ReleaseDevicePowerReference @ 0x1C000D7D0 (HUBMUX_ReleaseDevicePowerReference.c)
 *     HUBMUX_AckStopAfterSuspend @ 0x1C000D84C (HUBMUX_AckStopAfterSuspend.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0010790 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0012598 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C00128A0 (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012A40 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0013A50 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0013C30 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0013FD0 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_PowerSettingCallback @ 0x1C00148E0 (HUBPDO_PowerSettingCallback.c)
 *     HUBPDO_NoPingResponse @ 0x1C0015590 (HUBPDO_NoPingResponse.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C0017890 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C0017A10 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_GettingLanguageIdStringDescriptor @ 0x1C0018C00 (HUBDSM_GettingLanguageIdStringDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x1C0018EB0 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x1C0018F30 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSDescriptor @ 0x1C0018FB0 (HUBDSM_GettingMSOSDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C0019040 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x1C0019110 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x1C00198E0 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingAlternateModeStringDescriptor @ 0x1C0019A30 (HUBDSM_GettingAlternateModeStringDescriptor.c)
 *     HUBDSM_GettingBillboardStringDescriptor @ 0x1C0019AE0 (HUBDSM_GettingBillboardStringDescriptor.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1C0019BA0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_GettingDeviceQualifierDescriptor @ 0x1C001A120 (HUBDSM_GettingDeviceQualifierDescriptor.c)
 *     HUBDSM_ConfiguringDevice @ 0x1C001AAC0 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1C001AB90 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x1C001B080 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x1C001B250 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x1C001B610 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x1C001B690 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDSM_EnablingLTM @ 0x1C001BA50 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_SetttingIsochDelay @ 0x1C001BB30 (HUBDSM_SetttingIsochDelay.c)
 *     HUBDSM_DisablingU1 @ 0x1C001BE50 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1C001BF50 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingU1 @ 0x1C001C010 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x1C001C0D0 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x1C001C320 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C001C5B0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001CD0C (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001D1A8 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C001D6DC (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctlComplete @ 0x1C001DBE0 (HUBUCX_GetRootHubInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C001DCB0 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete @ 0x1C001DEA0 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C001DF2C (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete @ 0x1C001E2C0 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C001E34C (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C001E704 (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctlComplete @ 0x1C001E9A0 (HUBUCX_UpdateHubInformationUsingUCXIoctlComplete.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C001EA2C (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_ClientRequestCompleteFromUCX @ 0x1C001F230 (HUBUCX_ClientRequestCompleteFromUCX.c)
 *     HUBUCX_ForwardRequestToUCX @ 0x1C001F274 (HUBUCX_ForwardRequestToUCX.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C001F800 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C00205D0 (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x1C0020720 (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x1C00207C4 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C0020894 (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x1C002090C (HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C0020984 (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C0020A54 (HUBDTX_GetBOSDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C00210F4 (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 *     HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x1C00211C8 (HUBDTX_GetProductIdStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x1C0021288 (HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C0021310 (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C0021408 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C00220B0 (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C0022D80 (HUBDTX_SetSelUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C0022FF4 (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x1C00230E0 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C0023210 (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBMISC_HubEventTimer @ 0x1C0023CB0 (HUBMISC_HubEventTimer.c)
 *     HUBMISC_DsmEventTimer @ 0x1C0023CD0 (HUBMISC_DsmEventTimer.c)
 *     HUBMISC_AttachDevice @ 0x1C0025D94 (HUBMISC_AttachDevice.c)
 *     HUBMISC_DetachDevice @ 0x1C0025E0C (HUBMISC_DetachDevice.c)
 *     HUBMISC_ReAttachDevice @ 0x1C0025E5C (HUBMISC_ReAttachDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0008FF8 (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBSM_RunStateMachine @ 0x1C0009B50 (HUBSM_RunStateMachine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBSM_AddEvent(__int64 a1, unsigned int a2)
{
  KSPIN_LOCK *v2; // r14
  KIRQL v4; // al
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  unsigned __int8 v8; // dl
  char v9; // r11
  unsigned __int8 i; // r8
  int v11; // r10d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rbp
  KIRQL v19; // di
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  PWDF_DRIVER_GLOBALS v23; // rcx
  __int64 v24; // rax
  KIRQL v25; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+58h] [rbp+10h]

  v26 = a2;
  v2 = (KSPIN_LOCK *)(a1 + 840);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 840));
  v5 = *(unsigned __int8 *)(a1 + 833);
  LOBYTE(v6) = v4;
  v25 = v4;
  *(_DWORD *)(a1 + 4 * v5 + 768) = v26;
  *(_BYTE *)(a1 + 833) = (*(_BYTE *)(a1 + 833) + 1) & 0xF;
  v7 = v26;
  if ( v26 == 3039 || v26 == 3043 || v26 == 4055 || v26 == 4059 )
  {
    v8 = *(_BYTE *)(a1 + 948);
    v9 = 0;
    for ( i = v8; i != *(_BYTE *)(a1 + 949); i = (i + 1) & 0xF )
    {
      v11 = *(_DWORD *)(a1 + 4LL * i + 884);
      if ( v11 == v7 )
      {
        v9 = 1;
      }
      else
      {
        v12 = v8;
        v8 = (v8 + 1) & 0xF;
        *(_DWORD *)(a1 + 4 * v12 + 884) = v11;
      }
    }
    LOBYTE(v5) = v8;
    if ( v8 != *(_BYTE *)(a1 + 949) )
    {
      do
      {
        v13 = v5 & 0xF;
        LOBYTE(v5) = (v5 + 1) & 0xF;
        *(_DWORD *)(a1 + 4 * v13 + 884) = 1000;
      }
      while ( (_BYTE)v5 != *(_BYTE *)(a1 + 949) );
    }
    *(_BYTE *)(a1 + 949) = v8;
    if ( v9 )
    {
      KeReleaseSpinLock(v2, v6);
      if ( v26 > 0xFC7 )
      {
        if ( v26 != 4043 && v26 != 4047 )
        {
          if ( v26 == 4067 || v26 == 4071 || v26 == 4075 )
          {
            v14 = *(_QWORD *)(a1 + 960);
            if ( (*(_DWORD *)(v14 + 1620) & 0x80u) != 0 )
            {
              v16 = a1 + 1012;
              *(_OWORD *)(a1 + 1012) = *(_OWORD *)(v14 + 2160);
LABEL_22:
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
              {
                (*(void (__fastcall **)(_QWORD, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
                  *(_QWORD *)(v14 + 248),
                  v16);
                if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
                  (*(void (__fastcall **)(_QWORD, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
                    *(_QWORD *)(v14 + 408),
                    v16);
              }
              _InterlockedOr((volatile signed __int32 *)(v14 + 1620), 0x40u);
            }
          }
LABEL_26:
          LOBYTE(v6) = KeAcquireSpinLockRaiseToDpc(v2);
          v25 = v6;
          v7 = v26;
          goto LABEL_27;
        }
      }
      else if ( v26 != 4039 )
      {
        if ( v26 == 3006 )
        {
          v18 = *(_QWORD *)(a1 + 960);
          if ( (*(_DWORD *)(v18 + 1336) & 2) != 0 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(v18 + 1328) + 1620LL) & 0x400) != 0 )
            {
              WPP_RECORDER_SF_(
                *(_QWORD *)(v18 + 1432),
                4u,
                5u,
                0xEu,
                (__int64)&WPP_db4ec9e0acb4e5ee01c1628295ad4f74_Traceguids);
              _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v18 + 1328) + 1620LL), 0xFFFFFBFF);
            }
          }
          else
          {
            v19 = KfRaiseIrql(2u);
            v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
                    WdfDriverGlobals,
                    *(_QWORD *)(v18 + 1328));
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v20);
            KeLowerIrql(v19);
            *(_QWORD *)(v18 + 1328) = 0LL;
          }
          _InterlockedAnd((volatile signed __int32 *)(v18 + 1336), 0xFFFFFFFE);
          if ( *(_DWORD *)(v18 + 1424) != 4 )
            *(_DWORD *)(v18 + 1424) = 0;
          goto LABEL_26;
        }
        if ( v26 != 4023 && v26 != 4027 && v26 != 4031 && v26 != 4035 )
          goto LABEL_26;
      }
      v14 = *(_QWORD *)(a1 + 960);
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2280))(
              WdfDriverGlobals,
              *(_QWORD *)(v14 + 440));
      if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
      {
        v16 = a1 + 1012;
        if ( ((int (__fastcall *)(__int64, __int64))WPP_MAIN_CB.Queue.Wcb.DeviceObject)(v15, a1 + 1012) >= 0 )
          goto LABEL_22;
      }
      goto LABEL_26;
    }
  }
LABEL_27:
  if ( *(_BYTE *)(a1 + 1048) )
  {
    if ( v7 == 1002 )
    {
      *(_BYTE *)(a1 + 1048) = 0;
      v17 = (unsigned int)HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(a1);
LABEL_46:
      HUBSM_RunStateMachine(a1, v17, &v25, 0LL);
      LOBYTE(v6) = v25;
      goto LABEL_47;
    }
    *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 949) + 884) = v7;
    *(_BYTE *)(a1 + 949) = (*(_BYTE *)(a1 + 949) + 1) & 0xF;
  }
  else
  {
    *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a1 + 949) + 884) = v7;
    *(_BYTE *)(a1 + 949) = (*(_BYTE *)(a1 + 949) + 1) & 0xF;
    if ( !*(_BYTE *)(a1 + 848) )
    {
      v21 = WdfFunctions_01015;
      v22 = *(_QWORD *)(a1 + 960);
      v23 = WdfDriverGlobals;
      *(_BYTE *)(a1 + 848) = 1;
      v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(v21 + 1632))(v23, v22, v5, v6);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v24,
        "State Machine Tag",
        1154LL,
        "drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      v17 = 1000LL;
      goto LABEL_46;
    }
  }
LABEL_47:
  KeReleaseSpinLock(v2, v6);
}

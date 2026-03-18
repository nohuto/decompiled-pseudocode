/*
 * XREFs of HUBSM_AddEvent @ 0x1C00097E0
 * Callers:
 *     HUBHTX_HubControlTransferComplete @ 0x1C00029E0 (HUBHTX_HubControlTransferComplete.c)
 *     HUBHTX_GetHubDescriptorUsingControlTransfer @ 0x1C0002C50 (HUBHTX_GetHubDescriptorUsingControlTransfer.c)
 *     HUBHTX_GetHubStatusUsingControlTransfer @ 0x1C0002E90 (HUBHTX_GetHubStatusUsingControlTransfer.c)
 *     HUBHTX_SendInterruptTransfer @ 0x1C0002F94 (HUBHTX_SendInterruptTransfer.c)
 *     HUBHTX_SendInterruptTransferComplete @ 0x1C0003280 (HUBHTX_SendInterruptTransferComplete.c)
 *     HUBHTX_GetRequestedPortStatusUsingControlTransfer @ 0x1C00053D8 (HUBHTX_GetRequestedPortStatusUsingControlTransfer.c)
 *     HUBPARENT_SetHubConfigurationComplete @ 0x1C00061D0 (HUBPARENT_SetHubConfigurationComplete.c)
 *     HUBPARENT_SetHubConfiguration @ 0x1C0006328 (HUBPARENT_SetHubConfiguration.c)
 *     HUBPARENT_ResetInterruptPipeComplete @ 0x1C00067A0 (HUBPARENT_ResetInterruptPipeComplete.c)
 *     HUBPARENT_ResetHubComplete @ 0x1C0006900 (HUBPARENT_ResetHubComplete.c)
 *     HUBPARENT_ResetHub @ 0x1C0006A1C (HUBPARENT_ResetHub.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0006C30 (HUBPARENT_GetInfoFromParentUsingParentIoctlComplete.c)
 *     HUBPARENT_GetInfoFromParentUsingParentIoctl @ 0x1C0006DD0 (HUBPARENT_GetInfoFromParentUsingParentIoctl.c)
 *     HUBHSM_QueueingPortStatusChangeEvents @ 0x1C0007790 (HUBHSM_QueueingPortStatusChangeEvents.c)
 *     HUBHSM_ResettingInterruptPipeOnFailure @ 0x1C0007930 (HUBHSM_ResettingInterruptPipeOnFailure.c)
 *     HUBHSM_SendingAckForHubChange @ 0x1C0007AD0 (HUBHSM_SendingAckForHubChange.c)
 *     HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend @ 0x1C0007F00 (HUBHSM_WaitingForPortsToReleaseReferenceOnSuspend.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength @ 0x1C0008000 (HUBHSM_GettingHubConfigurationDescriptorWithDefaultLength.c)
 *     HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength @ 0x1C0008100 (HUBHSM_GettingHubConfigurationDescriptorWithReturnedLength.c)
 *     HUBHSM_GettingHubStatus @ 0x1C0008230 (HUBHSM_GettingHubStatus.c)
 *     HUBHSM_SettingHubDepth @ 0x1C0008660 (HUBHSM_SettingHubDepth.c)
 *     HUBSM_AddHsmEvent @ 0x1C00089F8 (HUBSM_AddHsmEvent.c)
 *     HUBSM_AddPsm20Event @ 0x1C0008A10 (HUBSM_AddPsm20Event.c)
 *     HUBSM_AddDsmEvent @ 0x1C0008A20 (HUBSM_AddDsmEvent.c)
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000A740 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000A9A0 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_EvtDeviceCleanupCallback @ 0x1C000ACE0 (HUBFDO_EvtDeviceCleanupCallback.c)
 *     HUBFDO_EvtIoInternalDeviceControlFromPDO @ 0x1C000B130 (HUBFDO_EvtIoInternalDeviceControlFromPDO.c)
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C000CA60 (HUBMUX_QueuePowerUpEventToPSMs.c)
 *     HUBMUX_QueueStopToAllPSMs @ 0x1C000CB14 (HUBMUX_QueueStopToAllPSMs.c)
 *     HUBMUX_AcquirePortPowerReference @ 0x1C000CBCC (HUBMUX_AcquirePortPowerReference.c)
 *     HUBMUX_ReleasePortPowerReference @ 0x1C000CC10 (HUBMUX_ReleasePortPowerReference.c)
 *     HUBMUX_ReleaseResetReference @ 0x1C000CCA4 (HUBMUX_ReleaseResetReference.c)
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C000CDB4 (HUBMUX_ReEnableInterruptTransfer.c)
 *     HUBMUX_ReleaseInterruptReference @ 0x1C000CE38 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000CF94 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000D004 (HUBMUX_QueuePowerDownEventToDSMs.c)
 *     HUBMUX_QueueStopAfterSuspendToAllDSMs @ 0x1C000D22C (HUBMUX_QueueStopAfterSuspendToAllDSMs.c)
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000D49C (HUBMUX_QueuePowerUpEventToDSMs.c)
 *     HUBMUX_UnregisterWithHSM @ 0x1C000D6AC (HUBMUX_UnregisterWithHSM.c)
 *     HUBMUX_AcquireDevicePowerReference @ 0x1C000D804 (HUBMUX_AcquireDevicePowerReference.c)
 *     HUBMUX_ReleaseDevicePowerReference @ 0x1C000D880 (HUBMUX_ReleaseDevicePowerReference.c)
 *     HUBMUX_AckStopAfterSuspend @ 0x1C000D8FC (HUBMUX_AckStopAfterSuspend.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x1C0010840 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C0012608 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C0012910 (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0012AB0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0013AD0 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0013CB0 (HUBPDO_EvtDeviceD0Exit.c)
 *     HUBPDO_EvtDeviceCleanup @ 0x1C0014050 (HUBPDO_EvtDeviceCleanup.c)
 *     HUBPDO_PowerSettingCallback @ 0x1C0014970 (HUBPDO_PowerSettingCallback.c)
 *     HUBPDO_NoPingResponse @ 0x1C0015620 (HUBPDO_NoPingResponse.c)
 *     HUBDSM_ResettingPipeInUCXOnClientReset @ 0x1C00178F0 (HUBDSM_ResettingPipeInUCXOnClientReset.c)
 *     HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe @ 0x1C0017A70 (HUBDSM_ResettingPipeInUCXOnClientSyncResetPipe.c)
 *     HUBDSM_GettingLanguageIdStringDescriptor @ 0x1C0018C50 (HUBDSM_GettingLanguageIdStringDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x1C0018F10 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x1C0018F90 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSDescriptor @ 0x1C0019010 (HUBDSM_GettingMSOSDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C00190A0 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x1C0019170 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x1C0019930 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingAlternateModeStringDescriptor @ 0x1C0019A80 (HUBDSM_GettingAlternateModeStringDescriptor.c)
 *     HUBDSM_GettingBillboardStringDescriptor @ 0x1C0019B30 (HUBDSM_GettingBillboardStringDescriptor.c)
 *     HUBDSM_SendingUsbFeaturesVendorCmd @ 0x1C0019BF0 (HUBDSM_SendingUsbFeaturesVendorCmd.c)
 *     HUBDSM_GettingDeviceQualifierDescriptor @ 0x1C001A160 (HUBDSM_GettingDeviceQualifierDescriptor.c)
 *     HUBDSM_ConfiguringDevice @ 0x1C001AB40 (HUBDSM_ConfiguringDevice.c)
 *     HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration @ 0x1C001AC10 (HUBDSM_DeconfiguringEndpointsInControllerForDeviceConfiguration.c)
 *     HUBDSM_ArmingDeviceForWake @ 0x1C001B100 (HUBDSM_ArmingDeviceForWake.c)
 *     HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure @ 0x1C001B2D0 (HUBDSM_DisablingEndpointsForTheNewInterfaceOnFailure.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x1C001B6C0 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x1C001B740 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 *     HUBDSM_EnablingLTM @ 0x1C001BB00 (HUBDSM_EnablingLTM.c)
 *     HUBDSM_SetttingIsochDelay @ 0x1C001BBE0 (HUBDSM_SetttingIsochDelay.c)
 *     HUBDSM_DisablingU1 @ 0x1C001BF00 (HUBDSM_DisablingU1.c)
 *     HUBDSM_DisablingU2 @ 0x1C001C000 (HUBDSM_DisablingU2.c)
 *     HUBDSM_EnablingU1 @ 0x1C001C0C0 (HUBDSM_EnablingU1.c)
 *     HUBDSM_EnablingU2 @ 0x1C001C180 (HUBDSM_EnablingU2.c)
 *     HUBDSM_GettingRemoteWakeCapability @ 0x1C001C3D0 (HUBDSM_GettingRemoteWakeCapability.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C001C660 (HUBUCX_UCXIoctlComplete.c)
 *     HUBUCX_SubmitUcxIoctl @ 0x1C001CDBC (HUBUCX_SubmitUcxIoctl.c)
 *     HUBUCX_EnableDisableEndpointsUsingUCXIoctl @ 0x1C001D258 (HUBUCX_EnableDisableEndpointsUsingUCXIoctl.c)
 *     HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl @ 0x1C001D788 (HUBUCX_UpdateDeviceExitLatencyUsingUCXIoctl.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctlComplete @ 0x1C001DC90 (HUBUCX_GetRootHubInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C001DD60 (HUBUCX_GetRootHubInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete @ 0x1C001DF50 (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl @ 0x1C001DFDC (HUBUCX_GetRootHub20PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete @ 0x1C001E370 (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete.c)
 *     HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl @ 0x1C001E3FC (HUBUCX_GetRootHub30PortsInfoUsingUCXIoctl.c)
 *     HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl @ 0x1C001E7B4 (HUBUCX_DisableAllEndpointsForCurrentConfigurationUsingUCXIoctl.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctlComplete @ 0x1C001EA50 (HUBUCX_UpdateHubInformationUsingUCXIoctlComplete.c)
 *     HUBUCX_UpdateHubInformationUsingUCXIoctl @ 0x1C001EADC (HUBUCX_UpdateHubInformationUsingUCXIoctl.c)
 *     HUBUCX_ClientRequestCompleteFromUCX @ 0x1C001F2E0 (HUBUCX_ClientRequestCompleteFromUCX.c)
 *     HUBUCX_ForwardRequestToUCX @ 0x1C001F324 (HUBUCX_ForwardRequestToUCX.c)
 *     HUBDTX_ControlTransferComplete @ 0x1C001F8B0 (HUBDTX_ControlTransferComplete.c)
 *     HUBDTX_DisarmDeviceForWakeUsingControlTransfer @ 0x1C0020680 (HUBDTX_DisarmDeviceForWakeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x1C00207D0 (HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer.c)
 *     HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer @ 0x1C0020874 (HUBDTX_GetConfigDescriptorWithReturnedLengthUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C0020944 (HUBDTX_GetDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer @ 0x1C00209BC (HUBDTX_GetInitialDeviceDescriptorUsingControlTransfer.c)
 *     HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C0020A34 (HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C0020B04 (HUBDTX_GetBOSDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C002118C (HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer.c)
 *     HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x1C0021264 (HUBDTX_GetProductIdStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer @ 0x1C0021324 (HUBDTX_GetSerialNumberStringDescriptorUsingControlTransfer.c)
 *     HUBDTX_SetDeviceInterfaceUsingControlTransfer @ 0x1C00213AC (HUBDTX_SetDeviceInterfaceUsingControlTransfer.c)
 *     HUBDTX_SetDeviceNullConfigurationUsingControlTransfer @ 0x1C00214A4 (HUBDTX_SetDeviceNullConfigurationUsingControlTransfer.c)
 *     HUBDTX_ClearEndpointHaltUsingControlTransfer @ 0x1C0022114 (HUBDTX_ClearEndpointHaltUsingControlTransfer.c)
 *     HUBDTX_SetSelUsingControlTransfer @ 0x1C0022DCC (HUBDTX_SetSelUsingControlTransfer.c)
 *     HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer @ 0x1C0023040 (HUBDTX_SetDevicePDChargingPolicyUsingControlTransfer.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x1C0023120 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x1C0023250 (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBMISC_HubEventTimer @ 0x1C0023CF0 (HUBMISC_HubEventTimer.c)
 *     HUBMISC_DsmEventTimer @ 0x1C0023D10 (HUBMISC_DsmEventTimer.c)
 *     HUBMISC_AttachDevice @ 0x1C0025DF4 (HUBMISC_AttachDevice.c)
 *     HUBMISC_DetachDevice @ 0x1C0025E6C (HUBMISC_DetachDevice.c)
 *     HUBMISC_ReAttachDevice @ 0x1C0025EBC (HUBMISC_ReAttachDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001CD4 (WPP_RECORDER_SF_.c)
 *     HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C00090A8 (HUBSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     HUBSM_RunStateMachine @ 0x1C0009C00 (HUBSM_RunStateMachine.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
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
              if ( g_IoSetActivityIdIrp )
              {
                g_IoSetActivityIdIrp(*(_QWORD *)(v14 + 248), v16);
                if ( g_IoSetActivityIdIrp )
                  g_IoSetActivityIdIrp(*(_QWORD *)(v14 + 408), v16);
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
                (__int64)&WPP_f9559d06ee0736efc452eb3edb8e8c8d_Traceguids);
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
      if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      {
        v16 = a1 + 1012;
        if ( (*(int (__fastcall **)(__int64, __int64))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v15, a1 + 1012) >= 0 )
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
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\smengine.c");
      v17 = 1000LL;
      goto LABEL_46;
    }
  }
LABEL_47:
  KeReleaseSpinLock(v2, v6);
}

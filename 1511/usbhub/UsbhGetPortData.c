/*
 * XREFs of UsbhGetPortData @ 0x1C000C150
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0002C00 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0003950 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_BusReset @ 0x1C0003DE4 (UsbhPCE_BusReset.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C00090F0 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C00094D4 (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhPCE_Suspend @ 0x1C000A590 (UsbhPCE_Suspend.c)
 *     UsbhLatchPdo @ 0x1C000C288 (UsbhLatchPdo.c)
 *     UsbhSetPortData @ 0x1C000D2B4 (UsbhSetPortData.c)
 *     UsbhFinishStart @ 0x1C001B760 (UsbhFinishStart.c)
 *     UsbhEnablePortIndicators @ 0x1C001D834 (UsbhEnablePortIndicators.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C001F190 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0025670 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhSyncResumePort @ 0x1C002817C (UsbhSyncResumePort.c)
 *     UsbhPCE_Enable @ 0x1C0028318 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x1C00283C4 (UsbhPCE_Resume.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003BC04 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003C8D4 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhDisablePortIndicators @ 0x1C003D94C (UsbhDisablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x1C003DA50 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003DE30 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003DECC (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003DF90 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E018 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003E270 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003E3E0 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x1C003E92C (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0040C00 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Disable @ 0x1C0040E50 (UsbhPCE_Disable.c)
 *     UsbhPCE_HW_Stop @ 0x1C0040F90 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChange @ 0x1C0041068 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C0041140 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_ResumeDone @ 0x1C0041224 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C00412F0 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C0041478 (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueuePauseChange @ 0x1C0041628 (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041718 (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x1C0042E14 (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x1C0043100 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044578 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C0044908 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0044A84 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0044C14 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C00450F4 (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045320 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045DA0 (UsbhFdoSetD0Warm.c)
 *     UsbhResetNotifyCompletion @ 0x1C0046CF0 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048AA0 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049154 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049460 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049CA4 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004AEC0 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004B8A4 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004DA10 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C004DC9C (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x1C004E6E0 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x1C004E750 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x1C004E7D0 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x1C004E850 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C004F550 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C004F5D0 (UsbhNotEnoughPowerPopup.c)
 *     UsbhResetPortData @ 0x1C0054F54 (UsbhResetPortData.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhGetPortData(__int64 a1, unsigned __int16 a2)
{
  char v2; // r10
  __int64 v3; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx

  v2 = UsbhLogMask;
  v3 = a2;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v6 = 1413771367;
        *(_QWORD *)(v6 + 16) = (unsigned __int16)v3;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 24) = 0LL;
        v2 = UsbhLogMask;
      }
    }
  }
  if ( !(_WORD)v3 )
    return 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, 0LL, v3);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a1, v3);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a1, v3);
  if ( (unsigned __int16)v3 > *(unsigned __int8 *)(v7 + 2938) )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 3056);
  if ( !v8 )
    return 0LL;
  v9 = v8 + 2928LL * ((unsigned __int16)v3 - 1);
  if ( (v2 & 8) != 0 )
  {
    v10 = *(_QWORD *)(v7 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v10 = 1044672615;
    *(_QWORD *)(v10 + 16) = (unsigned __int16)v3;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 24) = v9;
  }
  return v9;
}

/*
 * XREFs of UsbhGetPortData @ 0x1C001B570
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000120C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0002E00 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetD0Cold @ 0x1C0003190 (UsbhFdoSetD0Cold.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0003B50 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_BusReset @ 0x1C0003FE4 (UsbhPCE_BusReset.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C0006F00 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C0007600 (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhSetPortData @ 0x1C001A074 (UsbhSetPortData.c)
 *     UsbhLatchPdo @ 0x1C001B444 (UsbhLatchPdo.c)
 *     UsbhPCE_Suspend @ 0x1C001E798 (UsbhPCE_Suspend.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C001F660 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhFinishStart @ 0x1C0025AA0 (UsbhFinishStart.c)
 *     UsbhEnablePortIndicators @ 0x1C0025C24 (UsbhEnablePortIndicators.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0026804 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhSyncResumePort @ 0x1C002883C (UsbhSyncResumePort.c)
 *     UsbhPCE_Enable @ 0x1C00289D8 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x1C0028A84 (UsbhPCE_Resume.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003C024 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003CCF4 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhDisablePortIndicators @ 0x1C003DC6C (UsbhDisablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x1C003DD70 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003E150 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003E1EC (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003E2B0 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003E338 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003E590 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003E700 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x1C003EC4C (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x1C0040F38 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Disable @ 0x1C0041188 (UsbhPCE_Disable.c)
 *     UsbhPCE_HW_Stop @ 0x1C00412C8 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChange @ 0x1C00413A0 (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C0041478 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_ResumeDone @ 0x1C004155C (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0041628 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C00417B0 (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueuePauseChange @ 0x1C0041960 (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041A50 (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x1C0043154 (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x1C0043440 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C00448B8 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C0044C48 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0044DC4 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0044F54 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0045434 (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045660 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046020 (UsbhFdoSetD0Warm.c)
 *     UsbhResetNotifyCompletion @ 0x1C00470E0 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048EB4 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049554 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049860 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004A0A4 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004B560 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004BF44 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004E180 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C004E40C (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x1C004EE50 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x1C004EEC0 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x1C004EF40 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x1C004EFC0 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C004FCC0 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C004FD40 (UsbhNotEnoughPowerPopup.c)
 *     UsbhResetPortData @ 0x1C0055584 (UsbhResetPortData.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
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

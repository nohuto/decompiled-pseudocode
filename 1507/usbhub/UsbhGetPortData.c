/*
 * XREFs of UsbhGetPortData @ 0x1C000AEF0
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0002C00 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0003950 (UsbhPCE_QueueDriverReset.c)
 *     UsbhPCE_BusReset @ 0x1C0003ECC (UsbhPCE_BusReset.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0007768 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhSelectConfigOrInterfaceComplete @ 0x1C0009010 (UsbhSelectConfigOrInterfaceComplete.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C000AAEC (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhPCE_Suspend @ 0x1C000AD20 (UsbhPCE_Suspend.c)
 *     UsbhLatchPdo @ 0x1C000ADCC (UsbhLatchPdo.c)
 *     UsbhSetPortData @ 0x1C000B028 (UsbhSetPortData.c)
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C001E1E0 (UsbhPdoPnp_DeviceEnumerated.c)
 *     UsbhFinishStart @ 0x1C0021D90 (UsbhFinishStart.c)
 *     UsbhEnablePortIndicators @ 0x1C0021F14 (UsbhEnablePortIndicators.c)
 *     UsbhSyncResumePort @ 0x1C00291BC (UsbhSyncResumePort.c)
 *     UsbhPCE_Enable @ 0x1C0029358 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x1C0029404 (UsbhPCE_Resume.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C003BA54 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C003C6A4 (UsbhSetOutOfBandwidthTimer.c)
 *     UsbhDisablePortIndicators @ 0x1C003D71C (UsbhDisablePortIndicators.c)
 *     UsbhPindicatorWorker @ 0x1C003D820 (UsbhPindicatorWorker.c)
 *     UsbhAutoOvercurrentResetWorker @ 0x1C003DC00 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003DC9C (UsbhDeviceOvercurrentPopup.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003DD60 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhOvercurrentResetWorker @ 0x1C003DDE8 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueDriverOvercurrent @ 0x1C003E040 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x1C003E1B0 (UsbhQueueOvercurrentReset.c)
 *     UsbhFdoRecordFailure @ 0x1C003E6FC (UsbhFdoRecordFailure.c)
 *     UsbhPCE_BusDisconnect @ 0x1C00409E4 (UsbhPCE_BusDisconnect.c)
 *     UsbhPCE_Disable @ 0x1C0040C34 (UsbhPCE_Disable.c)
 *     UsbhPCE_HW_Stop @ 0x1C0040D74 (UsbhPCE_HW_Stop.c)
 *     UsbhPCE_QueueChange @ 0x1C0040E4C (UsbhPCE_QueueChange.c)
 *     UsbhPCE_QueueChangeObject @ 0x1C0040F24 (UsbhPCE_QueueChangeObject.c)
 *     UsbhPCE_ResumeDone @ 0x1C0041008 (UsbhPCE_ResumeDone.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C00410D4 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPCE_SoftDisconnect @ 0x1C004125C (UsbhPCE_SoftDisconnect.c)
 *     UsbhQueuePauseChange @ 0x1C004140C (UsbhQueuePauseChange.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00414FC (UsbhQueueSoftConnectChange.c)
 *     UsbhCycleDevicePort @ 0x1C0042BF4 (UsbhCycleDevicePort.c)
 *     UsbhDeregisterPdo @ 0x1C0042EE0 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C0044448 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x1C00447D8 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C0044954 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0044AE4 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C0044FC4 (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C00451F0 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C70 (UsbhFdoSetD0Warm.c)
 *     UsbhResetNotifyCompletion @ 0x1C0046C70 (UsbhResetNotifyCompletion.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048950 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049004 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049310 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049B54 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhDriverNotFoundWorker @ 0x1C004AF10 (UsbhDriverNotFoundWorker.c)
 *     UsbhResetNotifyDownstreamHub @ 0x1C004B8F4 (UsbhResetNotifyDownstreamHub.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004DAB0 (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C004DD3C (UsbhGetHubNodeInfo.c)
 *     UsbhWmiDoNothing @ 0x1C004E780 (UsbhWmiDoNothing.c)
 *     UsbhWmiEnumerationFailure @ 0x1C004E7F0 (UsbhWmiEnumerationFailure.c)
 *     UsbhWmiInsufficentBandwidth @ 0x1C004E870 (UsbhWmiInsufficentBandwidth.c)
 *     UsbhWmiInsufficentPower @ 0x1C004E8F0 (UsbhWmiInsufficentPower.c)
 *     UsbhNotEnoughBandwidth_Popup @ 0x1C004F5F0 (UsbhNotEnoughBandwidth_Popup.c)
 *     UsbhNotEnoughPowerPopup @ 0x1C004F670 (UsbhNotEnoughPowerPopup.c)
 *     UsbhResetPortData @ 0x1C0054DEC (UsbhResetPortData.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
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

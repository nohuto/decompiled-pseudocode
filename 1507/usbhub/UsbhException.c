/*
 * XREFs of UsbhException @ 0x1C004ECD0
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00029A0 (UsbhFdoD0Worker_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0002C00 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C00033B8 (UsbhFdoColdStartCheckPort.c)
 *     UsbhCheckHubPowerStatus @ 0x1C00034B0 (UsbhCheckHubPowerStatus.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003B8C (UsbhFdoColdStartPdo.c)
 *     UsbhBusSuspend_Action @ 0x1C0004B00 (UsbhBusSuspend_Action.c)
 *     UsbhPdoSetD0_Finish @ 0x1C0004C44 (UsbhPdoSetD0_Finish.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C0005348 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetDeviceInformation @ 0x1C000544C (UsbhGetDeviceInformation.c)
 *     UsbhCheckDeviceErrata @ 0x1C0005778 (UsbhCheckDeviceErrata.c)
 *     UsbhCheckHubErrata @ 0x1C000671C (UsbhCheckHubErrata.c)
 *     UsbhGetSerialNumber @ 0x1C0006F9C (UsbhGetSerialNumber.c)
 *     UsbhSetupDevice @ 0x1C0007110 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C00075F8 (UsbhGetLanguageIdString.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0007768 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhResetPort @ 0x1C0009250 (UsbhResetPort.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C0009AD0 (UsbhFdoPnp_StartDevice.c)
 *     UsbhPortConnect @ 0x1C000A1C0 (UsbhPortConnect.c)
 *     UsbhCreateDevice @ 0x1C000A574 (UsbhCreateDevice.c)
 *     UsbhSshResumeUpstream @ 0x1C000A9A0 (UsbhSshResumeUpstream.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000ABE8 (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C000BDAC (UsbhPdoPnp_EnablePdo.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C00104E0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0011DC0 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubProcessIsr @ 0x1C00127E0 (UsbhHubProcessIsr.c)
 *     UsbhQueryPortState @ 0x1C0014220 (UsbhQueryPortState.c)
 *     UsbhBusIfAddDevice @ 0x1C0015600 (UsbhBusIfAddDevice.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0015FA0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhSetHubRemoteWake @ 0x1C0016ECC (UsbhSetHubRemoteWake.c)
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0017580 (UsbhSyncPowerOnPorts.c)
 *     UsbhSshSuspendHub @ 0x1C0017B8C (UsbhSshSuspendHub.c)
 *     UsbhGetBusInterface @ 0x1C0017D60 (UsbhGetBusInterface.c)
 *     UsbhQueryChange @ 0x1C00187B0 (UsbhQueryChange.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0018E48 (UsbhGetHubDeviceInformation.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001B890 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSshResumeDownstream @ 0x1C001E7B0 (UsbhSshResumeDownstream.c)
 *     UsbhConfigureUsbHub @ 0x1C001F340 (UsbhConfigureUsbHub.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001F5C0 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhQueryHubState @ 0x1C00201D8 (UsbhQueryHubState.c)
 *     UsbhGetStatus @ 0x1C002045C (UsbhGetStatus.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C00204E0 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x1C00205F8 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetDescriptor @ 0x1C00206F4 (UsbhGetDescriptor.c)
 *     UsbhPdoSetD0 @ 0x1C0020C10 (UsbhPdoSetD0.c)
 *     UsbhFinishStart @ 0x1C0021D90 (UsbhFinishStart.c)
 *     UsbhHubIsr @ 0x1C0022AD0 (UsbhHubIsr.c)
 *     UsbhSuspendPort @ 0x1C0025A38 (UsbhSuspendPort.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0025C50 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhResumeSuspendedPort @ 0x1C00268D8 (UsbhResumeSuspendedPort.c)
 *     UsbhInitializeDevice @ 0x1C0026B6C (UsbhInitializeDevice.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0027288 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x1C0027750 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C0027A20 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhGetProductIdString @ 0x1C0028D74 (UsbhGetProductIdString.c)
 *     UsbhSyncResumePort @ 0x1C00291BC (UsbhSyncResumePort.c)
 *     UsbhValidateSerialNumberString @ 0x1C00294B0 (UsbhValidateSerialNumberString.c)
 *     UsbhSetPortIndicator @ 0x1C00296F0 (UsbhSetPortIndicator.c)
 *     UsbhGetMsOsContainerID @ 0x1C0029BB8 (UsbhGetMsOsContainerID.c)
 *     UsbhFdoDeviceControl @ 0x1C003B480 (UsbhFdoDeviceControl.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C003C4D0 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetPortPower @ 0x1C003C7D4 (UsbhSetPortPower.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003E3A4 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x1C003E6FC (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003E8F4 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003EE4C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhQueueSoftConnectChange @ 0x1C00414FC (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x1C0042A44 (UsbhClearTt.c)
 *     UsbhDisablePort @ 0x1C004310C (UsbhDisablePort.c)
 *     UsbhGetBillboardInfo @ 0x1C00434A0 (UsbhGetBillboardInfo.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0043B30 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x1C0043EE4 (UsbhPortResumeTimeout.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045B28 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045C70 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C004688C (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C0047854 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0047EDC (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048204 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C004844C (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C00486BC (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048950 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048BB4 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049004 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049310 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C00495E4 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049898 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049B54 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0049E08 (UsbhIoctlResetStuckHub.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A218 (UsbhIoctlValidateParameters.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004B760 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhHandleOvercurrent @ 0x1C00502F4 (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x1C0050530 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050610 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortResumeFailed @ 0x1C0050B40 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x1C0050F10 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x1C00511E0 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C00513D0 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C00518E0 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C00519C0 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhReferenceListAdd @ 0x1C000A030 (UsbhReferenceListAdd.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024A80 (UsbhQueueWorkItemEx.c)
 *     UsbhReferenceListRemove @ 0x1C00257E0 (UsbhReferenceListRemove.c)
 *     memmove @ 0x1C0029E80 (memmove.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     UsbhExceptionTrace @ 0x1C004EFB8 (UsbhExceptionTrace.c)
 *     UsbhExceptionWorker @ 0x1C004F2B0 (UsbhExceptionWorker.c)
 *     UsbhGetExceptionDispatch @ 0x1C004F398 (UsbhGetExceptionDispatch.c)
 *     UsbhEtwLogHubException @ 0x1C005758C (UsbhEtwLogHubException.c)
 */

void __fastcall UsbhException(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        unsigned int a5,
        int a6,
        int a7,
        _BYTE *a8,
        int a9,
        char a10)
{
  int v11; // esi
  unsigned int v12; // ebx
  _DWORD *v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r15
  int v19; // eax
  unsigned __int16 v20; // si
  unsigned int v21; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v23; // rbx
  char *v24; // rcx
  unsigned int v25; // ecx
  _OWORD *v26; // rdx
  __int64 v27; // rax
  _OWORD *v28; // rax
  __int64 ExceptionDispatch; // [rsp+48h] [rbp-40h]
  unsigned __int16 v30; // [rsp+98h] [rbp+10h]
  int v31; // [rsp+A0h] [rbp+18h]
  unsigned int v33; // [rsp+D8h] [rbp+50h]

  v31 = a3;
  v30 = a2;
  v11 = (unsigned __int16)a2;
  v12 = a3;
  v14 = FdoExt(a1, a2, a3, (__int64)a4);
  v15 = -1LL;
  ExceptionDispatch = UsbhGetExceptionDispatch(a1, v12);
  v16 = -1LL;
  v17 = *(_QWORD *)(ExceptionDispatch + 8);
  do
    ++v16;
  while ( *(_BYTE *)(v17 + v16) );
  UsbhEtwLogHubException(a1, v11, v12, a6, a7, v17, v16 + 1);
  v18 = 16LL;
  if ( a10 )
  {
    v19 = v14[640];
    if ( (v19 & 0x10) != 0 )
      return;
    v14[640] = v19 | 0x10;
  }
  v20 = a5;
  if ( a5 > 0xFFFF || (unsigned __int16)a5 > 0x1000u )
    v20 = 4096;
  Log(a1, 128, 1751480369, (__int64)a4, v20);
  if ( (v14[640] & 0x2000) != 0 )
  {
    do
      ++v15;
    while ( a8[v15] );
    v21 = v15 + 1;
    v33 = v21 + v20 + 600;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v33, 0x42554855u);
    v23 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v21 + v20 + 600);
      v23[1] = v33;
      if ( (int)UsbhReferenceListAdd(a1, (__int64)v23, 1381516648) < 0 )
      {
LABEL_23:
        ExFreePoolWithTag(v23, 0);
        return;
      }
      *v23 = 1381516648;
      *((_QWORD *)v23 + 1) = a1;
      *((_WORD *)v23 + 16) = v20;
      if ( v20 )
      {
        *((_QWORD *)v23 + 5) = v23 + 150;
        memmove(v23 + 150, a4, v20);
      }
      v24 = (char *)v23 + v20 + 600;
      *((_QWORD *)v23 + 74) = v24;
      memmove(v24, a8, v21);
      v23[146] = a9;
      v23[6] = a7;
      v23[7] = a6;
      v23[4] = v31;
      *((_WORD *)v23 + 10) = v30;
      *((_QWORD *)v23 + 8) = MEMORY[0xFFFFF78000000014];
      if ( *((_QWORD *)v14 + 111) )
      {
        v25 = v14[220];
        v26 = v23 + 18;
        do
        {
          v27 = v14[221] & v25;
          v25 = v27 + 1;
          v28 = (_OWORD *)(*((_QWORD *)v14 + 111) + 32 * v27);
          *v26 = *v28;
          v26 += 2;
          *(v26 - 1) = v28[1];
          --v18;
        }
        while ( v18 );
      }
      UsbhExceptionTrace(a1, v23, ExceptionDispatch);
      if ( !KeGetCurrentIrql() && !*(_QWORD *)(ExceptionDispatch + 16) )
      {
        UsbhExceptionWorker(a1, v30, v23);
        return;
      }
      if ( (UsbhQueueWorkItemEx(a1, 1LL, (__int64)UsbhExceptionWorker, (__int64)v23, v30, 0x49577865u, 0LL) & 0xC0000000) == 0xC0000000 )
      {
        UsbhReferenceListRemove(a1, (__int64)v23);
        goto LABEL_23;
      }
    }
  }
}

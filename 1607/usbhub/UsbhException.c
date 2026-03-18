/*
 * XREFs of UsbhException @ 0x1C004F3A0
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C00010E4 (UsbhPdoSetD0_Finish.c)
 *     UsbhFdoD0Worker_Action @ 0x1C0002BA0 (UsbhFdoD0Worker_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0002E00 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetD0Cold @ 0x1C0003190 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C00035B8 (UsbhFdoColdStartCheckPort.c)
 *     UsbhCheckHubPowerStatus @ 0x1C0003644 (UsbhCheckHubPowerStatus.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003D8C (UsbhFdoColdStartPdo.c)
 *     UsbhBusSuspend_Action @ 0x1C0004C20 (UsbhBusSuspend_Action.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C0005420 (UsbhGetMSOS_Descriptor.c)
 *     UsbhSetupDevice @ 0x1C0005530 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C0005A20 (UsbhGetLanguageIdString.c)
 *     UsbhGetSerialNumber @ 0x1C0007640 (UsbhGetSerialNumber.c)
 *     UsbhGetDeviceInformation @ 0x1C0007814 (UsbhGetDeviceInformation.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0007A3C (UsbhGetHubDeviceInformation.c)
 *     UsbhCheckDeviceErrata @ 0x1C0007EC4 (UsbhCheckDeviceErrata.c)
 *     UsbhCheckHubErrata @ 0x1C0008134 (UsbhCheckHubErrata.c)
 *     UsbhCreateDevice @ 0x1C0009548 (UsbhCreateDevice.c)
 *     UsbhResetPort @ 0x1C0009B6C (UsbhResetPort.c)
 *     UsbhPortConnect @ 0x1C0009DC0 (UsbhPortConnect.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C000B930 (UsbhFdoPnp_StartDevice.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0011850 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0013130 (UsbhHubDispatchPortEvent.c)
 *     UsbhHubProcessIsr @ 0x1C0013B50 (UsbhHubProcessIsr.c)
 *     UsbhQueryPortState @ 0x1C00150B0 (UsbhQueryPortState.c)
 *     UsbhBusIfAddDevice @ 0x1C0016480 (UsbhBusIfAddDevice.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0016910 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhSetHubRemoteWake @ 0x1C00182A4 (UsbhSetHubRemoteWake.c)
 *     UsbhReset2Complete @ 0x1C00183B0 (UsbhReset2Complete.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0018950 (UsbhSyncPowerOnPorts.c)
 *     UsbhSshSuspendHub @ 0x1C0018F70 (UsbhSshSuspendHub.c)
 *     UsbhGetBusInterface @ 0x1C0019140 (UsbhGetBusInterface.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001A2F0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C001A924 (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C001B6A8 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001B820 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhConfigureUsbHub @ 0x1C001FAE8 (UsbhConfigureUsbHub.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001FD70 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhQueryHubState @ 0x1C0020984 (UsbhQueryHubState.c)
 *     UsbhGetStatus @ 0x1C0020C08 (UsbhGetStatus.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C0020C8C (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x1C0020DA4 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetDescriptor @ 0x1C0020EA0 (UsbhGetDescriptor.c)
 *     UsbhPdoSetD0 @ 0x1C0021930 (UsbhPdoSetD0.c)
 *     UsbhSshResumeDownstream @ 0x1C0021F00 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x1C002295C (UsbhSshResumeUpstream.c)
 *     UsbhHubIsr @ 0x1C0023900 (UsbhHubIsr.c)
 *     UsbhQueryChange @ 0x1C0024D40 (UsbhQueryChange.c)
 *     UsbhFinishStart @ 0x1C0025AA0 (UsbhFinishStart.c)
 *     UsbhSuspendPort @ 0x1C0025F18 (UsbhSuspendPort.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0026804 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhResumeSuspendedPort @ 0x1C0026A2C (UsbhResumeSuspendedPort.c)
 *     UsbhInitializeDevice @ 0x1C0026B94 (UsbhInitializeDevice.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0026FC0 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x1C0027410 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C0027580 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhGetProductIdString @ 0x1C00283F4 (UsbhGetProductIdString.c)
 *     UsbhSyncResumePort @ 0x1C002883C (UsbhSyncResumePort.c)
 *     UsbhValidateSerialNumberString @ 0x1C0028B30 (UsbhValidateSerialNumberString.c)
 *     UsbhSetPortIndicator @ 0x1C0028D70 (UsbhSetPortIndicator.c)
 *     UsbhGetMsOsContainerID @ 0x1C0029238 (UsbhGetMsOsContainerID.c)
 *     UsbhFdoDeviceControl @ 0x1C003BA50 (UsbhFdoDeviceControl.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C003CB20 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetPortPower @ 0x1C003CE24 (UsbhSetPortPower.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003E8F4 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x1C003EC4C (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003EE44 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003F39C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041A50 (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x1C0042FA4 (UsbhClearTt.c)
 *     UsbhDisablePort @ 0x1C004366C (UsbhDisablePort.c)
 *     UsbhGetBillboardInfo @ 0x1C0043A00 (UsbhGetBillboardInfo.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0043FA0 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x1C0044354 (UsbhPortResumeTimeout.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045ED8 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046020 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C0046CFC (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C0047CC4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C0048440 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048768 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C00489B0 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C0048C20 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048EB4 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0049118 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049554 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049860 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049B34 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0049DE8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004A0A4 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C004A358 (UsbhIoctlResetStuckHub.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A768 (UsbhIoctlValidateParameters.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004BDB0 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhHandleOvercurrent @ 0x1C00508F4 (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x1C0050B30 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050C10 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortResumeFailed @ 0x1C0051140 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x1C0051510 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x1C00517E0 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C00519D0 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C0051EE0 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051FC0 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C0009434 (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x1C000B670 (UsbhReferenceListAdd.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhQueueWorkItemEx @ 0x1C0025074 (UsbhQueueWorkItemEx.c)
 *     memmove @ 0x1C00295C0 (memmove.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     UsbhExceptionTrace @ 0x1C004F688 (UsbhExceptionTrace.c)
 *     UsbhExceptionWorker @ 0x1C004F980 (UsbhExceptionWorker.c)
 *     UsbhGetExceptionDispatch @ 0x1C004FA68 (UsbhGetExceptionDispatch.c)
 *     UsbhEtwLogHubException @ 0x1C0057CC0 (UsbhEtwLogHubException.c)
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

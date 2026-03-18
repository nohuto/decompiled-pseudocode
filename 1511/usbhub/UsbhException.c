/*
 * XREFs of UsbhException @ 0x1C004EC30
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C00029A0 (UsbhFdoD0Worker_Action.c)
 *     UsbhCompletePdoWakeIrps @ 0x1C0002C00 (UsbhCompletePdoWakeIrps.c)
 *     UsbhFdoSetD0Cold @ 0x1C0002F90 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartCheckPort @ 0x1C00033B8 (UsbhFdoColdStartCheckPort.c)
 *     UsbhCheckHubPowerStatus @ 0x1C00034B0 (UsbhCheckHubPowerStatus.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     UsbhFdoColdStartPdo @ 0x1C0003B8C (UsbhFdoColdStartPdo.c)
 *     UsbhBusSuspend_Action @ 0x1C0004A20 (UsbhBusSuspend_Action.c)
 *     UsbhPdoSetD0_Finish @ 0x1C0004BF4 (UsbhPdoSetD0_Finish.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C00051B4 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetSerialNumber @ 0x1C00052B8 (UsbhGetSerialNumber.c)
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 *     UsbhGetLanguageIdString @ 0x1C0005910 (UsbhGetLanguageIdString.c)
 *     UsbhGetDeviceInformation @ 0x1C0006310 (UsbhGetDeviceInformation.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0006538 (UsbhGetHubDeviceInformation.c)
 *     UsbhCheckDeviceErrata @ 0x1C00068BC (UsbhCheckDeviceErrata.c)
 *     UsbhCheckHubErrata @ 0x1C00075B8 (UsbhCheckHubErrata.c)
 *     UsbhSshResumeUpstream @ 0x1C0008B00 (UsbhSshResumeUpstream.c)
 *     UsbhInitializeDevice @ 0x1C0009770 (UsbhInitializeDevice.c)
 *     UsbhCreateDevice @ 0x1C0009880 (UsbhCreateDevice.c)
 *     UsbhSshResumeDownstream @ 0x1C000AA90 (UsbhSshResumeDownstream.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C000BAB0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C000BF70 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhSyncSuspendPdoPort @ 0x1C000CAA4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C000CBE0 (UsbhPdoPnp_StartDevice.c)
 *     UsbhQueryChange @ 0x1C000FA00 (UsbhQueryChange.c)
 *     UsbhGetBusInterface @ 0x1C0010490 (UsbhGetBusInterface.c)
 *     UsbhSshSuspendHub @ 0x1C001068C (UsbhSshSuspendHub.c)
 *     UsbhReset2Complete @ 0x1C0010B30 (UsbhReset2Complete.c)
 *     UsbhSetHubRemoteWake @ 0x1C00110D0 (UsbhSetHubRemoteWake.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0011200 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhBusIfAddDevice @ 0x1C00127E0 (UsbhBusIfAddDevice.c)
 *     UsbhHubProcessIsr @ 0x1C0012AD0 (UsbhHubProcessIsr.c)
 *     UsbhHubRunPortChangeQueue @ 0x1C0016A90 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0018370 (UsbhHubDispatchPortEvent.c)
 *     UsbhQueryPortState @ 0x1C0019A40 (UsbhQueryPortState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C001B4B0 (UsbhSyncPowerOnPorts.c)
 *     UsbhFinishStart @ 0x1C001B760 (UsbhFinishStart.c)
 *     UsbhGetDescriptor @ 0x1C001BBA0 (UsbhGetDescriptor.c)
 *     UsbhPortConnect @ 0x1C001BDA0 (UsbhPortConnect.c)
 *     UsbhQueryHubState @ 0x1C001C92C (UsbhQueryHubState.c)
 *     UsbhGetMaxPowerPerPort @ 0x1C001CB10 (UsbhGetMaxPowerPerPort.c)
 *     UsbhGetHubClassDescriptor @ 0x1C001CC20 (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubConfigurationDescriptor @ 0x1C001CD1C (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhSuspendPort @ 0x1C001CE34 (UsbhSuspendPort.c)
 *     UsbhConfigureUsbHub @ 0x1C001D394 (UsbhConfigureUsbHub.c)
 *     UsbhParseConfigurationDescriptorEx @ 0x1C001D610 (UsbhParseConfigurationDescriptorEx.c)
 *     UsbhFdoPnp_StartDevice @ 0x1C001DF20 (UsbhFdoPnp_StartDevice.c)
 *     UsbhResetPort @ 0x1C001E7B8 (UsbhResetPort.c)
 *     UsbhPdoSetD0 @ 0x1C001FF90 (UsbhPdoSetD0.c)
 *     UsbhHubIsr @ 0x1C0021DA0 (UsbhHubIsr.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C0025670 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhResumeSuspendedPort @ 0x1C0025898 (UsbhResumeSuspendedPort.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0026440 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhFdoPnp_QueryPnpDeviceState @ 0x1C0026A00 (UsbhFdoPnp_QueryPnpDeviceState.c)
 *     UsbhPdoQueryWmiRegInfo @ 0x1C0026C00 (UsbhPdoQueryWmiRegInfo.c)
 *     UsbhGetProductIdString @ 0x1C0027D34 (UsbhGetProductIdString.c)
 *     UsbhSyncResumePort @ 0x1C002817C (UsbhSyncResumePort.c)
 *     UsbhValidateSerialNumberString @ 0x1C0028470 (UsbhValidateSerialNumberString.c)
 *     UsbhSetPortIndicator @ 0x1C00286B0 (UsbhSetPortIndicator.c)
 *     UsbhGetMsOsContainerID @ 0x1C0028B78 (UsbhGetMsOsContainerID.c)
 *     UsbhFdoDeviceControl @ 0x1C003B630 (UsbhFdoDeviceControl.c)
 *     UsbhOutOfBandwidthTimerDpc @ 0x1C003C700 (UsbhOutOfBandwidthTimerDpc.c)
 *     UsbhSetPortPower @ 0x1C003CA04 (UsbhSetPortPower.c)
 *     UsbhFdoCyclePdoPort @ 0x1C003E5D4 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoRecordFailure @ 0x1C003E92C (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C003EB24 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003F07C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041718 (UsbhQueueSoftConnectChange.c)
 *     UsbhClearTt @ 0x1C0042C64 (UsbhClearTt.c)
 *     UsbhDisablePort @ 0x1C004332C (UsbhDisablePort.c)
 *     UsbhGetBillboardInfo @ 0x1C00436C0 (UsbhGetBillboardInfo.c)
 *     UsbhHubResetIrqPipeWorker @ 0x1C0043C60 (UsbhHubResetIrqPipeWorker.c)
 *     UsbhPortResumeTimeout @ 0x1C0044014 (UsbhPortResumeTimeout.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C0045C58 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045DA0 (UsbhFdoSetD0Warm.c)
 *     UsbhHardReset_Action @ 0x1C004690C (UsbhHardReset_Action.c)
 *     UsbhIoctlCyclePort @ 0x1C00478D4 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004802C (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C0048354 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C004859C (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004880C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C0048AA0 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C0048D04 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C0049154 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0049460 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C0049734 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C00499E8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0049CA4 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0049F58 (UsbhIoctlResetStuckHub.c)
 *     UsbhIoctlValidateParameters @ 0x1C004A368 (UsbhIoctlValidateParameters.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1C004B710 (UsbhResetNotificationIrpCompletion.c)
 *     UsbhHandleOvercurrent @ 0x1C0050254 (UsbhHandleOvercurrent.c)
 *     UsbhHardErrorInvalidData @ 0x1C0050490 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050570 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortResumeFailed @ 0x1C0050AA0 (UsbhPortResumeFailed.c)
 *     UsbhReset1DebounceError @ 0x1C0050E70 (UsbhReset1DebounceError.c)
 *     UsbhReset1Timeout @ 0x1C0051140 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C0051330 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C0051840 (UsbhReset2TimeoutBadEnable.c)
 *     UsbhSetEnumerationFailed @ 0x1C0051920 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhReferenceListAdd @ 0x1C001E480 (UsbhReferenceListAdd.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024960 (UsbhQueueWorkItemEx.c)
 *     UsbhReferenceListRemove @ 0x1C0024EB0 (UsbhReferenceListRemove.c)
 *     memmove @ 0x1C0028E40 (memmove.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhExceptionTrace @ 0x1C004EF18 (UsbhExceptionTrace.c)
 *     UsbhExceptionWorker @ 0x1C004F210 (UsbhExceptionWorker.c)
 *     UsbhGetExceptionDispatch @ 0x1C004F2F8 (UsbhGetExceptionDispatch.c)
 *     UsbhEtwLogHubException @ 0x1C00576FC (UsbhEtwLogHubException.c)
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

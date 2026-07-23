/*
 * XREFs of ProbeForWrite @ 0x14044C990
 * Callers:
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     MiDbgCopyMemory @ 0x140084338 (MiDbgCopyMemory.c)
 *     PfpMemoryListQuery @ 0x1400AC28C (PfpMemoryListQuery.c)
 *     PfpMemoryRangesQuery @ 0x1400AE2E8 (PfpMemoryRangesQuery.c)
 *     KiDispatchException @ 0x1400F1BB0 (KiDispatchException.c)
 *     PsQueryCpuQuotaInformation @ 0x14014CE1C (PsQueryCpuQuotaInformation.c)
 *     PfGetCompletedTrace @ 0x1403E80E4 (PfGetCompletedTrace.c)
 *     PfpPrefetchRequest @ 0x1403EE3C8 (PfpPrefetchRequest.c)
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     NtAlpcQueryInformationMessage @ 0x140407880 (NtAlpcQueryInformationMessage.c)
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 *     PfpPfnPrioRequest @ 0x14041A310 (PfpPfnPrioRequest.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     NtEnumerateKey @ 0x140438A40 (NtEnumerateKey.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     AlpcpCaptureAttributes @ 0x14044B6A0 (AlpcpCaptureAttributes.c)
 *     NtPrivilegeCheck @ 0x14045E7B8 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x14045E9C4 (NtAdjustPrivilegesToken.c)
 *     NtGetCompleteWnfStateSubscription @ 0x140460090 (NtGetCompleteWnfStateSubscription.c)
 *     NtSubscribeWnfStateChange @ 0x14046075C (NtSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x140460F60 (NtQueryWnfStateData.c)
 *     NtQueryEaFile @ 0x14046A59C (NtQueryEaFile.c)
 *     NtQuerySection @ 0x1404709B4 (NtQuerySection.c)
 *     NtAdjustGroupsToken @ 0x140476094 (NtAdjustGroupsToken.c)
 *     PiDqIrpQueryGetResult @ 0x14048ADF8 (PiDqIrpQueryGetResult.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14048E51C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpRealtimeConnect @ 0x14049302C (EtwpRealtimeConnect.c)
 *     NtQueryDirectoryObject @ 0x14049A960 (NtQueryDirectoryObject.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14049BF90 (EtwQueryProcessTelemetryInfo.c)
 *     NtSecureConnectPort @ 0x14049C42C (NtSecureConnectPort.c)
 *     AlpcpProbeMessageAttributes @ 0x14049D120 (AlpcpProbeMessageAttributes.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     NtQuerySymbolicLinkObject @ 0x1404AC0F4 (NtQuerySymbolicLinkObject.c)
 *     NtQueryEvent @ 0x1404B06B4 (NtQueryEvent.c)
 *     NtQueryInformationAtom @ 0x1404B1934 (NtQueryInformationAtom.c)
 *     ExHandleSPCall2 @ 0x1404B35D4 (ExHandleSPCall2.c)
 *     NtGetMUIRegistryInfo @ 0x1404B3868 (NtGetMUIRegistryInfo.c)
 *     NtRemoveIoCompletionEx @ 0x1404B77E4 (NtRemoveIoCompletionEx.c)
 *     NtGetCachedSigningLevel @ 0x1404B7928 (NtGetCachedSigningLevel.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404B87E8 (NtNotifyChangeDirectoryFile.c)
 *     PfpQueryGpuUtilization @ 0x1404B93B4 (PfpQueryGpuUtilization.c)
 *     PfSnGetCompletedTrace @ 0x1404BC148 (PfSnGetCompletedTrace.c)
 *     NtQueryMutant @ 0x1404BEC28 (NtQueryMutant.c)
 *     NtQueryWnfStateNameInformation @ 0x1404C015C (NtQueryWnfStateNameInformation.c)
 *     NtQueryMultipleValueKey @ 0x1404C0BFC (NtQueryMultipleValueKey.c)
 *     NtSystemDebugControl @ 0x1404C1E48 (NtSystemDebugControl.c)
 *     NtSetInformationVirtualMemory @ 0x1404D6C9C (NtSetInformationVirtualMemory.c)
 *     PiCMReturnBasicResultData @ 0x1404DA01C (PiCMReturnBasicResultData.c)
 *     PiCMReturnStatusResultData @ 0x1404DA414 (PiCMReturnStatusResultData.c)
 *     PiCMReturnHandleResultData @ 0x1404DCA48 (PiCMReturnHandleResultData.c)
 *     PiCMReturnBufferResultData @ 0x1404DFBBC (PiCMReturnBufferResultData.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1404E3424 (PiControlCopyUserModeCallersBuffer.c)
 *     PfpPrivSourceEnum @ 0x1404EB998 (PfpPrivSourceEnum.c)
 *     BuildQueryDirectoryIrp @ 0x1404F0410 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1404F4F20 (NtQueryVolumeInformationFile.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1404FBC9C (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWriteExtendedContext @ 0x1404FC260 (RtlpWriteExtendedContext.c)
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     NtQuerySecurityObject @ 0x140504310 (NtQuerySecurityObject.c)
 *     NtQueryLicenseValue @ 0x14051C200 (NtQueryLicenseValue.c)
 *     NtQueryObject @ 0x14051CF90 (NtQueryObject.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140548380 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C9E8 (ExpGetSystemPlatformBinary.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9BC0 (NtQueryOpenSubKeysEx.c)
 *     NtQueryQuotaInformationFile @ 0x140625894 (NtQueryQuotaInformationFile.c)
 *     PiCMReturnDepthResultData @ 0x14064870C (PiCMReturnDepthResultData.c)
 *     NtQueryInformationPort @ 0x140654A04 (NtQueryInformationPort.c)
 *     AlpcpCopyRequestData @ 0x1406552E4 (AlpcpCopyRequestData.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CB7C (NtAllocateUserPhysicalPages.c)
 *     ObQueryRefTraceInformation @ 0x14066746C (ObQueryRefTraceInformation.c)
 *     PfpQueryFileExtentsRequest @ 0x1406691FC (PfpQueryFileExtentsRequest.c)
 *     NtGetCurrentProcessorNumberEx @ 0x14067D41C (NtGetCurrentProcessorNumberEx.c)
 *     NtQuerySecurityPolicy @ 0x14068C778 (NtQuerySecurityPolicy.c)
 *     SmProcessListRequest @ 0x140696984 (SmProcessListRequest.c)
 *     ExpGetDeviceDataInformation @ 0x1406AB380 (ExpGetDeviceDataInformation.c)
 *     NtEnumerateBootEntries @ 0x1406B38C4 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406B3E64 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406B4314 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1406B45E8 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1406B4854 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x1406B4B4C (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406B4E60 (NtQuerySystemEnvironmentValue.c)
 *     NtTranslateFilePath @ 0x1406B5D14 (NtTranslateFilePath.c)
 *     ExpProfileCreate @ 0x1406B7D44 (ExpProfileCreate.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x1406CA460 (AuthzBasepProbeAndInsertTailList.c)
 *     KdpPrompt @ 0x1406F5E00 (KdpPrompt.c)
 * Callees:
 *     ExRaiseAccessViolation @ 0x1406B6180 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall ProbeForWrite(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  unsigned __int64 v3; // rdx
  volatile void *v4; // rdx

  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
    v3 = (unsigned __int64)Address + Length - 1;
    if ( (unsigned __int64)Address > v3 || v3 >= 0x7FFFFFFF0000LL )
    {
      if ( !KeGetCurrentThread()->ApcState.Process->SecurePid )
        ExRaiseAccessViolation();
    }
    else
    {
      v4 = (volatile void *)((v3 & 0xFFFFFFFFFFFFF000uLL) + 4096);
      do
      {
        *(_BYTE *)Address = *(_BYTE *)Address;
        Address = (volatile void *)(((unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL) + 4096);
      }
      while ( Address != v4 );
    }
  }
}

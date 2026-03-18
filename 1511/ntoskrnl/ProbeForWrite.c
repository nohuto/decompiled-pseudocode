/*
 * XREFs of ProbeForWrite @ 0x14042F1F0
 * Callers:
 *     KiDispatchException @ 0x140022BB4 (KiDispatchException.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     NtGetWriteWatch @ 0x1400B66D0 (NtGetWriteWatch.c)
 *     PfpMemoryRangesQuery @ 0x1400C206C (PfpMemoryRangesQuery.c)
 *     PfpMemoryListQuery @ 0x1400EECF4 (PfpMemoryListQuery.c)
 *     PsQueryCpuQuotaInformation @ 0x140142930 (PsQueryCpuQuotaInformation.c)
 *     MiDbgCopyMemory @ 0x1401DD808 (MiDbgCopyMemory.c)
 *     NtAdjustPrivilegesToken @ 0x1403C28D4 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x1403C312C (NtPrivilegeCheck.c)
 *     NtSetInformationVirtualMemory @ 0x1403CA6EC (NtSetInformationVirtualMemory.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1403E3EA0 (NtGetCompleteWnfStateSubscription.c)
 *     NtSubscribeWnfStateChange @ 0x1403E493C (NtSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1403E4D70 (NtQueryWnfStateData.c)
 *     PfGetCompletedTrace @ 0x1403E7018 (PfGetCompletedTrace.c)
 *     NtQueryInformationThread @ 0x1403EE050 (NtQueryInformationThread.c)
 *     NtEnumerateKey @ 0x1403FD480 (NtEnumerateKey.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     PfpPfnPrioRequest @ 0x140415750 (PfpPfnPrioRequest.c)
 *     NtQueryObject @ 0x14041F7E0 (NtQueryObject.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpCaptureAttributes @ 0x14042A430 (AlpcpCaptureAttributes.c)
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 *     BuildQueryDirectoryIrp @ 0x1404379F0 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1404383A0 (NtQueryVolumeInformationFile.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1404391A0 (PiControlCopyUserModeCallersBuffer.c)
 *     NtQuerySecurityObject @ 0x140439240 (NtQuerySecurityObject.c)
 *     NtQueryDirectoryObject @ 0x14043A290 (NtQueryDirectoryObject.c)
 *     PiCMReturnBufferResultData @ 0x14043AC34 (PiCMReturnBufferResultData.c)
 *     PiCMReturnHandleResultData @ 0x140442DFC (PiCMReturnHandleResultData.c)
 *     PfpPrivSourceEnum @ 0x14044B238 (PfpPrivSourceEnum.c)
 *     NtQuerySection @ 0x14044F0C8 (NtQuerySection.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PiCMReturnBasicResultData @ 0x14045BD10 (PiCMReturnBasicResultData.c)
 *     PiCMReturnStatusResultData @ 0x14045BE78 (PiCMReturnStatusResultData.c)
 *     PiDqIrpQueryGetResult @ 0x14045DAA4 (PiDqIrpQueryGetResult.c)
 *     NtQueryInformationAtom @ 0x14045FBEC (NtQueryInformationAtom.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 *     AlpcpProbeMessageAttributes @ 0x140480C64 (AlpcpProbeMessageAttributes.c)
 *     NtSecureConnectPort @ 0x140481DB0 (NtSecureConnectPort.c)
 *     NtQueryLicenseValue @ 0x140489ACC (NtQueryLicenseValue.c)
 *     NtQueryEaFile @ 0x14048E36C (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x14048FA08 (NtNotifyChangeDirectoryFile.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     PfpPrefetchRequest @ 0x1404A29D8 (PfpPrefetchRequest.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404A32FC (EtwQueryProcessTelemetryInfo.c)
 *     NtQuerySymbolicLinkObject @ 0x1404A3BAC (NtQuerySymbolicLinkObject.c)
 *     RtlpWriteExtendedContext @ 0x1404A4F08 (RtlpWriteExtendedContext.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1404A53C8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     NtAlpcQueryInformationMessage @ 0x1404A5E90 (NtAlpcQueryInformationMessage.c)
 *     NtQueryEvent @ 0x1404A7934 (NtQueryEvent.c)
 *     NtQueryMultipleValueKey @ 0x1404A8360 (NtQueryMultipleValueKey.c)
 *     NtGetMUIRegistryInfo @ 0x1404AAE1C (NtGetMUIRegistryInfo.c)
 *     NtGetCachedSigningLevel @ 0x1404AD250 (NtGetCachedSigningLevel.c)
 *     NtAdjustGroupsToken @ 0x1404AD974 (NtAdjustGroupsToken.c)
 *     sub_1404AE668 @ 0x1404AE668 (sub_1404AE668.c)
 *     NtRemoveIoCompletionEx @ 0x1404B049C (NtRemoveIoCompletionEx.c)
 *     PfpQueryGpuUtilization @ 0x1404B0D74 (PfpQueryGpuUtilization.c)
 *     PfSnGetCompletedTrace @ 0x1404B38B8 (PfSnGetCompletedTrace.c)
 *     NtQueryWnfStateNameInformation @ 0x1404B550C (NtQueryWnfStateNameInformation.c)
 *     EtwpRealtimeConnect @ 0x1404B615C (EtwpRealtimeConnect.c)
 *     NtQueryMutant @ 0x1404BBC94 (NtQueryMutant.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1404CC370 (EtwpGetLoggerInfoFromContext.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14050CD48 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetSystemPlatformBinary @ 0x1405482D8 (ExpGetSystemPlatformBinary.c)
 *     NtQueryOpenSubKeysEx @ 0x1405DBD48 (NtQueryOpenSubKeysEx.c)
 *     NtQueryQuotaInformationFile @ 0x1405FBBAC (NtQueryQuotaInformationFile.c)
 *     PiCMReturnDepthResultData @ 0x140613E94 (PiCMReturnDepthResultData.c)
 *     NtQueryInformationPort @ 0x14061F67C (NtQueryInformationPort.c)
 *     AlpcpCopyRequestData @ 0x14061FF58 (AlpcpCopyRequestData.c)
 *     NtAllocateUserPhysicalPages @ 0x140627344 (NtAllocateUserPhysicalPages.c)
 *     ObQueryRefTraceInformation @ 0x14062F2A8 (ObQueryRefTraceInformation.c)
 *     PfpQueryFileExtentsRequest @ 0x140630EFC (PfpQueryFileExtentsRequest.c)
 *     NtGetCurrentProcessorNumberEx @ 0x14063ECC8 (NtGetCurrentProcessorNumberEx.c)
 *     SmProcessListRequest @ 0x1406574E4 (SmProcessListRequest.c)
 *     ExpGetDeviceDataInformation @ 0x14066ABBC (ExpGetDeviceDataInformation.c)
 *     NtEnumerateBootEntries @ 0x140670A9C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140671040 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406714EC (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1406717BC (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140671A24 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x140671D18 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x140672028 (NtQuerySystemEnvironmentValue.c)
 *     NtTranslateFilePath @ 0x140672ED4 (NtTranslateFilePath.c)
 *     ExpProfileCreate @ 0x1406752BC (ExpProfileCreate.c)
 *     NtSystemDebugControl @ 0x1406772A8 (NtSystemDebugControl.c)
 *     KdpPrompt @ 0x1406ACF04 (KdpPrompt.c)
 *     VerifierProbeForWrite @ 0x1406C0BDC (VerifierProbeForWrite.c)
 * Callees:
 *     ExRaiseAccessViolation @ 0x140673340 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

void __stdcall ProbeForWrite(volatile void *Address, SIZE_T Length, ULONG Alignment)
{
  ULONG64 v3; // rdx
  volatile void *v4; // rdx

  if ( Length )
  {
    if ( ((Alignment - 1) & (unsigned int)Address) != 0 )
      ExRaiseDatatypeMisalignment();
    v3 = (ULONG64)Address + Length - 1;
    if ( (unsigned __int64)Address > v3 || v3 >= MmUserProbeAddress )
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

/*
 * XREFs of ProbeForWrite @ 0x1404BE3C0
 * Callers:
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     PfpMemoryRangesQuery @ 0x1400FF74C (PfpMemoryRangesQuery.c)
 *     PfpMemoryListQuery @ 0x140128D6C (PfpMemoryListQuery.c)
 *     PsQueryCpuQuotaInformation @ 0x1401707F4 (PsQueryCpuQuotaInformation.c)
 *     MiDbgCopyMemory @ 0x140222AD0 (MiDbgCopyMemory.c)
 *     NtQueryMutant @ 0x140408154 (NtQueryMutant.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14040EFBC (EtwpGetLoggerInfoFromContext.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     NtQueryObject @ 0x1404259B0 (NtQueryObject.c)
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     PfQuerySuperfetchInformation @ 0x140431980 (PfQuerySuperfetchInformation.c)
 *     PiCMReturnBufferResultData @ 0x140441124 (PiCMReturnBufferResultData.c)
 *     PiCMReturnHandleResultData @ 0x140442B30 (PiCMReturnHandleResultData.c)
 *     PiDqIrpQueryGetResult @ 0x140444BEC (PiDqIrpQueryGetResult.c)
 *     sub_140452868 @ 0x140452868 (sub_140452868.c)
 *     PfpPrefetchRequest @ 0x1404558A8 (PfpPrefetchRequest.c)
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     NtQuerySecurityObject @ 0x140466FC0 (NtQuerySecurityObject.c)
 *     NtPrivilegeCheck @ 0x14046AF58 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x14046D600 (NtAdjustPrivilegesToken.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     AlpcpCaptureAttributes @ 0x14047EB30 (AlpcpCaptureAttributes.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     NtQueryInformationThread @ 0x14049C030 (NtQueryInformationThread.c)
 *     BuildQueryDirectoryIrp @ 0x1404BC130 (BuildQueryDirectoryIrp.c)
 *     MmCopyVirtualMemory @ 0x1404BD870 (MmCopyVirtualMemory.c)
 *     PfpPfnPrioRequest @ 0x1404BEB40 (PfpPfnPrioRequest.c)
 *     NtEnumerateKey @ 0x1404C6220 (NtEnumerateKey.c)
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 *     PiCMReturnStatusResultData @ 0x1404DBFB8 (PiCMReturnStatusResultData.c)
 *     PiCMReturnBasicResultData @ 0x1404DD148 (PiCMReturnBasicResultData.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404F34A0 (EtwQueryProcessTelemetryInfo.c)
 *     PfGetCompletedTrace @ 0x1404F74C8 (PfGetCompletedTrace.c)
 *     NtSetInformationVirtualMemory @ 0x1404FB5E8 (NtSetInformationVirtualMemory.c)
 *     NtGetCompleteWnfStateSubscription @ 0x14050126C (NtGetCompleteWnfStateSubscription.c)
 *     NtSubscribeWnfStateChange @ 0x140501E64 (NtSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1405026FC (NtQueryWnfStateData.c)
 *     NtQueryInformationAtom @ 0x140504728 (NtQueryInformationAtom.c)
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 *     NtQueryLicenseValue @ 0x14051D354 (NtQueryLicenseValue.c)
 *     NtQueryDirectoryObject @ 0x140520F80 (NtQueryDirectoryObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     NtQuerySymbolicLinkObject @ 0x140529280 (NtQuerySymbolicLinkObject.c)
 *     NtSecureConnectPort @ 0x140529588 (NtSecureConnectPort.c)
 *     AlpcpProcessConnectionRequest @ 0x140529D38 (AlpcpProcessConnectionRequest.c)
 *     NtAlpcQueryInformationMessage @ 0x140530090 (NtAlpcQueryInformationMessage.c)
 *     RtlpWriteExtendedContext @ 0x14053112C (RtlpWriteExtendedContext.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405315F4 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x14053A1D8 (PiControlCopyUserModeCallersBuffer.c)
 *     NtGetMUIRegistryInfo @ 0x14053A748 (NtGetMUIRegistryInfo.c)
 *     NtNotifyChangeDirectoryFile @ 0x14053E7A0 (NtNotifyChangeDirectoryFile.c)
 *     NtAdjustGroupsToken @ 0x14053F940 (NtAdjustGroupsToken.c)
 *     NtQueryEvent @ 0x1405413B4 (NtQueryEvent.c)
 *     NtQuerySection @ 0x140541E3C (NtQuerySection.c)
 *     NtQueryMultipleValueKey @ 0x140542CE4 (NtQueryMultipleValueKey.c)
 *     NtRemoveIoCompletionEx @ 0x1405432F8 (NtRemoveIoCompletionEx.c)
 *     PfSnGetCompletedTrace @ 0x140544D6C (PfSnGetCompletedTrace.c)
 *     PfpQueryGpuUtilization @ 0x140545A28 (PfpQueryGpuUtilization.c)
 *     NtQueryWnfStateNameInformation @ 0x14054BE40 (NtQueryWnfStateNameInformation.c)
 *     EtwpRealtimeConnect @ 0x14054D23C (EtwpRealtimeConnect.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14058417C (NtQuerySystemEnvironmentValueEx.c)
 *     PiCMReturnDepthResultData @ 0x14058D6E0 (PiCMReturnDepthResultData.c)
 *     ExpGetSystemPlatformBinary @ 0x1405BF130 (ExpGetSystemPlatformBinary.c)
 *     NtQueryOpenSubKeysEx @ 0x1406505EC (NtQueryOpenSubKeysEx.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 *     NtQueryInformationPort @ 0x14069E464 (NtQueryInformationPort.c)
 *     AlpcpCopyRequestData @ 0x14069EDA8 (AlpcpCopyRequestData.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 *     ObQueryRefTraceInformation @ 0x1406AD1F8 (ObQueryRefTraceInformation.c)
 *     PfpQueryFileExtentsRequest @ 0x1406AF41C (PfpQueryFileExtentsRequest.c)
 *     NtGetCurrentProcessorNumberEx @ 0x1406BFA2C (NtGetCurrentProcessorNumberEx.c)
 *     NtGetCachedSigningLevel @ 0x1406D054C (NtGetCachedSigningLevel.c)
 *     SmProcessListRequest @ 0x1406D97B8 (SmProcessListRequest.c)
 *     ExpGetDeviceDataInformation @ 0x1406EE204 (ExpGetDeviceDataInformation.c)
 *     NtEnumerateBootEntries @ 0x1406F4780 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406F4DB4 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406F5304 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1406F5720 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1406F5A1C (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x1406F5DA8 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406F61FC (NtQuerySystemEnvironmentValue.c)
 *     NtTranslateFilePath @ 0x1406F73B0 (NtTranslateFilePath.c)
 *     ExpProfileCreate @ 0x1406F9A1C (ExpProfileCreate.c)
 *     NtSystemDebugControl @ 0x1406FBA78 (NtSystemDebugControl.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x140708C80 (AuthzBasepProbeAndInsertTailList.c)
 *     KdpPrompt @ 0x14072CFC0 (KdpPrompt.c)
 *     VerifierProbeForWrite @ 0x14074241C (VerifierProbeForWrite.c)
 * Callees:
 *     ExRaiseAccessViolation @ 0x1406F7890 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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

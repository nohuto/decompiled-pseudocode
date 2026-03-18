/*
 * XREFs of ProbeForWrite @ 0x14044DAC0
 * Callers:
 *     NtGetWriteWatch @ 0x140014EF0 (NtGetWriteWatch.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     MiDbgCopyMemory @ 0x1400836B8 (MiDbgCopyMemory.c)
 *     PfpMemoryListQuery @ 0x1400ADD24 (PfpMemoryListQuery.c)
 *     PfpMemoryRangesQuery @ 0x1400B0144 (PfpMemoryRangesQuery.c)
 *     KiDispatchException @ 0x1400F3D60 (KiDispatchException.c)
 *     PsQueryCpuQuotaInformation @ 0x14014C8AC (PsQueryCpuQuotaInformation.c)
 *     PfGetCompletedTrace @ 0x1403E6AB4 (PfGetCompletedTrace.c)
 *     PfpPrefetchRequest @ 0x1403ECD98 (PfpPrefetchRequest.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     NtAlpcQueryInformationMessage @ 0x1404089C0 (NtAlpcQueryInformationMessage.c)
 *     NtTraceControl @ 0x14040DD40 (NtTraceControl.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     PfQuerySuperfetchInformation @ 0x140418550 (PfQuerySuperfetchInformation.c)
 *     PfpPfnPrioRequest @ 0x14041B450 (PfpPfnPrioRequest.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     NtEnumerateKey @ 0x140439B70 (NtEnumerateKey.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     AlpcpProcessSynchronousRequest @ 0x140448B60 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404494D0 (AlpcpReceiveMessage.c)
 *     AlpcpCaptureAttributes @ 0x14044C7D0 (AlpcpCaptureAttributes.c)
 *     NtPrivilegeCheck @ 0x14045F8E8 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x14045FAF4 (NtAdjustPrivilegesToken.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1404611C0 (NtGetCompleteWnfStateSubscription.c)
 *     NtSubscribeWnfStateChange @ 0x14046188C (NtSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x140462090 (NtQueryWnfStateData.c)
 *     NtQueryEaFile @ 0x14046B6CC (NtQueryEaFile.c)
 *     NtQuerySection @ 0x140471AE4 (NtQuerySection.c)
 *     NtAdjustGroupsToken @ 0x1404771C4 (NtAdjustGroupsToken.c)
 *     PiDqIrpQueryGetResult @ 0x14048AB64 (PiDqIrpQueryGetResult.c)
 *     EtwpGetLoggerInfoFromContext @ 0x14048DA8C (EtwpGetLoggerInfoFromContext.c)
 *     EtwpRealtimeConnect @ 0x14049259C (EtwpRealtimeConnect.c)
 *     NtQueryLicenseValue @ 0x1404A3E00 (NtQueryLicenseValue.c)
 *     NtQueryObject @ 0x1404A4B90 (NtQueryObject.c)
 *     NtQueryDirectoryObject @ 0x1404B0580 (NtQueryDirectoryObject.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404B1BB0 (EtwQueryProcessTelemetryInfo.c)
 *     NtSecureConnectPort @ 0x1404B204C (NtSecureConnectPort.c)
 *     AlpcpProbeMessageAttributes @ 0x1404B2D40 (AlpcpProbeMessageAttributes.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     NtQuerySymbolicLinkObject @ 0x1404C03C4 (NtQuerySymbolicLinkObject.c)
 *     NtQueryEvent @ 0x1404CA934 (NtQueryEvent.c)
 *     NtQueryInformationAtom @ 0x1404CBF08 (NtQueryInformationAtom.c)
 *     ExHandleSPCall2 @ 0x1404CE374 (ExHandleSPCall2.c)
 *     NtGetMUIRegistryInfo @ 0x1404CFDC8 (NtGetMUIRegistryInfo.c)
 *     NtRemoveIoCompletionEx @ 0x1404D3D44 (NtRemoveIoCompletionEx.c)
 *     NtGetCachedSigningLevel @ 0x1404D3E88 (NtGetCachedSigningLevel.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404D51E4 (NtNotifyChangeDirectoryFile.c)
 *     PfpQueryGpuUtilization @ 0x1404D5DB0 (PfpQueryGpuUtilization.c)
 *     PfSnGetCompletedTrace @ 0x1404D8B44 (PfSnGetCompletedTrace.c)
 *     NtQueryMutant @ 0x1404DB624 (NtQueryMutant.c)
 *     NtQueryWnfStateNameInformation @ 0x1404DCB58 (NtQueryWnfStateNameInformation.c)
 *     NtQueryMultipleValueKey @ 0x1404DD5F8 (NtQueryMultipleValueKey.c)
 *     NtSystemDebugControl @ 0x1404DE844 (NtSystemDebugControl.c)
 *     NtSetInformationVirtualMemory @ 0x1404F3D10 (NtSetInformationVirtualMemory.c)
 *     PiCMReturnBasicResultData @ 0x1404F7090 (PiCMReturnBasicResultData.c)
 *     PiCMReturnStatusResultData @ 0x1404F7488 (PiCMReturnStatusResultData.c)
 *     PiCMReturnHandleResultData @ 0x1404F9ABC (PiCMReturnHandleResultData.c)
 *     PiCMReturnBufferResultData @ 0x1404FCC2C (PiCMReturnBufferResultData.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x140500494 (PiControlCopyUserModeCallersBuffer.c)
 *     PfpPrivSourceEnum @ 0x140508A08 (PfpPrivSourceEnum.c)
 *     BuildQueryDirectoryIrp @ 0x14050D480 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405188AC (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWriteExtendedContext @ 0x140518E70 (RtlpWriteExtendedContext.c)
 *     NtQueryInformationThread @ 0x140519650 (NtQueryInformationThread.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     NtQuerySecurityObject @ 0x1405212B0 (NtQuerySecurityObject.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140547E40 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C53C (ExpGetSystemPlatformBinary.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9B0C (NtQueryOpenSubKeysEx.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 *     PiCMReturnDepthResultData @ 0x140648628 (PiCMReturnDepthResultData.c)
 *     NtQueryInformationPort @ 0x140654920 (NtQueryInformationPort.c)
 *     AlpcpCopyRequestData @ 0x140655200 (AlpcpCopyRequestData.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CA98 (NtAllocateUserPhysicalPages.c)
 *     ObQueryRefTraceInformation @ 0x140667388 (ObQueryRefTraceInformation.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 *     NtGetCurrentProcessorNumberEx @ 0x14067D338 (NtGetCurrentProcessorNumberEx.c)
 *     NtQuerySecurityPolicy @ 0x14068C694 (NtQuerySecurityPolicy.c)
 *     SmProcessListRequest @ 0x1406968A0 (SmProcessListRequest.c)
 *     ExpGetDeviceDataInformation @ 0x1406AB248 (ExpGetDeviceDataInformation.c)
 *     NtEnumerateBootEntries @ 0x1406B378C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406B3D2C (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406B41DC (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryBootEntryOrder @ 0x1406B44B0 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1406B471C (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x1406B4A14 (NtQueryDriverEntryOrder.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406B4D28 (NtQuerySystemEnvironmentValue.c)
 *     NtTranslateFilePath @ 0x1406B5BDC (NtTranslateFilePath.c)
 *     ExpProfileCreate @ 0x1406B7C0C (ExpProfileCreate.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x1406CA328 (AuthzBasepProbeAndInsertTailList.c)
 *     KdpPrompt @ 0x1406F5E00 (KdpPrompt.c)
 * Callees:
 *     ExRaiseAccessViolation @ 0x1406B6048 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
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

/*
 * XREFs of PsReferencePrimaryToken @ 0x14050D730
 * Callers:
 *     RtlpQueryLowBoxId @ 0x140010304 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenByHandle @ 0x140045160 (SepReferenceTokenByHandle.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     PspSystemThreadStartup @ 0x1400DAAD4 (PspSystemThreadStartup.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14015D52C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     IoRevokeHandlesForProcess @ 0x1401F7200 (IoRevokeHandlesForProcess.c)
 *     CmpGetVirtualizationID @ 0x140407F88 (CmpGetVirtualizationID.c)
 *     NtImpersonateAnonymousToken @ 0x140410C10 (NtImpersonateAnonymousToken.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1404128C8 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     PspAssignProcessToJob @ 0x14041A524 (PspAssignProcessToJob.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     NtOpenThreadTokenEx @ 0x140433000 (NtOpenThreadTokenEx.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404376A8 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140438A58 (EtwpGetSidExtendedHeaderItem.c)
 *     PfSnCheckModernApp @ 0x140444420 (PfSnCheckModernApp.c)
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     NtFlushBuffersFileEx @ 0x140459AD0 (NtFlushBuffersFileEx.c)
 *     ObSetCurrentProcessDeviceMap @ 0x140461D94 (ObSetCurrentProcessDeviceMap.c)
 *     SepCreateClientSecurityEx @ 0x140481870 (SepCreateClientSecurityEx.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 *     NtCancelIoFile @ 0x1404A81DC (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1404A83A4 (NtCancelIoFileEx.c)
 *     BuildQueryDirectoryIrp @ 0x1404BC130 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     PopCreateUserPowerRequest @ 0x1404EA9B8 (PopCreateUserPowerRequest.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404F34A0 (EtwQueryProcessTelemetryInfo.c)
 *     PspReferenceTokenForNewProcess @ 0x14050B78C (PspReferenceTokenForNewProcess.c)
 *     AlpcpCheckConnectionSecurity @ 0x14050BAF0 (AlpcpCheckConnectionSecurity.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14050CB64 (EtwpBuildProcessEvent.c)
 *     PfpPrivSourceEnum @ 0x14050CF74 (PfpPrivSourceEnum.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14051FAF8 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x14053E7A0 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     SeIsTokenAssignableToProcess @ 0x140545528 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x1405456D0 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x140545758 (SepIsSiblingTokenByPointer.c)
 *     NtReadFileScatter @ 0x140549CBC (NtReadFileScatter.c)
 *     PspSetQuotaLimits @ 0x14054F6C8 (PspSetQuotaLimits.c)
 *     EtwpAcquireTokenAccessInformation @ 0x14055A838 (EtwpAcquireTokenAccessInformation.c)
 *     NtSetVolumeInformationFile @ 0x14055F21C (NtSetVolumeInformationFile.c)
 *     SeAuditProcessCreation @ 0x1405A23C4 (SeAuditProcessCreation.c)
 *     CmpBuildAdminInformation @ 0x140657B40 (CmpBuildAdminInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x14067350C (IopValidateJunctionTarget.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 *     PspGetRedirectionTrustPolicy @ 0x1406BF750 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1406BF7AC (PspSetRedirectionTrustPolicy.c)
 *     PspCreateMinimalProcess @ 0x1406C58D4 (PspCreateMinimalProcess.c)
 *     SeAuditProcessExit @ 0x1406D1F2C (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1406E24E4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406E94E0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1406E9DF0 (EtwpApplyPackageIdFilter.c)
 *     VerifierPsReferencePrimaryToken @ 0x140742464 (VerifierPsReferencePrimaryToken.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  unsigned __int64 *v1; // rdi
  PACCESS_TOKEN result; // rax
  __int64 v4; // r9
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r9
  void *v9; // rbx
  __int16 v10; // ax

  v1 = &Process[1].Affinity.Bitmap[5];
  result = (PACCESS_TOKEN)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = (unsigned __int64 *)&Process[1];
    v7 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, v4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v6, v7, (ULONG_PTR)v6, v8);
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
    v9 = (void *)ObFastReferenceObjectLocked(v1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v10 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v10;
    if ( !v10
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v9;
  }
  return result;
}

/*
 * XREFs of PsReferencePrimaryToken @ 0x140417AE0
 * Callers:
 *     SepReferenceTokenByHandle @ 0x14000E3F0 (SepReferenceTokenByHandle.c)
 *     RtlpQueryLowBoxId @ 0x14000EE48 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A3100 (SepReferenceTokenUsingPseudoHandle.c)
 *     IopIsProcessAppContainer @ 0x1400B06B4 (IopIsProcessAppContainer.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401B4DC4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpGetVirtualizationID @ 0x1403E1B4C (CmpGetVirtualizationID.c)
 *     PfSnCheckModernApp @ 0x1403E8948 (PfSnCheckModernApp.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1403FE9D4 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpCheckConnectionSecurity @ 0x1403FF660 (AlpcpCheckConnectionSecurity.c)
 *     SepCreateClientSecurityEx @ 0x140411140 (SepCreateClientSecurityEx.c)
 *     NtOpenThreadTokenEx @ 0x140412440 (NtOpenThreadTokenEx.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     MmCreateSection @ 0x14042BAE0 (MmCreateSection.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     PspDisablePrimaryTokenExchange @ 0x140458558 (PspDisablePrimaryTokenExchange.c)
 *     PspReferenceTokenForNewProcess @ 0x14045BE54 (PspReferenceTokenForNewProcess.c)
 *     EtwpBuildProcessEvent @ 0x14045C730 (EtwpBuildProcessEvent.c)
 *     MmCreateSectionEx @ 0x140470334 (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x140470450 (MmCreateCacheManagerSection.c)
 *     PsQueryProcessAttributes @ 0x140470C90 (PsQueryProcessAttributes.c)
 *     PspInitializeProcessSecurity @ 0x1404711C8 (PspInitializeProcessSecurity.c)
 *     NtImpersonateAnonymousToken @ 0x140474C2C (NtImpersonateAnonymousToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1404753D4 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x14047553C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1404755C4 (SepIsSiblingTokenByPointer.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140475EB8 (AlpcpPortQueryConnectedSidInfo.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     ObSetCurrentProcessDeviceMap @ 0x14048845C (ObSetCurrentProcessDeviceMap.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14049BF90 (EtwQueryProcessTelemetryInfo.c)
 *     PspSetQuotaLimits @ 0x1404C28C8 (PspSetQuotaLimits.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404C560C (ExpWnfQueryCurrentUserSID.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     EtwTraceAppStateChange @ 0x14051B448 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x14054BA48 (EtwpPsProvTraceProcess.c)
 *     SeAuditProcessCreation @ 0x14056F30C (SeAuditProcessCreation.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140575BE4 (EtwpAcquireTokenAccessInformation.c)
 *     PsCreateMinimalProcess @ 0x14057E7B8 (PsCreateMinimalProcess.c)
 *     CmpBuildAdminInformation @ 0x140600550 (CmpBuildAdminInformation.c)
 *     PspGetRedirectionTrustPolicy @ 0x14067D310 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x14067D36C (PspSetRedirectionTrustPolicy.c)
 *     SeAuditProcessExit @ 0x14068E478 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14069FA70 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406A7ECC (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1406A8C88 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14000F2E0 (ObFastReferenceObject.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 */

PACCESS_TOKEN __stdcall PsReferencePrimaryToken(PEPROCESS Process)
{
  PACCESS_TOKEN result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  void *v4; // rbx

  result = (PACCESS_TOKEN)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !result )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessShared((__int64)Process, (__int64)CurrentThread);
    v4 = (void *)ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
    PspUnlockProcessShared((__int64)Process, (__int64)CurrentThread);
    return v4;
  }
  return result;
}

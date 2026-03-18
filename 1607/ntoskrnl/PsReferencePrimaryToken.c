/*
 * XREFs of PsReferencePrimaryToken @ 0x140418C20
 * Callers:
 *     SepReferenceTokenByHandle @ 0x14000E870 (SepReferenceTokenByHandle.c)
 *     RtlpQueryLowBoxId @ 0x14000F2C8 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400A4B88 (SepReferenceTokenUsingPseudoHandle.c)
 *     IopIsProcessAppContainer @ 0x1400B2774 (IopIsProcessAppContainer.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401B4EE0 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpGetVirtualizationID @ 0x1403E1B4C (CmpGetVirtualizationID.c)
 *     PfSnCheckModernApp @ 0x1403E7318 (PfSnCheckModernApp.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1403FFB14 (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpCheckConnectionSecurity @ 0x1404007A0 (AlpcpCheckConnectionSecurity.c)
 *     SepCreateClientSecurityEx @ 0x140412280 (SepCreateClientSecurityEx.c)
 *     NtOpenThreadTokenEx @ 0x140413580 (NtOpenThreadTokenEx.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     MmCreateSection @ 0x14042CC10 (MmCreateSection.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     PspDisablePrimaryTokenExchange @ 0x140459688 (PspDisablePrimaryTokenExchange.c)
 *     PspReferenceTokenForNewProcess @ 0x14045CF84 (PspReferenceTokenForNewProcess.c)
 *     EtwpBuildProcessEvent @ 0x14045D860 (EtwpBuildProcessEvent.c)
 *     MmCreateSectionEx @ 0x140471464 (MmCreateSectionEx.c)
 *     MmCreateCacheManagerSection @ 0x140471580 (MmCreateCacheManagerSection.c)
 *     PsQueryProcessAttributes @ 0x140471DC0 (PsQueryProcessAttributes.c)
 *     PspInitializeProcessSecurity @ 0x1404722F8 (PspInitializeProcessSecurity.c)
 *     NtImpersonateAnonymousToken @ 0x140475D5C (NtImpersonateAnonymousToken.c)
 *     SeIsTokenAssignableToProcess @ 0x140476504 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x14047666C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1404766F4 (SepIsSiblingTokenByPointer.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140476FE8 (AlpcpPortQueryConnectedSidInfo.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     EtwTraceAppStateChange @ 0x1404A3048 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404B1BB0 (EtwQueryProcessTelemetryInfo.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1404CAA3C (ObSetCurrentProcessDeviceMap.c)
 *     PspSetQuotaLimits @ 0x1404DF2C4 (PspSetQuotaLimits.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404E26A8 (ExpWnfQueryCurrentUserSID.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     EtwpPsProvTraceProcess @ 0x14054B508 (EtwpPsProvTraceProcess.c)
 *     SeAuditProcessCreation @ 0x14056EDCC (SeAuditProcessCreation.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1405756A4 (EtwpAcquireTokenAccessInformation.c)
 *     PsCreateMinimalProcess @ 0x14057E30C (PsCreateMinimalProcess.c)
 *     CmpBuildAdminInformation @ 0x14060049C (CmpBuildAdminInformation.c)
 *     PspGetRedirectionTrustPolicy @ 0x14067D22C (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x14067D288 (PspSetRedirectionTrustPolicy.c)
 *     SeAuditProcessExit @ 0x14068E394 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14069F938 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1406A7D94 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1406A8B50 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14000F760 (ObFastReferenceObject.c)
 *     PspUnlockProcessShared @ 0x1400C9C44 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C9C88 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400D1534 (ObFastReferenceObjectLocked.c)
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

/*
 * XREFs of PsReferencePrimaryToken @ 0x140412C90
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140001854 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     RtlpQueryLowBoxId @ 0x140038774 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenByHandle @ 0x14008A010 (SepReferenceTokenByHandle.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400E6284 (SepReferenceTokenUsingPseudoHandle.c)
 *     IopIsProcessAppContainer @ 0x1400EFD88 (IopIsProcessAppContainer.c)
 *     CmpGetVirtualizationID @ 0x1403BD028 (CmpGetVirtualizationID.c)
 *     NtImpersonateAnonymousToken @ 0x1403BE658 (NtImpersonateAnonymousToken.c)
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1403C2698 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x1403C3438 (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1403C34C0 (SepIsSiblingTokenByPointer.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1403E5EDC (ExpWnfQueryCurrentUserSID.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     SepCreateClientSecurityEx @ 0x14042C5D0 (SepCreateClientSecurityEx.c)
 *     PspDisablePrimaryTokenExchange @ 0x140445F6C (PspDisablePrimaryTokenExchange.c)
 *     PspReferenceTokenForNewProcess @ 0x140448388 (PspReferenceTokenForNewProcess.c)
 *     EtwpBuildProcessEvent @ 0x140449F40 (EtwpBuildProcessEvent.c)
 *     EtwpPsProvTraceProcess @ 0x14044A4A8 (EtwpPsProvTraceProcess.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     PspSetQuotaLimits @ 0x1404524F0 (PspSetQuotaLimits.c)
 *     AlpcpCheckConnectionSecurity @ 0x14046ACE4 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x14046DFC4 (PsQueryProcessAttributes.c)
 *     NtOpenThreadTokenEx @ 0x1404772C0 (NtOpenThreadTokenEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404795EC (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14048C178 (AlpcpPortQueryConnectedSidInfo.c)
 *     CmpBuildAdminInformation @ 0x140497598 (CmpBuildAdminInformation.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404A32FC (EtwQueryProcessTelemetryInfo.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1404A7A38 (ObSetCurrentProcessDeviceMap.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1404CF5BC (EtwpAcquireTokenAccessInformation.c)
 *     PfSnCheckModernApp @ 0x1404D71B4 (PfSnCheckModernApp.c)
 *     SeAuditProcessCreation @ 0x14053D024 (SeAuditProcessCreation.c)
 *     PspCreateMinimalProcess @ 0x1406431F4 (PspCreateMinimalProcess.c)
 *     SeAuditProcessExit @ 0x14064ED10 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14065FC3C (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140666328 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x140666C0C (EtwpApplyPackageIdFilter.c)
 *     VerifierPsReferencePrimaryToken @ 0x1406C0C24 (VerifierPsReferencePrimaryToken.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
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

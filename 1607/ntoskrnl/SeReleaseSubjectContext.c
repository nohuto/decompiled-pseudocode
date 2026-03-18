/*
 * XREFs of SeReleaseSubjectContext @ 0x14041F9B0
 * Callers:
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400761AC (SeReportSecurityEventWithSubCategory.c)
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     RtlCheckTokenMembershipEx @ 0x1400852B0 (RtlCheckTokenMembershipEx.c)
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     FsRtlCancelNotify @ 0x1400A20F4 (FsRtlCancelNotify.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14010FFEC (ExCpuSetResourceManagerAccessCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401B4690 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     IoCheckRedirectionTrustLevel @ 0x1401CA1D0 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x1401CA2FC (IoComputeRedirectionTrustLevel.c)
 *     RtlCheckTokenCapability @ 0x14021060C (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1402246E0 (WdipAccessCheck.c)
 *     NtDeleteObjectAuditAlarm @ 0x1403E30B4 (NtDeleteObjectAuditAlarm.c)
 *     AlpcpCheckConnectionSecurity @ 0x1404007A0 (AlpcpCheckConnectionSecurity.c)
 *     SeDeleteAccessState @ 0x140405E08 (SeDeleteAccessState.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404070A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     EtwpAccessCheck @ 0x14040EFCC (EtwpAccessCheck.c)
 *     NtDuplicateToken @ 0x1404126D0 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x140412A10 (RtlIsSandboxedToken.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     SepAdtAuditThisEventWithContext @ 0x140414D50 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140414DC0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     ObInsertObjectEx @ 0x14041EF00 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x14041F410 (PsOpenProcess.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     SepAdtTokenRightAdjusted @ 0x140460450 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140460524 (SeAuditingWithTokenForSubcategory.c)
 *     ExpWnfCheckCallerAccess @ 0x140462F14 (ExpWnfCheckCallerAccess.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     NtImpersonateAnonymousToken @ 0x140475D5C (NtImpersonateAnonymousToken.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140477960 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140478794 (ObpCaptureBoundaryDescriptor.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14047ADB4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     SepCheckCreateLowBox @ 0x14047C9E0 (SepCheckCreateLowBox.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14048A41C (PiUEventFreeClientRegistrationContext.c)
 *     PiDqQueryRelease @ 0x14048C588 (PiDqQueryRelease.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14048ECA4 (EtwpCheckProviderLoggingAccess.c)
 *     CmpFlushNotify @ 0x14049A0FC (CmpFlushNotify.c)
 *     RtlpSetSecurityObject @ 0x1404A56A0 (RtlpSetSecurityObject.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404B646C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B66DC (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1404BEA58 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1404BEDB8 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404BEE44 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     NtDeleteWnfStateName @ 0x1404C2274 (NtDeleteWnfStateName.c)
 *     NtCloseObjectAuditAlarm @ 0x1404D3454 (NtCloseObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x1404DD06C (PiCMGetDeviceIdList.c)
 *     PspSetQuotaLimits @ 0x1404DF2C4 (PspSetQuotaLimits.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404E3BCC (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x1404EA7B4 (CmpCheckSecurityCellAccess.c)
 *     ExpCheckIRTimerAccess @ 0x1404EE310 (ExpCheckIRTimerAccess.c)
 *     ExIsRestrictedCaller @ 0x1404F163C (ExIsRestrictedCaller.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x1404F6E90 (PiCMValidateDeviceInstance.c)
 *     PiAuVerifyAccessToObject @ 0x1404F7F30 (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlObjectEventRelease @ 0x140501E38 (PiPnpRtlObjectEventRelease.c)
 *     PopUserIsAdmin @ 0x14051D2C4 (PopUserIsAdmin.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140520858 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140520EA8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     IoGetDeviceInterfaceAlias @ 0x140528B50 (IoGetDeviceInterfaceAlias.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140542D4C (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x14054757C (SeCheckPrivilegedObject.c)
 *     SeAuditBootConfiguration @ 0x14056E8D0 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x14056EDCC (SeAuditProcessCreation.c)
 *     NtSetUuidSeed @ 0x140577398 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x14057CAB8 (NtDeleteWnfStateData.c)
 *     SepAuditAssignPrimaryToken @ 0x140580038 (SepAuditAssignPrimaryToken.c)
 *     CmpExamineSaclForAuditEvent @ 0x1406025C0 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602880 (CmpReportAuditVirtualizationEvent.c)
 *     FsRtlNotifyCleanupAll @ 0x14061FCE8 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x14062D7D8 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140630D78 (PiAuCheckTokenMembership.c)
 *     PiAuDoesClientHavePrivilege @ 0x140630F04 (PiAuDoesClientHavePrivilege.c)
 *     PiDqOpenUserObjectRegKey @ 0x140631D88 (PiDqOpenUserObjectRegKey.c)
 *     PspIumVerifyParentSd @ 0x1406822E8 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D508 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14068DAD4 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14068DC98 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14068DE30 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x14068DFE8 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x14068E50C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14068E6B4 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14068E8E8 (SeOperationAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x14069134C (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1406913C0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x140694CA8 (SepCheckForAllAppPackagesAceRemoval.c)
 *     VfUtilIsLocalSystem @ 0x140702DE8 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F690 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 */

void __stdcall SeReleaseSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  PACCESS_TOKEN ClientToken; // rcx
  _QWORD *PrimaryToken; // rax

  if ( SeTokenLeakTracking )
  {
    PrimaryToken = SubjectContext->PrimaryToken;
    if ( PrimaryToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)SubjectContext->PrimaryToken);
  ClientToken = SubjectContext->ClientToken;
  SubjectContext->PrimaryToken = 0LL;
  if ( ClientToken )
    ObfDereferenceObject(ClientToken);
  SubjectContext->ClientToken = 0LL;
}

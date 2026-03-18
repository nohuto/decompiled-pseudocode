/*
 * XREFs of SeCaptureSubjectContext @ 0x140433EB0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x140003E78 (RtlCheckTokenMembershipEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x14001B500 (SeReportSecurityEventWithSubCategory.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401A9E44 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     WdipAccessCheck @ 0x14020CB70 (WdipAccessCheck.c)
 *     NtDeleteObjectAuditAlarm @ 0x1403B584C (NtDeleteObjectAuditAlarm.c)
 *     SepCheckCreateLowBox @ 0x1403BDBE4 (SepCheckCreateLowBox.c)
 *     NtImpersonateAnonymousToken @ 0x1403BE658 (NtImpersonateAnonymousToken.c)
 *     PiUEventHandleRegistration @ 0x1403BFB78 (PiUEventHandleRegistration.c)
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 *     NtDeleteWnfStateName @ 0x1403E19C4 (NtDeleteWnfStateName.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1403E3928 (SeAuditingWithTokenForSubcategory.c)
 *     ExpWnfCheckCallerAccess @ 0x1403E5C68 (ExpWnfCheckCallerAccess.c)
 *     EtwpAccessCheck @ 0x140435590 (EtwpAccessCheck.c)
 *     PiAuVerifyAccessToObject @ 0x140442700 (PiAuVerifyAccessToObject.c)
 *     PspSinglePrivCheck @ 0x140452944 (PspSinglePrivCheck.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140452CA8 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
 *     PiCMValidateDeviceInstance @ 0x14045BB10 (PiCMValidateDeviceInstance.c)
 *     PiDqQueryCreate @ 0x14045F138 (PiDqQueryCreate.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     RtlpSetSecurityObject @ 0x14046B8C0 (RtlpSetSecurityObject.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     NtDuplicateToken @ 0x140478460 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x140478894 (RtlIsSandboxedToken.c)
 *     SepAdtAuditThisEventWithContext @ 0x140478BB0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140478C20 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140495460 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     CmpNotifyChangeKey @ 0x14049A500 (CmpNotifyChangeKey.c)
 *     NtCloseObjectAuditAlarm @ 0x1404AC788 (NtCloseObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x1404B9164 (PiCMGetDeviceIdList.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B9924 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404BB38C (NtPrivilegedServiceAuditAlarm.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404BF3D0 (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x1404BFEE8 (CmpCheckSecurityCellAccess.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1404C0094 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PopUserIsAdmin @ 0x1404C6840 (PopUserIsAdmin.c)
 *     ExIsRestrictedCaller @ 0x1404C69D4 (ExIsRestrictedCaller.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1404E377C (IoGetDeviceInterfaceAlias.c)
 *     PiDqOpenUserObjectRegKey @ 0x1404F8E2C (PiDqOpenUserObjectRegKey.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140509D38 (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x14050C338 (SeCheckPrivilegedObject.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x14051AE6C (SepCheckForAllAppPackagesAceRemoval.c)
 *     SeAuditBootConfiguration @ 0x14053CB28 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x14053D024 (SeAuditProcessCreation.c)
 *     NtSetUuidSeed @ 0x140543400 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x140548688 (NtDeleteWnfStateData.c)
 *     SepAuditAssignPrimaryToken @ 0x14054A524 (SepAuditAssignPrimaryToken.c)
 *     CmpExamineSaclForAuditEvent @ 0x1405E321C (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1405E3324 (CmpReportAuditVirtualizationEvent.c)
 *     PnpGetCallerSessionId @ 0x140603440 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140606960 (PiAuCheckTokenMembership.c)
 *     PiAuDoesClientHavePrivilege @ 0x140606AEC (PiAuDoesClientHavePrivilege.c)
 *     PspIumVerifyParentSd @ 0x14064385C (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14064DE24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14064E43C (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14064E610 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14064E7A8 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x14064E960 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x14064EE84 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14064F034 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14064F278 (SeOperationAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x1406511B4 (SepAdtTokenRightAdjusted.c)
 *     SeCloseObjectAuditAlarm @ 0x14065206C (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1406520E0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     WmipInitializeSecurity @ 0x140752D78 (WmipInitializeSecurity.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     ObFastReferenceObject @ 0x140043350 (ObFastReferenceObject.c)
 *     PsReferenceImpersonationTokenEx @ 0x140433F70 (PsReferenceImpersonationTokenEx.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rbp
  void *v4; // rax
  struct _KTHREAD *v5; // rsi
  void *v6; // rdi
  char v7; // [rsp+50h] [rbp+8h] BYREF
  char v8; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  SubjectContext->ProcessAuditId = *(PVOID *)(Process + 744);
  if ( CurrentThread )
    SubjectContext->ClientToken = (PACCESS_TOKEN)PsReferenceImpersonationTokenEx(
                                                   (_DWORD)CurrentThread,
                                                   0,
                                                   (unsigned int)&v8,
                                                   (unsigned int)&v7,
                                                   (__int64)&SubjectContext->ImpersonationLevel,
                                                   0LL);
  else
    SubjectContext->ClientToken = 0LL;
  v4 = (void *)ObFastReferenceObject((signed __int64 *)(Process + 856));
  if ( v4 )
  {
    SubjectContext->PrimaryToken = v4;
  }
  else
  {
    v5 = KeGetCurrentThread();
    PspLockProcessShared(Process, (__int64)v5);
    v6 = (void *)ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
    PspUnlockProcessShared(Process, (__int64)v5);
    SubjectContext->PrimaryToken = v6;
  }
}

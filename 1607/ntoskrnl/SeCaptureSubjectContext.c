/*
 * XREFs of SeCaptureSubjectContext @ 0x140412030
 * Callers:
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400761AC (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenMembershipEx @ 0x1400852B0 (RtlCheckTokenMembershipEx.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401B4690 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     IoCheckRedirectionTrustLevel @ 0x1401CA1D0 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x1401CA2FC (IoComputeRedirectionTrustLevel.c)
 *     RtlCheckTokenCapability @ 0x14021060C (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1402246E0 (WdipAccessCheck.c)
 *     NtDeleteObjectAuditAlarm @ 0x1403E30B4 (NtDeleteObjectAuditAlarm.c)
 *     CmpNotifyChangeKey @ 0x140401234 (CmpNotifyChangeKey.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404070A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     EtwpAccessCheck @ 0x14040EFCC (EtwpAccessCheck.c)
 *     NtDuplicateToken @ 0x1404126D0 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x140412A10 (RtlIsSandboxedToken.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     SepAdtAuditThisEventWithContext @ 0x140414D50 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140414DC0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     SepAdtTokenRightAdjusted @ 0x140460450 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140460524 (SeAuditingWithTokenForSubcategory.c)
 *     ExpWnfCheckCallerAccess @ 0x140462F14 (ExpWnfCheckCallerAccess.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     NtImpersonateAnonymousToken @ 0x140475D5C (NtImpersonateAnonymousToken.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14047ADB4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     SepCheckCreateLowBox @ 0x14047C9E0 (SepCheckCreateLowBox.c)
 *     PiDqQueryCreate @ 0x14048C5FC (PiDqQueryCreate.c)
 *     PiUEventHandleRegistration @ 0x14048D21C (PiUEventHandleRegistration.c)
 *     RtlpSetSecurityObject @ 0x1404A56A0 (RtlpSetSecurityObject.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404B646C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B66DC (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     NtDeleteWnfStateName @ 0x1404C2274 (NtDeleteWnfStateName.c)
 *     NtCloseObjectAuditAlarm @ 0x1404D3454 (NtCloseObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x1404DD06C (PiCMGetDeviceIdList.c)
 *     PspSinglePrivCheck @ 0x1404DF6F0 (PspSinglePrivCheck.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404E3BCC (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x1404EA7B4 (CmpCheckSecurityCellAccess.c)
 *     ExIsRestrictedCaller @ 0x1404F163C (ExIsRestrictedCaller.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x1404F6E90 (PiCMValidateDeviceInstance.c)
 *     PiAuVerifyAccessToObject @ 0x1404F7F30 (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
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
 *     WmipInitializeSecurity @ 0x14079C7B4 (WmipInitializeSecurity.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14000F760 (ObFastReferenceObject.c)
 *     PspUnlockProcessShared @ 0x1400C9C44 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C9C88 (PspLockProcessShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400D1534 (ObFastReferenceObjectLocked.c)
 *     PsReferenceImpersonationTokenEx @ 0x140412120 (PsReferenceImpersonationTokenEx.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int64 Process; // rbp
  _QWORD *v4; // rsi
  struct _KTHREAD *v5; // rdi
  char v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  SubjectContext->ProcessAuditId = *(PVOID *)(Process + 744);
  if ( CurrentThread )
    SubjectContext->ClientToken = (PACCESS_TOKEN)PsReferenceImpersonationTokenEx(
                                                   (_DWORD)CurrentThread,
                                                   0,
                                                   (unsigned int)&v7,
                                                   (unsigned int)&v6,
                                                   (__int64)&SubjectContext->ImpersonationLevel,
                                                   0LL);
  else
    SubjectContext->ClientToken = 0LL;
  v4 = (_QWORD *)ObFastReferenceObject((signed __int64 *)(Process + 856));
  if ( !v4 )
  {
    v5 = KeGetCurrentThread();
    PspLockProcessShared(Process, (__int64)v5);
    v4 = (_QWORD *)ObFastReferenceObjectLocked((_QWORD *)(Process + 856));
    PspUnlockProcessShared(Process, (__int64)v5);
  }
  SubjectContext->PrimaryToken = v4;
  if ( SeTokenLeakTracking )
  {
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}

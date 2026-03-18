/*
 * XREFs of SeCaptureSubjectContext @ 0x140485EB0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400083BC (RtlCheckTokenMembershipEx.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SeReportSecurityEventWithSubCategory @ 0x140111680 (SeReportSecurityEventWithSubCategory.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401DFAC8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     IoCheckRedirectionTrustLevel @ 0x1401F79EC (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x1401F7B18 (IoComputeRedirectionTrustLevel.c)
 *     RtlCheckTokenCapability @ 0x1402450DC (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14025BE34 (WdipAccessCheck.c)
 *     NtDeleteObjectAuditAlarm @ 0x14040A600 (NtDeleteObjectAuditAlarm.c)
 *     SepCheckCreateLowBox @ 0x14041063C (SepCheckCreateLowBox.c)
 *     NtImpersonateAnonymousToken @ 0x140410C10 (NtImpersonateAnonymousToken.c)
 *     RtlIsSandboxedToken @ 0x1404115C4 (RtlIsSandboxedToken.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     PiDqOpenUserObjectRegKey @ 0x140415D2C (PiDqOpenUserObjectRegKey.c)
 *     PiUEventHandleRegistration @ 0x14041610C (PiUEventHandleRegistration.c)
 *     CmpNotifyChangeKey @ 0x14042C358 (CmpNotifyChangeKey.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140432E10 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140432F30 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140432FA0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     NtDuplicateToken @ 0x140436B68 (NtDuplicateToken.c)
 *     PiAuVerifyAccessToObject @ 0x14043FE74 (PiAuVerifyAccessToObject.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SepAdtUserRightAdjusted @ 0x14046E0F4 (SepAdtUserRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14046E1A4 (SeAuditingWithTokenForSubcategory.c)
 *     RtlpSetSecurityObject @ 0x1404CD280 (RtlpSetSecurityObject.c)
 *     EtwpAccessCheck @ 0x1404CDBE0 (EtwpAccessCheck.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1404D4748 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     PiCMValidateDeviceInstance @ 0x1404DBCC4 (PiCMValidateDeviceInstance.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404E9DC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ExpWnfCheckCallerAccess @ 0x140502E84 (ExpWnfCheckCallerAccess.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140524EA0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140525110 (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x14053C610 (NtCloseObjectAuditAlarm.c)
 *     NtDeleteWnfStateName @ 0x14053EEF0 (NtDeleteWnfStateName.c)
 *     PiDqQueryCreate @ 0x1405483F0 (PiDqQueryCreate.c)
 *     PspSinglePrivCheck @ 0x14054FB2C (PspSinglePrivCheck.c)
 *     PiCMGetDeviceIdList @ 0x140550A70 (PiCMGetDeviceIdList.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140554F94 (ExpWnfCheckCrossScopeAccess.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405574D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     CmpCheckSecurityCellAccess @ 0x1405598A8 (CmpCheckSecurityCellAccess.c)
 *     PopUserIsAdmin @ 0x14055D1DC (PopUserIsAdmin.c)
 *     IoGetDeviceInterfaceAlias @ 0x14055E874 (IoGetDeviceInterfaceAlias.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140580598 (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x140583928 (SeCheckPrivilegedObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x14058B044 (PiAuDoesClientHavePrivilege.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x14058D76C (SepCheckForAllAppPackagesAceRemoval.c)
 *     SeAuditBootConfiguration @ 0x1405A1EC8 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1405A23C4 (SeAuditProcessCreation.c)
 *     NtSetUuidSeed @ 0x1405B9554 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x1405BF43C (NtDeleteWnfStateData.c)
 *     SepAuditAssignPrimaryToken @ 0x1405C1B90 (SepAuditAssignPrimaryToken.c)
 *     CmpExamineSaclForAuditEvent @ 0x1406596D8 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406599C0 (CmpReportAuditVirtualizationEvent.c)
 *     PnpGetCallerSessionId @ 0x14067E2AC (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140681708 (PiAuCheckTokenMembership.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406D143C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1406D1A54 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1406D1BEC (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x1406D1DA4 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x1406D20A0 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1406D2250 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1406D2494 (SeOperationAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1406D471C (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1406D4790 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     WmipInitializeSecurity @ 0x1407B9F00 (WmipInitializeSecurity.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x140486000 (PsReferenceImpersonationTokenEx.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 *v4; // rsi
  void *v5; // rax
  __int64 v6; // r9
  struct _KTHREAD *v7; // r15
  unsigned __int64 *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r9
  void *v11; // rdi
  __int16 v12; // ax
  char v13; // [rsp+70h] [rbp+8h] BYREF
  char v14; // [rsp+78h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Blink;
  if ( CurrentThread )
    SubjectContext->ClientToken = (PACCESS_TOKEN)PsReferenceImpersonationTokenEx(
                                                   (_DWORD)CurrentThread,
                                                   0,
                                                   (unsigned int)&v14,
                                                   (unsigned int)&v13,
                                                   (__int64)&SubjectContext->ImpersonationLevel,
                                                   0LL);
  else
    SubjectContext->ClientToken = 0LL;
  v4 = &Process[1].Affinity.Bitmap[5];
  v5 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( v5 )
  {
    SubjectContext->PrimaryToken = v5;
  }
  else
  {
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    v8 = (unsigned __int64 *)&Process[1];
    v9 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, v6);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v8, v9, (ULONG_PTR)v8, v10);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    v11 = (void *)ObFastReferenceObjectLocked(v4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v8);
    KeAbPostRelease((ULONG_PTR)v8);
    v12 = v7->KernelApcDisable + 1;
    v7->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
      && !v7->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    SubjectContext->PrimaryToken = v11;
  }
}

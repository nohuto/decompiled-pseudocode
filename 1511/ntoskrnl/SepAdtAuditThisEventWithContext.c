/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x140478BB0
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x14001B500 (SeReportSecurityEventWithSubCategory.c)
 *     SeAuditingAnyFileEventsWithContextEx @ 0x14009E8C0 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x140200904 (SeAuditingFileEventsWithContextEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     SeObjectReferenceAuditAlarm @ 0x1404709B4 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140478B20 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140479708 (SepAdtAuditObjectAccessWithContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140495460 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1404C0094 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x1404C6570 (SeAuditingHardLinkEventsWithContext.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x14054A420 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SeAuditFipsCryptoSelftests @ 0x14064E43C (SeAuditFipsCryptoSelftests.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14064F5A4 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14064FF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1406515FC (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x14009E930 (SepAuditingEnabledForSubcategory.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140478C20 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x14065187C (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 */

__int64 __fastcall SepAdtAuditThisEventWithContext(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v7; // rbx
  struct _SECURITY_SUBJECT_CONTEXT *v8; // r9
  bool v9; // di
  __int64 v11; // rdx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  PACCESS_TOKEN ClientToken; // r9
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-38h] BYREF
  bool v15; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned int)a1 <= 8 )
  {
    v11 = a2 != 0;
    if ( a3 )
      v11 = (unsigned int)v11 | 0x10;
    return SepAdtAuditThisEventByCategoryWithContext(a1, v11, a4);
  }
  else
  {
    v7 = (unsigned int)(a1 - 100);
    v15 = SepAuditingEnabledForSubcategory(a1, a2, a3);
    v9 = v15;
    if ( SepTokenPolicyCounter[v7] )
    {
      if ( v8 )
      {
        p_SubjectContext = v8;
      }
      else
      {
        p_SubjectContext = &SubjectContext;
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        SeCaptureSubjectContext(&SubjectContext);
      }
      ClientToken = p_SubjectContext->ClientToken;
      if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
      {
        SepAdtIncorporatePerUserPolicy(v7, a2, a3, (_DWORD)ClientToken, (__int64)&v15);
        v9 = v15;
      }
      else
      {
        SepAuditFailed(3221225596LL);
      }
      if ( !a4 )
        SeReleaseSubjectContext(p_SubjectContext);
    }
    return v9;
  }
}

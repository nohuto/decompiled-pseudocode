/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x140432F30
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x140015030 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x140111680 (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x14024F804 (SeAuditingFileEventsWithContextEx.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140434B7C (SepAdtAuditPrivilegeUseWithContext.c)
 *     SeObjectReferenceAuditAlarm @ 0x1404CFF94 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1404D4748 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140526C38 (SepAdtAuditObjectAccessWithContext.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405574D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x14055D0D4 (SeAuditingHardLinkEventsWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1405867E8 (SepAdtOpenObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x1405BCDE4 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406D27C0 (SepAdtCloseObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1406D3CFC (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x1400150A0 (SepAuditingEnabledForSubcategory.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140432FA0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1406D3F7C (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
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

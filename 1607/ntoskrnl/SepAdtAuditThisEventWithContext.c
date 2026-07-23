/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x140413C10
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x14000F050 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x14007622C (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x14021A024 (SeAuditingFileEventsWithContextEx.c)
 *     SeObjectReferenceAuditAlarm @ 0x1404058E0 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140413B78 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140479C84 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1404A2230 (SepAdtAuditObjectAccessWithContext.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x1404D2914 (SeAuditingHardLinkEventsWithContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140503F10 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x14057FEDC (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14068ECE0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x140690968 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x14000F0C0 (SepAuditingEnabledForSubcategory.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140413C80 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140690BE8 (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
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

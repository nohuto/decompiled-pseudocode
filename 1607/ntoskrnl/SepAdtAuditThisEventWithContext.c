/*
 * XREFs of SepAdtAuditThisEventWithContext @ 0x140414D50
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x14000F4D0 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400761AC (SeReportSecurityEventWithSubCategory.c)
 *     SepCommonAccessCheckEx @ 0x140135790 (SepCommonAccessCheckEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x14021A1F8 (SeAuditingFileEventsWithContextEx.c)
 *     SeObjectReferenceAuditAlarm @ 0x140406A20 (SeObjectReferenceAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404070A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140414CB8 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14047ADB4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x1404B7E50 (SepAdtAuditObjectAccessWithContext.c)
 *     SeAuditingHardLinkEventsWithContext @ 0x1404F0820 (SeAuditingHardLinkEventsWithContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140520EA8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeOpenObjectAuditAlarmForNonObObject @ 0x14057FA30 (SeOpenObjectAuditAlarmForNonObObject.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14068EBFC (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F52C (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditingFileOrGlobalEvents @ 0x140690884 (SeAuditingFileOrGlobalEvents.c)
 * Callees:
 *     SepAuditingEnabledForSubcategory @ 0x14000F540 (SepAuditingEnabledForSubcategory.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140414DC0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140690B04 (SepAdtIncorporatePerUserPolicy.c)
 *     SepAuditFailed @ 0x140696078 (SepAuditFailed.c)
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

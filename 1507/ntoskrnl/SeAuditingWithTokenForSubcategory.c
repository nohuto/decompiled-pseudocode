/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x14046E1A4
 * Callers:
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     ObInitProcess @ 0x140467784 (ObInitProcess.c)
 *     PspInsertProcess @ 0x14046A910 (PspInsertProcess.c)
 *     SepAdtUserRightAdjusted @ 0x14046E0F4 (SepAdtUserRightAdjusted.c)
 *     ObCompleteObjectDuplication @ 0x14053E31C (ObCompleteObjectDuplication.c)
 *     SeAssignPrimaryToken @ 0x1405C1B24 (SeAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406D143C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeExchangePrimaryToken @ 0x1406D51C0 (SeExchangePrimaryToken.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x14002D964 (SepAuditingForSubCategory.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x1406D3F7C (SepAdtIncorporatePerUserPolicy.c)
 */

char __fastcall SeAuditingWithTokenForSubcategory(int a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int PrimaryToken; // r9d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  v3 = (unsigned int)(a1 - 100);
  v8 = SepAuditingForSubCategory(a1, 1);
  if ( SepTokenPolicyCounter[v3] )
  {
    if ( a2 )
    {
      PrimaryToken = a2;
    }
    else
    {
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContext(&SubjectContext);
      PrimaryToken = (int)SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        PrimaryToken = (int)SubjectContext.ClientToken;
    }
    LOBYTE(v4) = 1;
    SepAdtIncorporatePerUserPolicy(v3, v4, 0, PrimaryToken, (__int64)&v8);
    if ( !a2 )
      SeReleaseSubjectContext(&SubjectContext);
  }
  return v8;
}

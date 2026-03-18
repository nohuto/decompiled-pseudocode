/*
 * XREFs of SeAuditingWithTokenForSubcategory @ 0x140460524
 * Callers:
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     ObInitProcess @ 0x14045F504 (ObInitProcess.c)
 *     PspInsertProcess @ 0x14045F5C0 (PspInsertProcess.c)
 *     SepAdtTokenRightAdjusted @ 0x140460450 (SepAdtTokenRightAdjusted.c)
 *     PiPnpRtlSetObjectProperty @ 0x140488870 (PiPnpRtlSetObjectProperty.c)
 *     PipSetDevNodeProblem @ 0x1404C5BDC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404C5E0C (PipClearDevNodeProblem.c)
 *     ObCompleteObjectDuplication @ 0x1404CBC54 (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x14050CBB0 (ObDuplicateObject.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     SeAssignPrimaryToken @ 0x14057FFCC (SeAssignPrimaryToken.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14062F6CC (PiPnpRtlSetDeviceRegProperty.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D508 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeExchangePrimaryToken @ 0x140692774 (SeExchangePrimaryToken.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x140076404 (SepAuditingForSubCategory.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     SepAdtIncorporatePerUserPolicy @ 0x140690B04 (SepAdtIncorporatePerUserPolicy.c)
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

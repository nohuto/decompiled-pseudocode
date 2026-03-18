/*
 * XREFs of HUBMISC_VerifyCallerIsAdmin @ 0x1C006E360
 * Callers:
 *     HUBFDO_IoctlCyclePort @ 0x1C0069724 (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlResetHub @ 0x1C0069BF0 (HUBFDO_IoctlResetHub.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBMISC_VerifyCallerIsAdmin(__int64 a1)
{
  void *PrimaryToken; // rbx
  BOOLEAN IsAdmin; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  PrimaryToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = SubjectContext.ClientToken;
  if ( !PrimaryToken )
    WPP_RECORDER_SF_(a1, 2u, 3u, 0x5Fu, (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
  IsAdmin = SeTokenIsAdmin(PrimaryToken);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return IsAdmin == 0 ? 0xC0000001 : 0;
}

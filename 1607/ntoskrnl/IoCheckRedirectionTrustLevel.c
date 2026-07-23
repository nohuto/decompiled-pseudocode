/*
 * XREFs of IoCheckRedirectionTrustLevel @ 0x1401CA070
 * Callers:
 *     <none>
 * Callees:
 *     SeTokenGetRedirectionTrustPolicy @ 0x14021A474 (SeTokenGetRedirectionTrustPolicy.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A089C (EtwTimLogRedirectionTrustPolicy.c)
 */

__int64 __fastcall IoCheckRedirectionTrustLevel(
        int a1,
        char a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        int a4,
        __int64 a5)
{
  int v5; // r15d
  char v7; // si
  char v8; // r14
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rbx
  bool v11; // cl
  bool v12; // al
  char v14; // [rsp+30h] [rbp-30h] BYREF
  char v15; // [rsp+31h] [rbp-2Fh] BYREF
  _BYTE v16[6]; // [rsp+32h] [rbp-2Eh] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-28h] BYREF
  bool v18; // [rsp+98h] [rbp+38h] BYREF

  v5 = 1;
  v14 = 1;
  v7 = 1;
  v15 = 1;
  v8 = 1;
  if ( !a2 || (a4 & 0xFFFFFFFD) == 0 )
    return 0LL;
  if ( a3 )
  {
    p_SubjectContext = a3;
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    p_SubjectContext = &SubjectContext;
  }
  SeTokenGetRedirectionTrustPolicy(p_SubjectContext->PrimaryToken, &v18, v16);
  if ( p_SubjectContext->ClientToken && p_SubjectContext->ImpersonationLevel >= SecurityImpersonation )
  {
    SeTokenGetRedirectionTrustPolicy(p_SubjectContext->ClientToken, &v14, &v15);
    v7 = v14;
    v5 = 2;
    v8 = v15;
  }
  if ( !a3 )
    SeReleaseSubjectContext(&SubjectContext);
  v11 = v18 && v7;
  v18 = v11;
  v12 = v16[0] && v8;
  if ( (v11 || v12)
    && (EtwTimLogRedirectionTrustPolicy(v11 + 1, KeGetCurrentThread()->ApcState.Process, a1, a5, v5 == 2), v18) )
  {
    return 3221226687LL;
  }
  else
  {
    return 0LL;
  }
}

/*
 * XREFs of SeCreateAccessStateEx @ 0x14053E638
 * Callers:
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PspInsertProcess @ 0x14046A910 (PspInsertProcess.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14004E2C0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1404CA2C0 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessStateEx(
        struct _KTHREAD *a1,
        struct _KPROCESS *a2,
        _QWORD *a3,
        _QWORD *a4,
        ACCESS_MASK a5,
        GENERIC_MAPPING *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContextEx(a1, a2, &SubjectContext);
  return SepCreateAccessStateFromSubjectContext(&SubjectContext, a3, a4, a5, a6);
}

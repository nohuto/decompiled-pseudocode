/*
 * XREFs of SeCreateAccessStateEx @ 0x1404B6E3C
 * Callers:
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1401B4C94 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspInsertProcess @ 0x14045E490 (PspInsertProcess.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14000F3E0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
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

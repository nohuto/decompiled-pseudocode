/*
 * XREFs of SeCreateAccessState @ 0x1404CDC7C
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     SeSubProcessToken @ 0x14046A560 (SeSubProcessToken.c)
 *     WmipCreateGuidObject @ 0x1404AA098 (WmipCreateGuidObject.c)
 *     ObReferenceObjectByName @ 0x1404CF06C (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 *     NtGetNextThread @ 0x140554914 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x14056803C (NtGetNextProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406583CC (CmpDoAccessCheckOnKCB.c)
 *     CMFCheckAccess @ 0x1406FA4F4 (CMFCheckAccess.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14004E2C0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1404CA2C0 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessState(_QWORD *a1, _QWORD *a2, ACCESS_MASK a3, GENERIC_MAPPING *a4)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &v9);
  return SepCreateAccessStateFromSubjectContext(&v9, a1, a2, a3, a4);
}

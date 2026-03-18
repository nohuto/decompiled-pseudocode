/*
 * XREFs of SeDeleteAccessState @ 0x1404CDBC4
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     ObDuplicateObject @ 0x1404243A0 (ObDuplicateObject.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     SeSubProcessToken @ 0x14046A560 (SeSubProcessToken.c)
 *     PspInsertProcess @ 0x14046A910 (PspInsertProcess.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     WmipCreateGuidObject @ 0x1404AA098 (WmipCreateGuidObject.c)
 *     ObReferenceObjectByName @ 0x1404CF06C (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     NtGetNextThread @ 0x140554914 (NtGetNextThread.c)
 *     PspCreateProcess @ 0x14055AE78 (PspCreateProcess.c)
 *     NtGetNextProcess @ 0x14056803C (NtGetNextProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406583CC (CmpDoAccessCheckOnKCB.c)
 *     PspCreateMinimalProcess @ 0x1406C58D4 (PspCreateMinimalProcess.c)
 *     CMFCheckAccess @ 0x1406FA4F4 (CMFCheckAccess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14004E240 (SepDeleteAccessState.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}

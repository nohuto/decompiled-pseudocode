/*
 * XREFs of SeDeleteAccessState @ 0x140405E08
 * Callers:
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1401B4DB0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PsOpenThread @ 0x140405210 (PsOpenThread.c)
 *     ObReferenceObjectByName @ 0x140405BE0 (ObReferenceObjectByName.c)
 *     ObInsertObjectEx @ 0x14041EF00 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x14041F410 (PsOpenProcess.c)
 *     NtCreateUserProcess @ 0x14045AB40 (NtCreateUserProcess.c)
 *     PspInsertProcess @ 0x14045F5C0 (PspInsertProcess.c)
 *     SeSubProcessToken @ 0x14046EA48 (SeSubProcessToken.c)
 *     WmipCreateGuidObject @ 0x140473F48 (WmipCreateGuidObject.c)
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 *     NtGetNextThread @ 0x1404D4F50 (NtGetNextThread.c)
 *     PspCreateProcess @ 0x1404EB990 (PspCreateProcess.c)
 *     ObDuplicateObject @ 0x14050CBB0 (ObDuplicateObject.c)
 *     PspInsertThread @ 0x140516750 (PspInsertThread.c)
 *     NtGetNextProcess @ 0x14053F498 (NtGetNextProcess.c)
 *     PsCreateMinimalProcess @ 0x14057E30C (PsCreateMinimalProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x140600AC8 (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x140600BE8 (CmpDoBuildVirtualStack.c)
 *     CMFCheckAccess @ 0x1406B8680 (CMFCheckAccess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14000F6E0 (SepDeleteAccessState.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}

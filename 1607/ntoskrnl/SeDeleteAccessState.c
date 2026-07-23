/*
 * XREFs of SeDeleteAccessState @ 0x140404CC8
 * Callers:
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1401B4C94 (CmpCheckKeySecurityDescriptorAccess.c)
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     PsOpenThread @ 0x1404040D0 (PsOpenThread.c)
 *     ObReferenceObjectByName @ 0x140404AA0 (ObReferenceObjectByName.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     PsOpenProcess @ 0x14041E2D0 (PsOpenProcess.c)
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 *     PspInsertProcess @ 0x14045E490 (PspInsertProcess.c)
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 *     WmipCreateGuidObject @ 0x140472E18 (WmipCreateGuidObject.c)
 *     NtGetNextThread @ 0x1404B8554 (NtGetNextThread.c)
 *     PspCreateProcess @ 0x1404CDA18 (PspCreateProcess.c)
 *     ObDuplicateObject @ 0x1404EFB40 (ObDuplicateObject.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 *     NtGetNextProcess @ 0x14053F9D8 (NtGetNextProcess.c)
 *     PsCreateMinimalProcess @ 0x14057E7B8 (PsCreateMinimalProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x140600B7C (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 *     CMFCheckAccess @ 0x1406B87B8 (CMFCheckAccess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14000F260 (SepDeleteAccessState.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}

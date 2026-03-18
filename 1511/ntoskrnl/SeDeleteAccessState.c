/*
 * XREFs of SeDeleteAccessState @ 0x140435480
 * Callers:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 *     PspInsertProcess @ 0x1403E3600 (PspInsertProcess.c)
 *     PspInsertThread @ 0x1403EF330 (PspInsertThread.c)
 *     ObDuplicateObject @ 0x1404246E0 (ObDuplicateObject.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 *     SeSubProcessToken @ 0x14044C430 (SeSubProcessToken.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     PsOpenThread @ 0x140470C60 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 *     NtGetNextThread @ 0x1404BE9DC (NtGetNextThread.c)
 *     PspCreateProcess @ 0x1404C3BAC (PspCreateProcess.c)
 *     WmipCreateGuidObject @ 0x1404C83F0 (WmipCreateGuidObject.c)
 *     NtGetNextProcess @ 0x1404F3D3C (NtGetNextProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1405E21C8 (CmpDoAccessCheckOnKCB.c)
 *     PspCreateMinimalProcess @ 0x1406431F4 (PspCreateMinimalProcess.c)
 *     CMFCheckAccess @ 0x140675D24 (CMFCheckAccess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x1400432D0 (SepDeleteAccessState.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}

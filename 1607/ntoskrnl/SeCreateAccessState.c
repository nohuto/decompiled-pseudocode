/*
 * XREFs of SeCreateAccessState @ 0x140405270
 * Callers:
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     ObReferenceObjectByNameEx @ 0x1403E4434 (ObReferenceObjectByNameEx.c)
 *     PsOpenThread @ 0x1404040D0 (PsOpenThread.c)
 *     ObReferenceObjectByName @ 0x140404AA0 (ObReferenceObjectByName.c)
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 *     WmipCreateGuidObject @ 0x140472E18 (WmipCreateGuidObject.c)
 *     NtGetNextThread @ 0x1404B8554 (NtGetNextThread.c)
 *     ObDuplicateObject @ 0x1404EFB40 (ObDuplicateObject.c)
 *     NtGetNextProcess @ 0x14053F9D8 (NtGetNextProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x140600B7C (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x140600C9C (CmpDoBuildVirtualStack.c)
 *     CMFCheckAccess @ 0x1406B87B8 (CMFCheckAccess.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14000F3E0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessState(_QWORD *a1, _QWORD *a2, ACCESS_MASK a3, GENERIC_MAPPING *a4)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &v9);
  return SepCreateAccessStateFromSubjectContext(&v9, a1, a2, a3, a4);
}

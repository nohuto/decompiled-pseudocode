/*
 * XREFs of SeCreateAccessState @ 0x1404063B0
 * Callers:
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     PsOpenThread @ 0x140405210 (PsOpenThread.c)
 *     ObReferenceObjectByName @ 0x140405BE0 (ObReferenceObjectByName.c)
 *     SeSubProcessToken @ 0x14046EA48 (SeSubProcessToken.c)
 *     WmipCreateGuidObject @ 0x140473F48 (WmipCreateGuidObject.c)
 *     ObReferenceObjectByNameEx @ 0x140499E04 (ObReferenceObjectByNameEx.c)
 *     NtGetNextThread @ 0x1404D4F50 (NtGetNextThread.c)
 *     ObDuplicateObject @ 0x14050CBB0 (ObDuplicateObject.c)
 *     NtGetNextProcess @ 0x14053F498 (NtGetNextProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x140600AC8 (CmpDoAccessCheckOnKCB.c)
 *     CmpDoBuildVirtualStack @ 0x140600BE8 (CmpDoBuildVirtualStack.c)
 *     CMFCheckAccess @ 0x1406B8680 (CMFCheckAccess.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14000F860 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14041F830 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessState(_QWORD *a1, _QWORD *a2, ACCESS_MASK a3, GENERIC_MAPPING *a4)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &v9);
  return SepCreateAccessStateFromSubjectContext(&v9, a1, a2, a3, a4);
}

/*
 * XREFs of SeCreateAccessState @ 0x1404704A0
 * Callers:
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 *     ObDuplicateObject @ 0x1404246E0 (ObDuplicateObject.c)
 *     SeSubProcessToken @ 0x14044C430 (SeSubProcessToken.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     PsOpenThread @ 0x140470C60 (PsOpenThread.c)
 *     ObReferenceObjectByNameEx @ 0x14049AE04 (ObReferenceObjectByNameEx.c)
 *     NtGetNextThread @ 0x1404BE9DC (NtGetNextThread.c)
 *     WmipCreateGuidObject @ 0x1404C83F0 (WmipCreateGuidObject.c)
 *     NtGetNextProcess @ 0x1404F3D3C (NtGetNextProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1405E21C8 (CmpDoAccessCheckOnKCB.c)
 *     CMFCheckAccess @ 0x140675D24 (CMFCheckAccess.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x140043450 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140470510 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessState(_QWORD *a1, _QWORD *a2, ACCESS_MASK a3, GENERIC_MAPPING *a4)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &v9);
  return SepCreateAccessStateFromSubjectContext(&v9, a1, a2, a3, a4);
}

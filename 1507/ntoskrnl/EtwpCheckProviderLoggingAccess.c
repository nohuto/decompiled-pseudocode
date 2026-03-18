/*
 * XREFs of EtwpCheckProviderLoggingAccess @ 0x1404D525C
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x1404D5198 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     SeCaptureSubjectContextEx @ 0x1404CA2C0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     EtwpCheckGuidAccess @ 0x1404D4700 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckProviderLoggingAccess(__int64 a1, unsigned int *a2, char a3)
{
  unsigned int v5; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 || (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 0LL;
  SeCaptureSubjectContextEx(0LL, *(PEPROCESS *)(a1 + 80), &SubjectContext);
  v5 = EtwpCheckGuidAccess(a2, 0x200u, &SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return v5;
}

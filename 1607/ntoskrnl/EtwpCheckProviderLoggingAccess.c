/*
 * XREFs of EtwpCheckProviderLoggingAccess @ 0x14048F734
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x14048F658 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     EtwpCheckGuidAccess @ 0x140491D18 (EtwpCheckGuidAccess.c)
 */

__int64 __fastcall EtwpCheckProviderLoggingAccess(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  if ( !a3 || (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 0LL;
  SeCaptureSubjectContextEx(0LL, *(PEPROCESS *)(a1 + 80), &SubjectContext);
  v4 = EtwpCheckGuidAccess(a2, 512LL, &SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  return v4;
}

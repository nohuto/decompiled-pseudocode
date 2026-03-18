/*
 * XREFs of RtlIsSandboxedToken @ 0x140412A10
 * Callers:
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     IopCheckInitiatorHint @ 0x14009CF4C (IopCheckInitiatorHint.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     NtDuplicateToken @ 0x1404126D0 (NtDuplicateToken.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     ObpCreateDirectoryObject @ 0x140470CE4 (ObpCreateDirectoryObject.c)
 *     NtCreateSymbolicLinkObject @ 0x140473B2C (NtCreateSymbolicLinkObject.c)
 *     ObpParseSymbolicLinkEx @ 0x140476170 (ObpParseSymbolicLinkEx.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     CmpCheckCreateAccess @ 0x1404D87DC (CmpCheckCreateAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x140062B10 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 */

bool __fastcall RtlIsSandboxedToken(PSECURITY_SUBJECT_CONTEXT SubjectContext, KPROCESSOR_MODE a2)
{
  PSECURITY_SUBJECT_CONTEXT p_SubjectContexta; // rbx
  bool v4; // si
  struct _SECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  GrantedAccess = 0;
  p_SubjectContexta = 0LL;
  AccessStatus = 0;
  if ( a2 )
  {
    if ( SubjectContext )
    {
      p_SubjectContexta = SubjectContext;
    }
    else
    {
      p_SubjectContexta = &SubjectContexta;
      SeCaptureSubjectContext(&SubjectContexta);
    }
    v4 = SeAccessCheck(
           SeMediumDaclSd,
           p_SubjectContexta,
           0,
           0x20000u,
           0,
           0LL,
           (PGENERIC_MAPPING)&RtlpRestrictedMapping,
           a2,
           &GrantedAccess,
           &AccessStatus) == 1;
  }
  else
  {
    v4 = 1;
  }
  if ( p_SubjectContexta == &SubjectContexta )
    SeReleaseSubjectContext(p_SubjectContexta);
  return !v4;
}

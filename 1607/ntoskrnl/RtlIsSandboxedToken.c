/*
 * XREFs of RtlIsSandboxedToken @ 0x1404118D0
 * Callers:
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     IopCheckInitiatorHint @ 0x14009C74C (IopCheckInitiatorHint.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     NtDuplicateToken @ 0x140411590 (NtDuplicateToken.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     ObpCreateDirectoryObject @ 0x14046FBB4 (ObpCreateDirectoryObject.c)
 *     NtCreateSymbolicLinkObject @ 0x1404729FC (NtCreateSymbolicLinkObject.c)
 *     ObpParseSymbolicLinkEx @ 0x140475040 (ObpParseSymbolicLinkEx.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     CmpCheckCreateAccess @ 0x1404BBDE0 (CmpCheckCreateAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
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

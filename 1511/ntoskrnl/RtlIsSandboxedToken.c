/*
 * XREFs of RtlIsSandboxedToken @ 0x140478894
 * Callers:
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     ObpParseSymbolicLink @ 0x1403BEA20 (ObpParseSymbolicLink.c)
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 *     CmpCheckCreateAccess @ 0x1403DF1D8 (CmpCheckCreateAccess.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     ObpCreateDirectoryObject @ 0x14044E350 (ObpCreateDirectoryObject.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     NtDuplicateToken @ 0x140478460 (NtDuplicateToken.c)
 *     NtCreateSymbolicLinkObject @ 0x1404B0E34 (NtCreateSymbolicLinkObject.c)
 * Callees:
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
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

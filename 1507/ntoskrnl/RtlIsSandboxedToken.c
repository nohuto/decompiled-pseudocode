/*
 * XREFs of RtlIsSandboxedToken @ 0x1404115C4
 * Callers:
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     IopCheckInitiatorHint @ 0x140111C20 (IopCheckInitiatorHint.c)
 *     ObpParseSymbolicLink @ 0x140410E40 (ObpParseSymbolicLink.c)
 *     NtCreateSymbolicLinkObject @ 0x140411194 (NtCreateSymbolicLinkObject.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     NtDuplicateToken @ 0x140436B68 (NtDuplicateToken.c)
 *     CmpCheckCreateAccess @ 0x140448DB4 (CmpCheckCreateAccess.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObpCreateDirectoryObject @ 0x140540120 (ObpCreateDirectoryObject.c)
 * Callees:
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 */

bool __fastcall RtlIsSandboxedToken(struct _SECURITY_SUBJECT_CONTEXT *a1, KPROCESSOR_MODE a2)
{
  struct _SECURITY_SUBJECT_CONTEXT *v3; // rbx
  bool v4; // si
  struct _SECURITY_SUBJECT_CONTEXT v6; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  GrantedAccess = 0;
  v3 = 0LL;
  AccessStatus = 0;
  if ( a2 )
  {
    if ( a1 )
    {
      v3 = a1;
    }
    else
    {
      v3 = &v6;
      SeCaptureSubjectContext(&v6);
    }
    v4 = SeAccessCheck(
           SeMediumDaclSd,
           v3,
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
  if ( v3 == &v6 )
    SeReleaseSubjectContext(v3);
  return !v4;
}

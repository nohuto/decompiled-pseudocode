/*
 * XREFs of SePrivilegeCheck @ 0x140472B50
 * Callers:
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     PspSinglePrivCheck @ 0x140452944 (PspSinglePrivCheck.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     ObpAdjustCreatorAccessState @ 0x1404A95A0 (ObpAdjustCreatorAccessState.c)
 *     SeCheckPrivilegedObject @ 0x14050C338 (SeCheckPrivilegedObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x140606AEC (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x140675D24 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14009DDF0 (SepPrivilegeCheck.c)
 */

BOOLEAN __stdcall SePrivilegeCheck(
        PPRIVILEGE_SET RequiredPrivileges,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        KPROCESSOR_MODE AccessMode)
{
  PACCESS_TOKEN ClientToken; // rcx

  if ( !AccessMode )
    return 1;
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
  {
    ClientToken = SubjectSecurityContext->PrimaryToken;
    return SepPrivilegeCheck(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  }
  if ( SubjectSecurityContext->ImpersonationLevel >= SecurityImpersonation )
    return SepPrivilegeCheck(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  return 0;
}

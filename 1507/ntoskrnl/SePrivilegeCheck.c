/*
 * XREFs of SePrivilegeCheck @ 0x140432040
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObpAdjustCreatorAccessState @ 0x1404D0C60 (ObpAdjustCreatorAccessState.c)
 *     PspSinglePrivCheck @ 0x14054FB2C (PspSinglePrivCheck.c)
 *     SeCheckPrivilegedObject @ 0x140583928 (SeCheckPrivilegedObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x14058B044 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x1406FA4F4 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140014C60 (SepPrivilegeCheck.c)
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

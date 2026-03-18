/*
 * XREFs of SePrivilegeCheck @ 0x140415490
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x140404050 (ObpAdjustCreatorAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 *     PsOpenProcess @ 0x14041F410 (PsOpenProcess.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspSinglePrivCheck @ 0x1404DF6F0 (PspSinglePrivCheck.c)
 *     SeCheckPrivilegedObject @ 0x14054757C (SeCheckPrivilegedObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x140630F04 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x1406B8680 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14000F5B0 (SepPrivilegeCheck.c)
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

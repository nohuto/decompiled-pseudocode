/*
 * XREFs of SePrivilegeCheck @ 0x140414350
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x140402F10 (ObpAdjustCreatorAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 *     PsOpenProcess @ 0x14041E2D0 (PsOpenProcess.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspSinglePrivCheck @ 0x1404C2CF4 (PspSinglePrivCheck.c)
 *     SeCheckPrivilegedObject @ 0x140547ABC (SeCheckPrivilegedObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x140630FB8 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x1406B87B8 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14000F130 (SepPrivilegeCheck.c)
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

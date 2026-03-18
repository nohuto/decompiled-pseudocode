/*
 * XREFs of SeAccessCheck @ 0x14008ADB0
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x1400426B0 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x1400EA430 (IopCreateSecurityCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401A9E44 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x140200CB8 (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x14020CB70 (WdipAccessCheck.c)
 *     CmpCheckCreateAccess @ 0x1403DF1D8 (CmpCheckCreateAccess.c)
 *     NtDeleteWnfStateName @ 0x1403E19C4 (NtDeleteWnfStateName.c)
 *     ExpWnfCheckCallerAccess @ 0x1403E5C68 (ExpWnfCheckCallerAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1404033B0 (CmpCheckKeyBodyAccess.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     EtwpAccessCheck @ 0x140435590 (EtwpAccessCheck.c)
 *     PiAuVerifyAccessToObject @ 0x140442700 (PiAuVerifyAccessToObject.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140452CA8 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     AlpcpCheckConnectionSecurity @ 0x14046ACE4 (AlpcpCheckConnectionSecurity.c)
 *     ObCheckCreateObjectAccess @ 0x14046E3E0 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x140470650 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1404707E4 (ObpCheckObjectReference.c)
 *     RtlIsSandboxedToken @ 0x140478894 (RtlIsSandboxedToken.c)
 *     CmpCheckNotifyAccess @ 0x1404AFC7C (CmpCheckNotifyAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404BF3D0 (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x1404BFEE8 (CmpCheckSecurityCellAccess.c)
 *     ExIsRestrictedCaller @ 0x1404C69D4 (ExIsRestrictedCaller.c)
 *     NtSetUuidSeed @ 0x140543400 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x140548688 (NtDeleteWnfStateData.c)
 *     PiAuCheckTokenMembership @ 0x140606960 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x14062E1F0 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x140641FD4 (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x14064385C (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x140675D24 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x1406B75F0 (VfUtilIsLocalSystem.c)
 *     VerifierSeAccessCheck @ 0x1406C0C74 (VerifierSeAccessCheck.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 */

BOOLEAN __stdcall SeAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN SubjectContextLocked,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckWithHint(
           SecurityDescriptor,
           0LL,
           SubjectSecurityContext,
           SubjectContextLocked,
           DesiredAccess,
           PreviouslyGrantedAccess,
           Privileges,
           GenericMapping,
           AccessMode,
           GrantedAccess,
           AccessStatus);
}

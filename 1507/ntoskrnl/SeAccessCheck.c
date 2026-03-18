/*
 * XREFs of SeAccessCheck @ 0x1400CAB80
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14004EE30 (SeComputeCreatorDeniedRights.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401DFAC8 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x14024FA24 (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x14025BE34 (WdipAccessCheck.c)
 *     RtlIsSandboxedToken @ 0x1404115C4 (RtlIsSandboxedToken.c)
 *     PiAuVerifyAccessToObject @ 0x14043FE74 (PiAuVerifyAccessToObject.c)
 *     CmpCheckCreateAccess @ 0x140448DB4 (CmpCheckCreateAccess.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     CmpCheckKeyBodyAccess @ 0x1404C17F0 (CmpCheckKeyBodyAccess.c)
 *     ExIsRestrictedCaller @ 0x1404CA200 (ExIsRestrictedCaller.c)
 *     EtwpAccessCheck @ 0x1404CDBE0 (EtwpAccessCheck.c)
 *     ObpCheckObjectReference @ 0x1404CF854 (ObpCheckObjectReference.c)
 *     ObCheckCreateObjectAccess @ 0x1404D0EC4 (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x1404D3DC0 (ObCheckObjectAccess.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1404E9DC4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     CmpCheckNotifyAccess @ 0x1404EC768 (CmpCheckNotifyAccess.c)
 *     ExpWnfCheckCallerAccess @ 0x140502E84 (ExpWnfCheckCallerAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x14050BAF0 (AlpcpCheckConnectionSecurity.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     NtDeleteWnfStateName @ 0x14053EEF0 (NtDeleteWnfStateName.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140554F94 (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x1405598A8 (CmpCheckSecurityCellAccess.c)
 *     NtSetUuidSeed @ 0x1405B9554 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x1405BF43C (NtDeleteWnfStateData.c)
 *     PiAuCheckTokenMembership @ 0x140681708 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x1406ABF00 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1406C4538 (PspCheckJobAccessState.c)
 *     CMFCheckAccess @ 0x1406FA4F4 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x1407378E4 (VfUtilIsLocalSystem.c)
 *     VerifierSeAccessCheck @ 0x1407424B4 (VerifierSeAccessCheck.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
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

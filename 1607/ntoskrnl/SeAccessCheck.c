/*
 * XREFs of SeAccessCheck @ 0x140062B10
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14000F980 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x1400AABD8 (IopCreateSecurityCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401B4690 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1401B4DB0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     SeIsSystemContext @ 0x14021A5AC (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x1402246E0 (WdipAccessCheck.c)
 *     CmpCheckNotifyAccess @ 0x1403FDD14 (CmpCheckNotifyAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x1404007A0 (AlpcpCheckConnectionSecurity.c)
 *     ObCheckCreateObjectAccess @ 0x14040412C (ObCheckCreateObjectAccess.c)
 *     ObCheckObjectAccess @ 0x140405810 (ObCheckObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1404068F0 (ObpCheckObjectReference.c)
 *     EtwpAccessCheck @ 0x14040EFCC (EtwpAccessCheck.c)
 *     RtlIsSandboxedToken @ 0x140412A10 (RtlIsSandboxedToken.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     ExpWnfCheckCallerAccess @ 0x140462F14 (ExpWnfCheckCallerAccess.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     NtDeleteWnfStateName @ 0x1404C2274 (NtDeleteWnfStateName.c)
 *     CmpCheckCreateAccess @ 0x1404D87DC (CmpCheckCreateAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404E3BCC (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckSecurityCellAccess @ 0x1404EA7B4 (CmpCheckSecurityCellAccess.c)
 *     ExIsRestrictedCaller @ 0x1404F163C (ExIsRestrictedCaller.c)
 *     PiAuVerifyAccessToObject @ 0x1404F7F30 (PiAuVerifyAccessToObject.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140520858 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtSetUuidSeed @ 0x140577398 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x14057CAB8 (NtDeleteWnfStateData.c)
 *     CmpCheckKeyBodyAccess @ 0x140601F80 (CmpCheckKeyBodyAccess.c)
 *     PiAuCheckTokenMembership @ 0x140630D78 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x140666238 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x140680418 (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x1406822E8 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x1406B8680 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x140702DE8 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
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

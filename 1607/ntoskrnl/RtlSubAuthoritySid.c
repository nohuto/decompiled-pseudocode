/*
 * XREFs of RtlSubAuthoritySid @ 0x14000D6F8
 * Callers:
 *     RtlIsParentOfChildAppContainer @ 0x1403E1C94 (RtlIsParentOfChildAppContainer.c)
 *     SepCheckCapabilities @ 0x1403E1D20 (SepCheckCapabilities.c)
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 *     SepValidateReferencedLowBoxHandles @ 0x14047513C (SepValidateReferencedLowBoxHandles.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140477960 (ObpVerifyCreatorAccessCheck.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14047BBD8 (NtCreateLowBoxToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14047CA94 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     LookupSidInTable @ 0x1404D72E0 (LookupSidInTable.c)
 *     SeQueryMandatoryLabel @ 0x1404D9024 (SeQueryMandatoryLabel.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14055E548 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055E73C (CmpHiveRootSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14056E550 (PopCreateHiberFileSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140570E50 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140575138 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x140577398 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B14C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x140630CB8 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1406836A4 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140683988 (RtlGetAppContainerParent.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406994F8 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B889C (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DF998 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFC6C (_PnpGetPropertiesSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3658 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}

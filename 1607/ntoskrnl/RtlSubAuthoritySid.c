/*
 * XREFs of RtlSubAuthoritySid @ 0x14000D278
 * Callers:
 *     RtlIsParentOfChildAppContainer @ 0x1403E1C94 (RtlIsParentOfChildAppContainer.c)
 *     SepCheckCapabilities @ 0x1403E1D20 (SepCheckCapabilities.c)
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     SepValidateReferencedLowBoxHandles @ 0x14047400C (SepValidateReferencedLowBoxHandles.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140476830 (ObpVerifyCreatorAccessCheck.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14047B964 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     LookupSidInTable @ 0x1404BA8E4 (LookupSidInTable.c)
 *     SeQueryMandatoryLabel @ 0x1404BC628 (SeQueryMandatoryLabel.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14055EA88 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055EC7C (CmpHiveRootSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14056EA90 (PopCreateHiberFileSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140571390 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140575678 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x1405778D8 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B5F8 (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x140630D6C (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x140683788 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140683A6C (RtlGetAppContainerParent.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406995DC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B89D4 (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DFAD0 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFDA4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3790 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}

/*
 * XREFs of RtlSubAuthoritySid @ 0x14003D36C
 * Callers:
 *     RtlIsParentOfChildAppContainer @ 0x1403B4660 (RtlIsParentOfChildAppContainer.c)
 *     SepCheckCapabilities @ 0x1403B47E4 (SepCheckCapabilities.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1403BF0B8 (SepValidateReferencedLowBoxHandles.c)
 *     NtCreateLowBoxToken @ 0x1403C0A6C (NtCreateLowBoxToken.c)
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     NtQueryInformationToken @ 0x140431390 (NtQueryInformationToken.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1404AA73C (ObpVerifyCreatorAccessCheck.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x1404B49E0 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405184F8 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14051E508 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14051E8D8 (CmpAdminSystemSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14053F248 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140541C94 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x140543400 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405471F8 (_PnpGetEnumSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140549098 (PopCreateHiberFileSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x14060689C (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x140646790 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140646A50 (RtlGetAppContainerParent.c)
 *     SeQueryObjectMandatoryLabel @ 0x14064DC70 (SeQueryObjectMandatoryLabel.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14065B8CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x140675F40 (CMFCreateSecurityDescriptor.c)
 *     LookupSidInTable @ 0x1406872B8 (LookupSidInTable.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140699A24 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x14069CA70 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}

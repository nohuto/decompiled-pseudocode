/*
 * XREFs of RtlSubAuthoritySid @ 0x140044DFC
 * Callers:
 *     RtlIsParentOfChildAppContainer @ 0x140408410 (RtlIsParentOfChildAppContainer.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14040F8F8 (SepRemoveDisabledGroupsAndPrivileges.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140482E10 (NtQueryInformationToken.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054467C (ObpVerifyCreatorAccessCheck.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14058C9CC (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405A4EAC (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A50A0 (CmpHiveRootSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405B3288 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x1405B80F4 (InitializeSidLookupTable.c)
 *     NtSetUuidSeed @ 0x1405B9554 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405BE0BC (_PnpGetEnumSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405C0314 (PopCreateHiberFileSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x140681644 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1406C97D8 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x1406C9AC4 (RtlGetAppContainerParent.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1406D8790 (SepValidateReferencedLowBoxHandles.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406DE120 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     CMFCreateSecurityDescriptor @ 0x1406FA710 (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140719880 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x14071D0CC (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}

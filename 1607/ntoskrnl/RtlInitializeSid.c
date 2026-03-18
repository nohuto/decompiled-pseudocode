/*
 * XREFs of RtlInitializeSid @ 0x140479578
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140136740 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x140210E30 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x1402246E0 (WdipAccessCheck.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140477960 (ObpVerifyCreatorAccessCheck.c)
 *     RtlpSetSecurityObject @ 0x1404A56A0 (RtlpSetSecurityObject.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14055E548 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055E73C (CmpHiveRootSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14056E550 (PopCreateHiberFileSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140570E50 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x14057187C (PiAuAllocateAndInitializeSid.c)
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
 *     SepVariableInitialization @ 0x14078FC70 (SepVariableInitialization.c)
 *     PopNetInitialize @ 0x140795FD0 (PopNetInitialize.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1407ABBA0 (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(struct _SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}

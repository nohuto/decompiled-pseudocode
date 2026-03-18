/*
 * XREFs of RtlAddAccessAllowedAce @ 0x14048D14C
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1400807C0 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenMembershipEx @ 0x1400852B0 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x14013C60C (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x14021060C (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x1402246E0 (WdipAccessCheck.c)
 *     SepCreateImpersonationTokenDacl @ 0x140420C60 (SepCreateImpersonationTokenDacl.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14047391C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1404793C8 (ObpVerifyAccessToBoundaryEntry.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     MiSessionObjectCreate @ 0x140535AA4 (MiSessionObjectCreate.c)
 *     PopCreateNotificationName @ 0x140545198 (PopCreateNotificationName.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14055272C (ObpCreateDefaultObjectTypeSD.c)
 *     SepInitializationPhase1 @ 0x140552FE0 (SepInitializationPhase1.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14055E548 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055E73C (CmpHiveRootSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14056E550 (PopCreateHiberFileSecurityDescriptor.c)
 *     PfpCreateEvent @ 0x140572860 (PfpCreateEvent.c)
 *     ObpInitializeRootNamespace @ 0x140579974 (ObpInitializeRootNamespace.c)
 *     ObpGetDosDevicesProtection @ 0x140579E48 (ObpGetDosDevicesProtection.c)
 *     PiAuCheckTokenMembership @ 0x140630D78 (PiAuCheckTokenMembership.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406994F8 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AED54 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     ObpGetSilosRootDirectory @ 0x1406E63A0 (ObpGetSilosRootDirectory.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407030B0 (ViInitializeLocalSystemDescriptor.c)
 *     SepInitSystemDacls @ 0x140791230 (SepInitSystemDacls.c)
 *     WmipInitializeSecurity @ 0x14079C7B4 (WmipInitializeSecurity.c)
 *     MiSystemPartitionObjectCreate @ 0x1407A13BC (MiSystemPartitionObjectCreate.c)
 *     DbgkpCreateNotificationEvent @ 0x1407A1950 (DbgkpCreateNotificationEvent.c)
 *     ExpKeyedEventInitialization @ 0x1407A1B44 (ExpKeyedEventInitialization.c)
 *     SeMakeSystemToken @ 0x1407A2B10 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1407A3058 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1407A328C (SeMakeAnonymousLogonToken.c)
 *     BuildKnownDlls @ 0x1407A34E0 (BuildKnownDlls.c)
 *     MiCreateMemoryEvent @ 0x1407A45F0 (MiCreateMemoryEvent.c)
 *     PopUmpoInitializeChannel @ 0x1407B93C4 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1407CE99C (IopApplySystemPartitionProt.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140421800 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce(Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 0);
}

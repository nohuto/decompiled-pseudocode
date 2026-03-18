/*
 * XREFs of RtlAddAccessAllowedAce @ 0x1403C01BC
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x1400033B0 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenMembershipEx @ 0x140003E78 (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x140134478 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x1401F6378 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14020CB70 (WdipAccessCheck.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1403BF560 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1403C0714 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     SepCreateImpersonationTokenDacl @ 0x140434DA0 (SepCreateImpersonationTokenDacl.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     PopCreateNotificationName @ 0x1404C3F44 (PopCreateNotificationName.c)
 *     MiSessionObjectCreate @ 0x1404FED9C (MiSessionObjectCreate.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14051E508 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14051E8D8 (CmpAdminSystemSecurityDescriptor.c)
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x14054149C (PfpCreateEvent.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140549098 (PopCreateHiberFileSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140606960 (PiAuCheckTokenMembership.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14065B8CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406696D0 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1406B78B8 (ViInitializeLocalSystemDescriptor.c)
 *     MiCreateMemoryEvent @ 0x14074D1CC (MiCreateMemoryEvent.c)
 *     WmipInitializeSecurity @ 0x140752D78 (WmipInitializeSecurity.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     MiSystemPartitionObjectCreate @ 0x14075A6E8 (MiSystemPartitionObjectCreate.c)
 *     DbgkpCreateNotificationEvent @ 0x14075AC8C (DbgkpCreateNotificationEvent.c)
 *     ExpKeyedEventInitialization @ 0x14075AE80 (ExpKeyedEventInitialization.c)
 *     SeMakeSystemToken @ 0x14075BF7C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14075C4B0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14075C6E4 (SeMakeAnonymousLogonToken.c)
 *     BuildKnownDlls @ 0x14075C938 (BuildKnownDlls.c)
 *     SepInitSystemDacls @ 0x14075E344 (SepInitSystemDacls.c)
 *     ObpGetDosDevicesProtection @ 0x14076D55C (ObpGetDosDevicesProtection.c)
 *     PopUmpoInitializeChannel @ 0x14076F050 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1407831D0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x140435010 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce((int)Acl, AceRevision, 0, AccessMask, Sid, 0);
}

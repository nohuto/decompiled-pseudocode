/*
 * XREFs of RtlAddAccessAllowedAce @ 0x140415C28
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140007EA4 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlCheckTokenMembershipEx @ 0x1400083BC (RtlCheckTokenMembershipEx.c)
 *     SepInitProcessAuditSd @ 0x14015EE30 (SepInitProcessAuditSd.c)
 *     RtlCheckTokenCapability @ 0x1402450DC (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14025BE34 (WdipAccessCheck.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140413138 (ObpVerifyAccessToBoundaryEntry.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14041374C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     SepCreateImpersonationTokenDacl @ 0x1404C9270 (SepCreateImpersonationTokenDacl.c)
 *     PopCreateNotificationName @ 0x1404EB758 (PopCreateNotificationName.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     MiSessionObjectCreate @ 0x14057979C (MiSessionObjectCreate.c)
 *     SepInitializationPhase1 @ 0x1405931F0 (SepInitializationPhase1.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405A4EAC (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A50A0 (CmpHiveRootSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     PfpCreateEvent @ 0x1405B7260 (PfpCreateEvent.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405C0314 (PopCreateHiberFileSecurityDescriptor.c)
 *     PiAuCheckTokenMembership @ 0x140681708 (PiAuCheckTokenMembership.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406DE120 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406ECC64 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140737BD4 (ViInitializeLocalSystemDescriptor.c)
 *     WmipInitializeSecurity @ 0x1407B9F00 (WmipInitializeSecurity.c)
 *     SeMakeSystemToken @ 0x1407BC9E0 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1407BCF14 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1407BD148 (SeMakeAnonymousLogonToken.c)
 *     BuildKnownDlls @ 0x1407BD39C (BuildKnownDlls.c)
 *     SepInitSystemDacls @ 0x1407BEE60 (SepInitSystemDacls.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     MiSystemPartitionObjectCreate @ 0x1407C4068 (MiSystemPartitionObjectCreate.c)
 *     MiCreateMemoryEvent @ 0x1407CAF9C (MiCreateMemoryEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x1407DE814 (DbgkpCreateNotificationEvent.c)
 *     ObpGetDosDevicesProtection @ 0x1407E27EC (ObpGetDosDevicesProtection.c)
 *     ExpKeyedEventInitialization @ 0x1407E4030 (ExpKeyedEventInitialization.c)
 *     PopUmpoInitializeChannel @ 0x1407E46C0 (PopUmpoInitializeChannel.c)
 *     IopApplySystemPartitionProt @ 0x1407F9954 (IopApplySystemPartitionProt.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1404C94D0 (RtlpAddKnownAce.c)
 */

NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce((int)Acl, AceRevision, 0, AccessMask, Sid, 0);
}

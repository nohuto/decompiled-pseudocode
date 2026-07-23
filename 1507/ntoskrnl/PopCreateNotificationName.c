/*
 * XREFs of PopCreateNotificationName @ 0x1404EB758
 * Callers:
 *     PopGetSettingNotificationName @ 0x1404E98A4 (PopGetSettingNotificationName.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x140180790 (ZwCreateWnfStateName.c)
 *     RtlAddAccessAllowedAce @ 0x140415C28 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
 */

NTSTATUS __fastcall PopCreateNotificationName(PWNF_STATE_NAME StateName)
{
  _BYTE SecurityDescriptor[48]; // [rsp+40h] [rbp-148h] BYREF
  ACL Acl; // [rsp+70h] [rbp-118h] BYREF

  RtlCreateAcl(&Acl, 0xF8u, 2u);
  RtlAddAccessAllowedAce(&Acl, 2u, 0x1F0003u, SeLocalSystemSid);
  RtlAddAccessAllowedAce(&Acl, 2u, 0x120001u, SeWorldSid);
  RtlAddAccessAllowedAce(&Acl, 2u, 0x120001u, SeAllAppPackagesSid);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
  return ZwCreateWnfStateName(StateName, WnfTemporaryStateName, WnfDataScopeSystem, 0, 0LL, 0x24u, SecurityDescriptor);
}

/*
 * XREFs of PopCreateNotificationName @ 0x1404C3F44
 * Callers:
 *     PopGetSettingNotificationName @ 0x14045429C (PopGetSettingNotificationName.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x140151DE0 (ZwCreateWnfStateName.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
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
  return ZwCreateWnfStateName(StateName, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0x24u, SecurityDescriptor);
}

/*
 * XREFs of PopCreateNotificationName @ 0x140545198
 * Callers:
 *     PopGetSettingNotificationName @ 0x14051FCC4 (PopGetSettingNotificationName.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14015B480 (ZwCreateWnfStateName.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140413E70 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140413ED0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140420AB8 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14048D14C (RtlAddAccessAllowedAce.c)
 */

__int64 __fastcall PopCreateNotificationName(__int64 a1)
{
  _BYTE SecurityDescriptor[48]; // [rsp+40h] [rbp-148h] BYREF
  ACL Acl; // [rsp+70h] [rbp-118h] BYREF

  RtlCreateAcl(&Acl, 0xF8u, 2u);
  RtlAddAccessAllowedAce(&Acl, 2u, 0x1F0003u, SeLocalSystemSid);
  RtlAddAccessAllowedAce(&Acl, 2u, 0x120001u, SeWorldSid);
  RtlAddAccessAllowedAce(&Acl, 2u, 0x120001u, SeAllAppPackagesSid);
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
  return ZwCreateWnfStateName(a1, 3LL, 4LL);
}

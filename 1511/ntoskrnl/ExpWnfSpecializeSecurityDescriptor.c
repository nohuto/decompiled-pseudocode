/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x1403E2A80
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x1403E0F08 (ExpWnfLookupPermanentName.c)
 *     NtCreateWnfStateName @ 0x1403E262C (NtCreateWnfStateName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14001B408 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1403E2B08 (RtlGetSaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x14046C220 (RtlpApplyAclToObject.c)
 */

NTSTATUS __fastcall ExpWnfSpecializeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS result; // eax
  BOOLEAN SaclPresent; // [rsp+38h] [rbp+10h] BYREF
  BOOLEAN SaclDefaulted; // [rsp+40h] [rbp+18h] BYREF
  PACL Sacl; // [rsp+48h] [rbp+20h] BYREF

  Sacl = 0LL;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &SaclPresent, &Sacl, &SaclDefaulted) >= 0 && SaclPresent && Sacl )
    RtlpApplyAclToObject(Sacl, &ExpWnfNotificationMapping);
  result = RtlGetSaclSecurityDescriptor(SecurityDescriptor, &SaclPresent, &Sacl, &SaclDefaulted);
  if ( result >= 0 && SaclPresent )
  {
    if ( Sacl )
      return RtlpApplyAclToObject(Sacl, &ExpWnfNotificationMapping);
  }
  return result;
}

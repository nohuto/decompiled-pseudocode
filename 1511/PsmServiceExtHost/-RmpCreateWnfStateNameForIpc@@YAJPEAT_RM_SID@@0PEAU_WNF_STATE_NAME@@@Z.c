/*
 * XREFs of ?RmpCreateWnfStateNameForIpc@@YAJPEAT_RM_SID@@0PEAU_WNF_STATE_NAME@@@Z @ 0x180024BA4
 * Callers:
 *     RmpWnfCreateStateNameForClient @ 0x180024B40 (RmpWnfCreateStateNameForClient.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RmpCreateWnfStateNameForIpc(PSID pSid, PSID a2, struct _WNF_STATE_NAME *a3)
{
  NTSTATUS result; // eax
  _BYTE SecurityDescriptor[48]; // [rsp+40h] [rbp-148h] BYREF
  struct _ACL Acl; // [rsp+70h] [rbp-118h] BYREF

  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    result = RtlCreateAcl(&Acl, 0xECu, 2u);
    if ( result >= 0 )
    {
      result = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, pSid);
      if ( result >= 0 )
      {
        RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, a2);
        result = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
        if ( result >= 0 )
        {
          result = NtCreateWnfStateName(a3, 3LL, 0LL);
          if ( result >= 0 )
            return 0;
        }
      }
    }
  }
  return result;
}

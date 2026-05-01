/*
 * XREFs of ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KPEAU_WNF_STATE_NAME@@@Z @ 0x180020190
 * Callers:
 *     ?RmpUtilCreateWnfStateNameForClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x180020134 (-RmpUtilCreateWnfStateNameForClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RmpWnfCreateStateNameForIpcEx(PSID pSid, PSID a2, __int64 a3, struct _WNF_STATE_NAME *a4)
{
  NTSTATUS result; // eax
  _BYTE SecurityDescriptor[48]; // [rsp+40h] [rbp-1A8h] BYREF
  struct _ACL Acl; // [rsp+70h] [rbp-178h] BYREF

  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    result = RtlCreateAcl(&Acl, 0x138u, 2u);
    if ( result >= 0 )
    {
      result = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, pSid);
      if ( result >= 0 )
      {
        RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, a2);
        result = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
        if ( result >= 0 )
        {
          result = NtCreateWnfStateName(a4, 3LL, 0LL);
          if ( result >= 0 )
            return 0;
        }
      }
    }
  }
  return result;
}

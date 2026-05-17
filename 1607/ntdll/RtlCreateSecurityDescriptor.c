/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x180010ED0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DDF0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180011040 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180044AD8 (RtlpNewSecurityObject.c)
 *     RtlpSysVolTakeOwnership @ 0x18008B698 (RtlpSysVolTakeOwnership.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008C3E4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlCreateAndSetSD @ 0x18008C800 (RtlCreateAndSetSD.c)
 *     RtlCheckSandboxedToken @ 0x1800D4580 (RtlCheckSandboxedToken.c)
 *     _ResCreateSecurityDescriptor @ 0x180103F4C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlCreateSecurityDescriptor(_BYTE *a1, int a2)
{
  __int64 result; // rax

  if ( a2 != 1 )
    return 3221225560LL;
  memset(a1, 0, 0x28uLL);
  result = 0LL;
  *a1 = 1;
  return result;
}

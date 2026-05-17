/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x18004E850
 * Callers:
 *     RtlCheckTokenCapability @ 0x18004AAA0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18004AF00 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18007F924 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x18007FC70 (RtlpSysVolTakeOwnership.c)
 *     RtlCreateAndSetSD @ 0x180080030 (RtlCreateAndSetSD.c)
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F9C9C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     memset @ 0x180098540 (memset.c)
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

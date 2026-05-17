/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x180061E30
 * Callers:
 *     RtlCheckSandboxedToken @ 0x180002800 (RtlCheckSandboxedToken.c)
 *     RtlCheckTokenCapability @ 0x18005E0B0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18005E3A0 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 *     RtlCreateAndSetSD @ 0x180065340 (RtlCreateAndSetSD.c)
 *     RtlpSysVolTakeOwnership @ 0x1800878F4 (RtlpSysVolTakeOwnership.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180088194 (RtlpSysVolCreateSecurityDescriptor.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F95B4 (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     memset @ 0x1800AB900 (memset.c)
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

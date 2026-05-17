/*
 * XREFs of RtlCreateAcl @ 0x18004CBD0
 * Callers:
 *     RtlpComputeMergedAcl2 @ 0x1800478E8 (RtlpComputeMergedAcl2.c)
 *     RtlCheckTokenCapability @ 0x18004AAA0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18004AF00 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x18004C810 (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x18004DF20 (RtlpCombineAcls.c)
 *     RtlDefaultNpAcl @ 0x180050BE0 (RtlDefaultNpAcl.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18007F924 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlCreateAndSetSD @ 0x180080030 (RtlCreateAndSetSD.c)
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800CF04C (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800CFDE8 (RtlpCreateServerAcl.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F9C9C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCreateAcl(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( a2 < 8 )
    return 3221225507LL;
  if ( (unsigned int)(a3 - 2) > 2 || a2 > 0xFFFC )
    return 3221225485LL;
  result = 0LL;
  *(_BYTE *)a1 = a3;
  *(_BYTE *)(a1 + 1) = 0;
  *(_WORD *)(a1 + 2) = a2 & 0xFFFC;
  *(_DWORD *)(a1 + 4) = 0;
  return result;
}

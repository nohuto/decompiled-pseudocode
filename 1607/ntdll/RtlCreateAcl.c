/*
 * XREFs of RtlCreateAcl @ 0x180040A00
 * Callers:
 *     RtlpCombineAcls @ 0x1800061B8 (RtlpCombineAcls.c)
 *     RtlCheckTokenCapability @ 0x18000DDF0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180011040 (RtlCheckTokenMembershipEx.c)
 *     RtlpInheritAcl2 @ 0x180040638 (RtlpInheritAcl2.c)
 *     RtlpNewSecurityObject @ 0x180044AD8 (RtlpNewSecurityObject.c)
 *     RtlDefaultNpAcl @ 0x18008B250 (RtlDefaultNpAcl.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008C3E4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlCreateAndSetSD @ 0x18008C800 (RtlCreateAndSetSD.c)
 *     RtlpComputeMergedAcl2 @ 0x18008FD88 (RtlpComputeMergedAcl2.c)
 *     RtlCheckSandboxedToken @ 0x1800D4580 (RtlCheckSandboxedToken.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800DFF70 (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800E0D0C (RtlpCreateServerAcl.c)
 *     _ResCreateSecurityDescriptor @ 0x180103F4C (_ResCreateSecurityDescriptor.c)
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

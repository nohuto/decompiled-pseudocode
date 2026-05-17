/*
 * XREFs of RtlInitializeSid @ 0x18000D5F0
 * Callers:
 *     RtlGetAppContainerParent @ 0x180003330 (RtlGetAppContainerParent.c)
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     WerpAllocateAndInitializeSid @ 0x180008DB0 (WerpAllocateAndInitializeSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180008FE0 (RtlCreateVirtualAccountSid.c)
 *     RtlCreateServiceSid @ 0x18000B8E0 (RtlCreateServiceSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18000C630 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x18000D450 (RtlInitializeSidEx.c)
 *     RtlpOwnerAcesPresent @ 0x18000D4A8 (RtlpOwnerAcesPresent.c)
 *     RtlCapabilityCheck @ 0x18000DA10 (RtlCapabilityCheck.c)
 *     RtlDefaultNpAcl @ 0x18008B250 (RtlDefaultNpAcl.c)
 *     RtlpCompareKnownObjectAces @ 0x18008EA20 (RtlpCompareKnownObjectAces.c)
 *     RtlpCompareKnownAces @ 0x1800DFE20 (RtlpCompareKnownAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800DFF70 (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E1128 (RtlpValidLabelSubjectContext.c)
 *     _ResCreateSecurityDescriptor @ 0x180103F4C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitializeSid(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  if ( a3 > 0xFu )
    return 3221225485LL;
  *(_BYTE *)(a1 + 1) = a3;
  *(_BYTE *)a1 = 1;
  *(_DWORD *)(a1 + 2) = *(_DWORD *)a2;
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 4);
  return 0LL;
}

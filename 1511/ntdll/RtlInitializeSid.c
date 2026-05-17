/*
 * XREFs of RtlInitializeSid @ 0x180062030
 * Callers:
 *     WerpAllocateAndInitializeSid @ 0x180002EE8 (WerpAllocateAndInitializeSid.c)
 *     RtlGetAppContainerParent @ 0x180003C10 (RtlGetAppContainerParent.c)
 *     RtlpSetSecurityObject @ 0x18005D220 (RtlpSetSecurityObject.c)
 *     RtlCapabilityCheck @ 0x18005DE30 (RtlCapabilityCheck.c)
 *     RtlpOwnerAcesPresent @ 0x180061EE0 (RtlpOwnerAcesPresent.c)
 *     RtlInitializeSidEx @ 0x180062260 (RtlInitializeSidEx.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800628B0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateServiceSid @ 0x180062A60 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180065190 (RtlCreateVirtualAccountSid.c)
 *     RtlpCompareKnownObjectAces @ 0x18008A320 (RtlpCompareKnownObjectAces.c)
 *     RtlDefaultNpAcl @ 0x1800CC680 (RtlDefaultNpAcl.c)
 *     RtlpCompareKnownAces @ 0x1800D74CC (RtlpCompareKnownAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800D7628 (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800D877C (RtlpValidLabelSubjectContext.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F95B4 (_ResCreateSecurityDescriptor.c)
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

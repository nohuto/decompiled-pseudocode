/*
 * XREFs of RtlInitializeSid @ 0x18004EAE0
 * Callers:
 *     WerpAllocateAndInitializeSid @ 0x180001FA8 (WerpAllocateAndInitializeSid.c)
 *     RtlGetAppContainerParent @ 0x1800030B0 (RtlGetAppContainerParent.c)
 *     RtlpSetSecurityObject @ 0x180047EB8 (RtlpSetSecurityObject.c)
 *     RtlCapabilityCheck @ 0x18004A7A0 (RtlCapabilityCheck.c)
 *     RtlpCompareKnownObjectAces @ 0x18004D878 (RtlpCompareKnownObjectAces.c)
 *     RtlpOwnerAcesPresent @ 0x18004E988 (RtlpOwnerAcesPresent.c)
 *     RtlInitializeSidEx @ 0x18004F0B0 (RtlInitializeSidEx.c)
 *     RtlCreateServiceSid @ 0x18004F110 (RtlCreateServiceSid.c)
 *     RtlDefaultNpAcl @ 0x180050BE0 (RtlDefaultNpAcl.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180050F90 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateVirtualAccountSid @ 0x180052D20 (RtlCreateVirtualAccountSid.c)
 *     RtlpCompareKnownAces @ 0x1800CEEF0 (RtlpCompareKnownAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800CF04C (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800D0204 (RtlpValidLabelSubjectContext.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F9C9C (_ResCreateSecurityDescriptor.c)
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

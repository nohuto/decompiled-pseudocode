/*
 * XREFs of SepSidInTokenSidHash @ 0x14000383C
 * Callers:
 *     SepSidInToken @ 0x140003818 (SepSidInToken.c)
 *     SepTokenIsOwner @ 0x14008A540 (SepTokenIsOwner.c)
 *     SepMaximumAccessCheck @ 0x14008A7E0 (SepMaximumAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SepMatchCapability @ 0x1400E8724 (SepMatchCapability.c)
 *     SepMaximumAccessCheckEx @ 0x14012BB10 (SepMaximumAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x1402004D8 (SeMaximumAuditMask.c)
 *     AuthzBasepDeviceMemberOf @ 0x14021AB04 (AuthzBasepDeviceMemberOf.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1403BE3F0 (SepIsImpersonationAllowedDueToCapability.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 * Callees:
 *     RtlSidHashLookup @ 0x14008A600 (RtlSidHashLookup.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 */

bool __fastcall SepSidInTokenSidHash(
        PSID_AND_ATTRIBUTES_HASH SidAttrHash,
        void *a2,
        void *a3,
        char a4,
        char a5,
        char a6)
{
  void *v7; // rbx
  PSID_AND_ATTRIBUTES v10; // rax
  bool result; // al
  ULONG Attributes; // ecx

  v7 = a3;
  if ( a2 && RtlEqualSid(SePrincipalSelfSid, a3) )
    v7 = a2;
  result = 1;
  if ( !a6 || !RtlEqualSid(SeOwnerRightsSid, v7) )
  {
    v10 = RtlSidHashLookup(SidAttrHash, v7);
    if ( !v10 )
      return 0;
    if ( a5 || v10 != SidAttrHash->SidAttr || (v10->Attributes & 0x10) != 0 && !a4 )
    {
      Attributes = v10->Attributes;
      if ( (Attributes & 4) == 0 && (!a4 || (Attributes & 0x10) == 0) )
        return 0;
    }
  }
  return result;
}

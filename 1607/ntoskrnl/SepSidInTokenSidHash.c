/*
 * XREFs of SepSidInTokenSidHash @ 0x140060D70
 * Callers:
 *     SepTokenIsOwner @ 0x140060CE0 (SepTokenIsOwner.c)
 *     SepMaximumAccessCheck @ 0x140061220 (SepMaximumAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SepMatchCapability @ 0x1400A5D08 (SepMatchCapability.c)
 *     SepSidInToken @ 0x1400C2444 (SepSidInToken.c)
 *     SepMaximumAccessCheckEx @ 0x140133534 (SepMaximumAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x1402197EC (SeMaximumAuditMask.c)
 *     AuthzBasepDeviceMemberOf @ 0x140234CC4 (AuthzBasepDeviceMemberOf.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1404E6774 (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x140060E30 (RtlSidHashLookup.c)
 */

bool __fastcall SepSidInTokenSidHash(
        PSID_AND_ATTRIBUTES_HASH SidAttrHash,
        void *a2,
        void *a3,
        char a4,
        char a5,
        char a6)
{
  void *v7; // rdi
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

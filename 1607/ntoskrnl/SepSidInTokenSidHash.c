/*
 * XREFs of SepSidInTokenSidHash @ 0x1400611F0
 * Callers:
 *     SepTokenIsOwner @ 0x140061160 (SepTokenIsOwner.c)
 *     SepMaximumAccessCheck @ 0x1400616A0 (SepMaximumAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     SepMatchCapability @ 0x1400A7790 (SepMatchCapability.c)
 *     SepSidInToken @ 0x1400C45A4 (SepSidInToken.c)
 *     SepMaximumAccessCheckEx @ 0x140132FC4 (SepMaximumAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x1402199C0 (SeMaximumAuditMask.c)
 *     AuthzBasepDeviceMemberOf @ 0x140234E98 (AuthzBasepDeviceMemberOf.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405037E4 (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F570 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x1400612B0 (RtlSidHashLookup.c)
 */

bool __fastcall SepSidInTokenSidHash(__int64 a1, void *a2, void *a3, char a4, char a5, char a6)
{
  void *v7; // rdi
  __int64 v10; // rax
  bool result; // al
  int v12; // ecx

  v7 = a3;
  if ( a2 && RtlEqualSid(SePrincipalSelfSid, a3) )
    v7 = a2;
  result = 1;
  if ( !a6 || !RtlEqualSid(SeOwnerRightsSid, v7) )
  {
    v10 = RtlSidHashLookup(a1, v7);
    if ( !v10 )
      return 0;
    if ( a5 || v10 != *(_QWORD *)(a1 + 8) || (*(_DWORD *)(v10 + 8) & 0x10) != 0 && !a4 )
    {
      v12 = *(_DWORD *)(v10 + 8);
      if ( (v12 & 4) == 0 && (!a4 || (v12 & 0x10) == 0) )
        return 0;
    }
  }
  return result;
}

/*
 * XREFs of RtlSidDominatesForTrust @ 0x1400D1B40
 * Callers:
 *     SepLocateTokenTrustLevel @ 0x140012AA0 (SepLocateTokenTrustLevel.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x14008D160 (SepTrustLevelCheck.c)
 *     RtlpValidTrustSubjectContext @ 0x140130EE0 (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x14021A2D8 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeAdjustAccessStateForTrustLabel @ 0x1404A22AC (SeAdjustAccessStateForTrustLabel.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1404A234C (SeShouldCheckForAccessRightsFromParent.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1404CC6E8 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeTokenCanImpersonate @ 0x1404F28B0 (SeTokenCanImpersonate.c)
 *     RtlpSetSecurityObject @ 0x14051DAA0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1400D1C3C (RtlIsValidProcessTrustLabelSid.c)
 */

NTSTATUS __cdecl RtlSidDominatesForTrust(PSID Sid1, PSID Sid2, PBOOLEAN DominatesTrust)
{
  PBOOLEAN v3; // r9
  PSID v4; // r10
  __int64 v6; // r10
  __int64 v7; // r11

  *DominatesTrust = 0;
  v3 = DominatesTrust;
  v4 = Sid2;
  if ( Sid1 && !RtlIsValidProcessTrustLabelSid(Sid1) )
    return -1073741811;
  if ( !v4 )
  {
LABEL_3:
    *v3 = 1;
    return 0;
  }
  if ( !RtlIsValidProcessTrustLabelSid(v4) )
    return -1073741811;
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 8) >= *(_DWORD *)(v6 + 8) && *(_DWORD *)(v7 + 12) >= *(_DWORD *)(v6 + 12) )
      goto LABEL_3;
  }
  else if ( !*(_DWORD *)(v6 + 8) )
  {
    goto LABEL_3;
  }
  *v3 = 0;
  return 0;
}

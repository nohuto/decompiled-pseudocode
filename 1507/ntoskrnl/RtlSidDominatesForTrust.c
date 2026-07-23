/*
 * XREFs of RtlSidDominatesForTrust @ 0x140043E50
 * Callers:
 *     SepLocateTokenTrustLevel @ 0x140045658 (SepLocateTokenTrustLevel.c)
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x1400CE734 (SepTrustLevelCheck.c)
 *     RtlpValidTrustSubjectContext @ 0x1401594E4 (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x14024F924 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeTokenCanImpersonate @ 0x1404798B0 (SeTokenCanImpersonate.c)
 *     SeAdjustAccessStateForTrustLabel @ 0x1404CA0F0 (SeAdjustAccessStateForTrustLabel.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1404CA1A0 (SeShouldCheckForAccessRightsFromParent.c)
 *     RtlpSetSecurityObject @ 0x1404CD280 (RtlpSetSecurityObject.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x140559A3C (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x140042D28 (RtlIsValidProcessTrustLabelSid.c)
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

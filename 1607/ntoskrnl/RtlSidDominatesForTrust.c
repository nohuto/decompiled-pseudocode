/*
 * XREFs of RtlSidDominatesForTrust @ 0x1400D3CA0
 * Callers:
 *     SepLocateTokenTrustLevel @ 0x140012F20 (SepLocateTokenTrustLevel.c)
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x14008DA00 (SepTrustLevelCheck.c)
 *     RtlpValidTrustSubjectContext @ 0x140130970 (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x14021A4AC (SeCreateClientSecurityFromSubjectContextEx.c)
 *     RtlpSetSecurityObject @ 0x1404A56A0 (RtlpSetSecurityObject.c)
 *     SeAdjustAccessStateForTrustLabel @ 0x1404B7ECC (SeAdjustAccessStateForTrustLabel.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1404B7F6C (SeShouldCheckForAccessRightsFromParent.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1404EA5F4 (SeCreateClientSecurityFromSubjectContext.c)
 *     SeTokenCanImpersonate @ 0x14050F920 (SeTokenCanImpersonate.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1400D3D9C (RtlIsValidProcessTrustLabelSid.c)
 */

__int64 __fastcall RtlSidDominatesForTrust(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *v3; // r9
  __int64 v4; // r10
  __int64 v6; // r10
  __int64 v7; // r11

  *a3 = 0;
  v3 = a3;
  v4 = a2;
  if ( a1 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(a1) )
    return 3221225485LL;
  if ( !v4 )
  {
LABEL_3:
    *v3 = 1;
    return 0LL;
  }
  if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v4) )
    return 3221225485LL;
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
  return 0LL;
}

/*
 * XREFs of RtlSidDominatesForTrust @ 0x14007A050
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SepTrustLevelCheck @ 0x14008DE30 (SepTrustLevelCheck.c)
 *     SepLocateTokenTrustLevel @ 0x1400E194C (SepLocateTokenTrustLevel.c)
 *     RtlpValidTrustSubjectContext @ 0x140125CAC (RtlpValidTrustSubjectContext.c)
 *     SeCreateClientSecurityFromSubjectContextEx @ 0x140200BB8 (SeCreateClientSecurityFromSubjectContextEx.c)
 *     SeTokenCanImpersonate @ 0x140426A30 (SeTokenCanImpersonate.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1404352C0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SeAdjustAccessStateForTrustLabel @ 0x1404354F0 (SeAdjustAccessStateForTrustLabel.c)
 *     RtlpSetSecurityObject @ 0x14046B8C0 (RtlpSetSecurityObject.c)
 *     SeCreateClientSecurityFromSubjectContext @ 0x1404C18F0 (SeCreateClientSecurityFromSubjectContext.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x14042536C (RtlIsValidProcessTrustLabelSid.c)
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
  if ( a1 && !(unsigned __int8)RtlIsValidProcessTrustLabelSid(a1, a2, a3, a3) )
    return 3221225485LL;
  if ( !v4 )
  {
LABEL_3:
    *v3 = 1;
    return 0LL;
  }
  if ( !(unsigned __int8)RtlIsValidProcessTrustLabelSid(v4, a2, a3, v3) )
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

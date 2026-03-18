/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x1404B7F6C
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140012F20 (SepLocateTokenTrustLevel.c)
 *     SeGetTrustLabelAce @ 0x14008DA70 (SeGetTrustLabelAce.c)
 *     RtlSidDominatesForTrust @ 0x1400D3CA0 (RtlSidDominatesForTrust.c)
 */

char __fastcall SeShouldCheckForAccessRightsFromParent(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // di
  __int64 TrustLabelAce; // rax
  __int64 v7; // rbx
  __int64 TokenTrustLevel; // rax
  char v9; // [rsp+48h] [rbp+20h] BYREF

  v4 = 1;
  TrustLabelAce = SeGetTrustLabelAce(a2);
  if ( TrustLabelAce )
  {
    v7 = TrustLabelAce + 8;
    if ( TrustLabelAce != -8 )
    {
      v9 = 0;
      TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)(a3 + 32));
      RtlSidDominatesForTrust(TokenTrustLevel, v7, &v9);
      return v9;
    }
  }
  return v4;
}

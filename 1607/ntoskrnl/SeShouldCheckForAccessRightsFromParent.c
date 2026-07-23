/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x1404A234C
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140012AA0 (SepLocateTokenTrustLevel.c)
 *     SeGetTrustLabelAce @ 0x14008D1D0 (SeGetTrustLabelAce.c)
 *     RtlSidDominatesForTrust @ 0x1400D1B40 (RtlSidDominatesForTrust.c)
 */

BOOLEAN __fastcall SeShouldCheckForAccessRightsFromParent(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // di
  __int64 TrustLabelAce; // rax
  void *v7; // rbx
  void *TokenTrustLevel; // rax
  BOOLEAN DominatesTrust; // [rsp+48h] [rbp+20h] BYREF

  v4 = 1;
  TrustLabelAce = SeGetTrustLabelAce(a2);
  if ( TrustLabelAce )
  {
    v7 = (void *)(TrustLabelAce + 8);
    if ( TrustLabelAce != -8 )
    {
      DominatesTrust = 0;
      TokenTrustLevel = (void *)SepLocateTokenTrustLevel((__int64 *)(a3 + 32));
      RtlSidDominatesForTrust(TokenTrustLevel, v7, &DominatesTrust);
      return DominatesTrust;
    }
  }
  return v4;
}

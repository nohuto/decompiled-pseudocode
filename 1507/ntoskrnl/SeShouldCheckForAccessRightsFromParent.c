/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x1404CA1A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140043E50 (RtlSidDominatesForTrust.c)
 *     SepLocateTokenTrustLevel @ 0x140045658 (SepLocateTokenTrustLevel.c)
 *     SepGetProcessTrustLabelAce @ 0x1400CE7B0 (SepGetProcessTrustLabelAce.c)
 */

BOOLEAN __fastcall SeShouldCheckForAccessRightsFromParent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ProcessTrustLabelAce; // rax
  void *v6; // rdi
  void *TokenTrustLevel; // rax
  BOOLEAN DominatesTrust; // [rsp+48h] [rbp+20h] BYREF

  ProcessTrustLabelAce = SepGetProcessTrustLabelAce(a2);
  if ( !ProcessTrustLabelAce )
    return 1;
  v6 = (void *)(ProcessTrustLabelAce + 8);
  if ( ProcessTrustLabelAce == -8 )
    return 1;
  DominatesTrust = 0;
  TokenTrustLevel = (void *)SepLocateTokenTrustLevel((__int64 *)(a3 + 32));
  RtlSidDominatesForTrust(TokenTrustLevel, v6, &DominatesTrust);
  return DominatesTrust;
}

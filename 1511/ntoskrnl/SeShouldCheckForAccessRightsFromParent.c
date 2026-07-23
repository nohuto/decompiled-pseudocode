/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x1404352C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSidDominatesForTrust @ 0x14007A050 (RtlSidDominatesForTrust.c)
 *     SepGetProcessTrustLabelAce @ 0x14008DE80 (SepGetProcessTrustLabelAce.c)
 *     SepLocateTokenTrustLevel @ 0x1400E194C (SepLocateTokenTrustLevel.c)
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

/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x1404352C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSidDominatesForTrust @ 0x14007A050 (RtlSidDominatesForTrust.c)
 *     SepGetProcessTrustLabelAce @ 0x14008DE80 (SepGetProcessTrustLabelAce.c)
 *     SepLocateTokenTrustLevel @ 0x1400E194C (SepLocateTokenTrustLevel.c)
 */

char __fastcall SeShouldCheckForAccessRightsFromParent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ProcessTrustLabelAce; // rax
  __int64 v6; // rdi
  __int64 TokenTrustLevel; // rax
  char v8; // [rsp+48h] [rbp+20h] BYREF

  ProcessTrustLabelAce = SepGetProcessTrustLabelAce(a2);
  if ( !ProcessTrustLabelAce )
    return 1;
  v6 = ProcessTrustLabelAce + 8;
  if ( ProcessTrustLabelAce == -8 )
    return 1;
  v8 = 0;
  TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)(a3 + 32));
  RtlSidDominatesForTrust(TokenTrustLevel, v6, &v8);
  return v8;
}

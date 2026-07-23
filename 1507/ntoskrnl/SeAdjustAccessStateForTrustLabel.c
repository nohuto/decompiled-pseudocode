/*
 * XREFs of SeAdjustAccessStateForTrustLabel @ 0x1404CA0F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSidDominatesForTrust @ 0x140043E50 (RtlSidDominatesForTrust.c)
 *     SepLocateTokenTrustLevel @ 0x140045658 (SepLocateTokenTrustLevel.c)
 *     SepGetProcessTrustLabelAce @ 0x1400CE7B0 (SepGetProcessTrustLabelAce.c)
 */

int __fastcall SeAdjustAccessStateForTrustLabel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ProcessTrustLabelAce; // rax
  void *v5; // rbp
  int v6; // esi
  int v7; // edi
  int v8; // esi
  void *TokenTrustLevel; // rax
  int v10; // ecx
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(ProcessTrustLabelAce) = *(_DWORD *)(a3 + 12);
  DominatesTrust = 0;
  if ( (ProcessTrustLabelAce & 6) != 0 )
  {
    ProcessTrustLabelAce = SepGetProcessTrustLabelAce(a2);
    if ( ProcessTrustLabelAce )
    {
      v5 = (void *)(ProcessTrustLabelAce + 8);
      v6 = ~*(_DWORD *)(ProcessTrustLabelAce + 4);
      v7 = v6 & 0x11F0116;
      v8 = v6 & 0x1120089;
      if ( ProcessTrustLabelAce != -8 )
      {
        TokenTrustLevel = (void *)SepLocateTokenTrustLevel((__int64 *)(a3 + 32));
        LODWORD(ProcessTrustLabelAce) = RtlSidDominatesForTrust(TokenTrustLevel, v5, &DominatesTrust);
        if ( !DominatesTrust )
        {
          v10 = *(_DWORD *)(a3 + 12);
          LODWORD(ProcessTrustLabelAce) = *(_DWORD *)(a3 + 20);
          if ( (v10 & 2) != 0 )
            LODWORD(ProcessTrustLabelAce) = ~v8 & ProcessTrustLabelAce;
          if ( (v10 & 4) != 0 )
            LODWORD(ProcessTrustLabelAce) = ~v7 & ProcessTrustLabelAce;
          *(_DWORD *)(a3 + 20) = ProcessTrustLabelAce;
        }
      }
    }
  }
  return ProcessTrustLabelAce;
}

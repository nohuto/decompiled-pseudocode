/*
 * XREFs of SeAdjustAccessStateForTrustLabel @ 0x1404A22AC
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140012AA0 (SepLocateTokenTrustLevel.c)
 *     SeGetTrustLabelAce @ 0x14008D1D0 (SeGetTrustLabelAce.c)
 *     RtlSidDominatesForTrust @ 0x1400D1B40 (RtlSidDominatesForTrust.c)
 */

int __fastcall SeAdjustAccessStateForTrustLabel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 TrustLabelAce; // rax
  void *v5; // rbp
  int v6; // esi
  int v7; // ebx
  int v8; // esi
  void *TokenTrustLevel; // rax
  int v10; // ecx
  BOOLEAN DominatesTrust; // [rsp+40h] [rbp+18h] BYREF

  DominatesTrust = 0;
  LODWORD(TrustLabelAce) = *(_DWORD *)(a3 + 12);
  if ( (TrustLabelAce & 6) != 0 )
  {
    TrustLabelAce = SeGetTrustLabelAce(a2);
    if ( TrustLabelAce )
    {
      v5 = (void *)(TrustLabelAce + 8);
      v6 = ~*(_DWORD *)(TrustLabelAce + 4);
      v7 = v6 & 0x11F0116;
      v8 = v6 & 0x1120089;
      if ( TrustLabelAce != -8 )
      {
        TokenTrustLevel = (void *)SepLocateTokenTrustLevel((__int64 *)(a3 + 32));
        LODWORD(TrustLabelAce) = RtlSidDominatesForTrust(TokenTrustLevel, v5, &DominatesTrust);
        if ( !DominatesTrust )
        {
          v10 = *(_DWORD *)(a3 + 12);
          LODWORD(TrustLabelAce) = *(_DWORD *)(a3 + 20);
          if ( (v10 & 2) != 0 )
            LODWORD(TrustLabelAce) = ~v8 & TrustLabelAce;
          if ( (v10 & 4) != 0 )
            LODWORD(TrustLabelAce) = ~v7 & TrustLabelAce;
          *(_DWORD *)(a3 + 20) = TrustLabelAce;
        }
      }
    }
  }
  return TrustLabelAce;
}

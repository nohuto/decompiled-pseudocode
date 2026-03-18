/*
 * XREFs of SeAdjustAccessStateForTrustLabel @ 0x1404B7ECC
 * Callers:
 *     <none>
 * Callees:
 *     SepLocateTokenTrustLevel @ 0x140012F20 (SepLocateTokenTrustLevel.c)
 *     SeGetTrustLabelAce @ 0x14008DA70 (SeGetTrustLabelAce.c)
 *     RtlSidDominatesForTrust @ 0x1400D3CA0 (RtlSidDominatesForTrust.c)
 */

__int64 __fastcall SeAdjustAccessStateForTrustLabel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rbp
  int v6; // esi
  int v7; // ebx
  int v8; // esi
  __int64 TokenTrustLevel; // rax
  int v10; // ecx
  char v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0;
  result = *(unsigned int *)(a3 + 12);
  if ( (result & 6) != 0 )
  {
    result = SeGetTrustLabelAce(a2);
    if ( result )
    {
      v5 = result + 8;
      v6 = ~*(_DWORD *)(result + 4);
      v7 = v6 & 0x11F0116;
      v8 = v6 & 0x1120089;
      if ( result != -8 )
      {
        TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)(a3 + 32));
        result = RtlSidDominatesForTrust(TokenTrustLevel, v5, &v11);
        if ( !v11 )
        {
          v10 = *(_DWORD *)(a3 + 12);
          result = *(unsigned int *)(a3 + 20);
          if ( (v10 & 2) != 0 )
            result = ~v8 & (unsigned int)result;
          if ( (v10 & 4) != 0 )
            result = ~v7 & (unsigned int)result;
          *(_DWORD *)(a3 + 20) = result;
        }
      }
    }
  }
  return result;
}

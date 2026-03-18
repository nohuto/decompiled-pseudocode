/*
 * XREFs of ?OverwriteSamplerAndBlendModes@CBrushRenderingEffect@@UEAAXQEBVSamplerMode@@_NW4Enum@BlendMode@@@Z @ 0x180118620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CBrushRenderingEffect::OverwriteSamplerAndBlendModes(__int64 a1, __int64 a2, char a3)
{
  char v4; // r8
  char v5; // cl
  char result; // al
  __int16 v7; // [rsp+18h] [rbp+18h]

  if ( a3 )
  {
    v4 = *(_BYTE *)(a2 + 2);
    HIBYTE(v7) = *(_BYTE *)(a2 + 1);
    LOBYTE(v7) = 0;
    *(_WORD *)(a1 + 16) = v7;
    *(_BYTE *)(a1 + 18) = v4;
    v5 = *(_BYTE *)(a2 + 5);
    HIBYTE(v7) = *(_BYTE *)(a2 + 4);
    LOBYTE(v7) = 0;
    result = 0;
    *(_WORD *)(a1 + 19) = v7;
    *(_BYTE *)(a1 + 21) = v5;
  }
  else
  {
    *(_WORD *)(a1 + 16) = *(_WORD *)a2;
    *(_BYTE *)(a1 + 18) = *(_BYTE *)(a2 + 2);
    *(_WORD *)(a1 + 19) = *(_WORD *)(a2 + 3);
    result = *(_BYTE *)(a2 + 5);
    *(_BYTE *)(a1 + 21) = result;
  }
  return result;
}

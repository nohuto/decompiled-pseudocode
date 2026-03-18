/*
 * XREFs of FillTriangle @ 0x1C024AAA8
 * Callers:
 *     DrawEdge @ 0x1C0071B9C (DrawEdge.c)
 * Callees:
 *     DrawDiagonalLine @ 0x1C024A194 (DrawDiagonalLine.c)
 */

_BOOL8 __fastcall FillTriangle(HDC a1, __m128i *a2, __int64 a3, int a4)
{
  int v5; // eax
  int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // r9

  v5 = a4 & 0x1F;
  if ( v5 == 19 || v5 == 28 )
    v8 = -1;
  else
    v8 = 1;
  v9 = GreSelectBrush(a1, a3);
  DrawDiagonalLine(a1, a2, v8, v10, a4);
  return GreSelectBrush(a1, v9) != 0;
}

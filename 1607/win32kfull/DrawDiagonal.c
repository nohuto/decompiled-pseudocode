/*
 * XREFs of DrawDiagonal @ 0x1C0246524
 * Callers:
 *     DrawEdge @ 0x1C006E2BC (DrawEdge.c)
 * Callees:
 *     DrawDiagonalLine @ 0x1C02465E0 (DrawDiagonalLine.c)
 */

_BOOL8 __fastcall DrawDiagonal(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  int v7; // edi
  __int64 v8; // r14
  int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // edx

  if ( (a5 & 8) != 0 )
    a3 = a4;
  if ( (a5 & 0x1F) == 0x13 || (a5 & 0x1F) == 0x1C )
    v7 = -1;
  else
    v7 = 1;
  v8 = GreSelectBrush(a1, a3);
  v10 = DrawDiagonalLine(a1, (_DWORD)a2, v7, v9, a5 & 0xFFFFF7FF);
  if ( (a5 & 2) != 0 )
    *a2 += (unsigned __int16)v10;
  else
    a2[2] -= (unsigned __int16)v10;
  v11 = HIWORD(v10);
  if ( (a5 & 4) != 0 )
    a2[1] += v11;
  else
    a2[3] -= v11;
  return GreSelectBrush(a1, v8) != 0;
}

/*
 * XREFs of DrawDiagonal @ 0x1C024A0D4
 * Callers:
 *     DrawEdge @ 0x1C0071B9C (DrawEdge.c)
 * Callees:
 *     DrawDiagonalLine @ 0x1C024A194 (DrawDiagonalLine.c)
 */

__int64 __fastcall DrawDiagonal(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // edi
  int v8; // esi
  __int64 v9; // r15
  int v10; // r9d
  unsigned int v11; // eax
  unsigned int v12; // ecx

  v5 = 0;
  if ( (a5 & 8) != 0 )
    a3 = a4;
  if ( (a5 & 0x1F) == 0x13 || (a5 & 0x1F) == 0x1C )
    v8 = -1;
  else
    v8 = 1;
  v9 = GreSelectBrush(a1, a3);
  v11 = DrawDiagonalLine(a1, (_DWORD)a2, v8, v10, a5 & 0xFFFFF7FF);
  if ( (a5 & 2) != 0 )
    *a2 += (unsigned __int16)v11;
  else
    a2[2] -= (unsigned __int16)v11;
  v12 = HIWORD(v11);
  if ( (a5 & 4) != 0 )
    a2[1] += v12;
  else
    a2[3] -= v12;
  LOBYTE(v5) = GreSelectBrush(a1, v9) != 0;
  return v5;
}

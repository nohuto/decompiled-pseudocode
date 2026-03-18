/*
 * XREFs of AddReversal @ 0x1C00C3D6C
 * Callers:
 *     fsc_AddYReversal @ 0x1C00C1CE8 (fsc_AddYReversal.c)
 *     fsc_MeasureGlyph @ 0x1C00C3070 (fsc_MeasureGlyph.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddReversal(_QWORD *a1, __int64 a2, int a3, __int16 a4)
{
  int v4; // r10d
  __int64 result; // rax

  v4 = ((a4 >> 1) + a3 + 32) >> 6;
  while ( (__int16)v4 > *(__int16 *)*a1 )
    a1 = (_QWORD *)(*a1 + 8LL);
  *(_WORD *)a2 = v4;
  *(_WORD *)(a2 + 2) = -a4;
  result = *a1;
  *(_QWORD *)(a2 + 8) = *a1;
  *a1 = a2;
  return result;
}

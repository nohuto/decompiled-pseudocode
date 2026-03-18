/*
 * XREFs of MappingBGRF @ 0x1400F03F4
 * Callers:
 *     RepDIB_CY @ 0x1400F06B0 (RepDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1400F09B0 (ShrinkDIB_CY_SrkCX.c)
 *     BltDIB_CY @ 0x1400F16E0 (BltDIB_CY.c)
 *     FastExpAA_CY @ 0x1400F20D0 (FastExpAA_CY.c)
 *     ShrinkDIB_CY @ 0x1400F3480 (ShrinkDIB_CY.c)
 *     GrayShrinkDIB_CY @ 0x1400F3CD0 (GrayShrinkDIB_CY.c)
 *     SkipDIB_CY @ 0x1400F4320 (SkipDIB_CY.c)
 *     ExpandDIB_CY @ 0x140199E90 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1401DF950 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x140268CD0 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1403097F0 (GrayExpandDIB_CY_ExpCX.c)
 *     TileDIB_CY @ 0x14030A360 (TileDIB_CY.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MappingBGRF(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  unsigned int v4; // ebx
  unsigned __int8 *v5; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int8 result; // al

  v4 = *a4;
  v5 = a4 + 1;
  do
  {
    v7 = ((__int64)(BGR555Idx[a1[2]] - (unsigned __int64)v4) >> 8) | (4 * (BGR555Idx[*a1] - (_WORD)v4)) & 0x7C00 | (unsigned __int64)(((BGR555Idx[a1[1]] - v4) >> 3) & 0x3E0);
    v8 = a3 + 2 * v7;
    *(_WORD *)a1 = *(_WORD *)(v7 + v8);
    result = *(_BYTE *)(v7 + v8 + 2);
    a1[2] = result;
    v4 = *v5++;
    if ( !v4 )
    {
      v5 -= 66;
      v4 = *v5;
    }
    a1 += 4;
  }
  while ( (unsigned __int64)a1 < a2 );
  return result;
}

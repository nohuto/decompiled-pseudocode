/*
 * XREFs of fsc_AddYReversal @ 0x1C00B1458
 * Callers:
 *     fsc_CheckYReversal @ 0x1C00B13B0 (fsc_CheckYReversal.c)
 *     fsc_MeasureGlyph @ 0x1C00B2BF0 (fsc_MeasureGlyph.c)
 * Callees:
 *     AddReversal @ 0x1C00B38EC (AddReversal.c)
 */

__int64 __fastcall fsc_AddYReversal(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r11

  v4 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int64)(v4 + 16) > *(_QWORD *)(a1 + 24) )
    return 6656LL;
  AddReversal(a1, v4, a2, a3);
  *(_QWORD *)(v5 + 16) += 16LL;
  return 0LL;
}

/*
 * XREFs of scl_PostTransformGlyph @ 0x1C01259BC
 * Callers:
 *     fsg_GridFit @ 0x1C00C7CF8 (fsg_GridFit.c)
 * Callees:
 *     mth_IntelMul @ 0x1C00C7178 (mth_IntelMul.c)
 */

void __fastcall scl_PostTransformGlyph(unsigned int *a1, __int64 a2, int *a3)
{
  int v3; // eax

  v3 = *(__int16 *)(a2 + 80) - 1;
  if ( a1[118] )
    mth_IntelMul(
      (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 64) + 2LL * v3) + 9),
      *(char **)a2,
      *(char **)(a2 + 8),
      a3,
      a1[94],
      a1[95]);
  else
    mth_IntelMul(
      (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 64) + 2LL * v3) + 9),
      *(char **)a2,
      *(char **)(a2 + 8),
      a3,
      a1[96],
      a1[97]);
}

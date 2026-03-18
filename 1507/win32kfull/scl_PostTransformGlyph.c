/*
 * XREFs of scl_PostTransformGlyph @ 0x1C00FA5AC
 * Callers:
 *     fsg_GridFit @ 0x1C00B56AC (fsg_GridFit.c)
 * Callees:
 *     mth_IntelMul @ 0x1C00B4E24 (mth_IntelMul.c)
 */

void __fastcall scl_PostTransformGlyph(unsigned int *a1, __int64 a2, int *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a2 + 64);
  if ( a1[118] )
    mth_IntelMul(
      (unsigned __int16)(*(_WORD *)(v3 + 2LL * *(__int16 *)(a2 + 80) - 2) + 9),
      *(char **)a2,
      *(char **)(a2 + 8),
      a3,
      a1[94],
      a1[95]);
  else
    mth_IntelMul(
      (unsigned __int16)(*(_WORD *)(v3 + 2LL * *(__int16 *)(a2 + 80) - 2) + 9),
      *(char **)a2,
      *(char **)(a2 + 8),
      a3,
      a1[96],
      a1[97]);
}

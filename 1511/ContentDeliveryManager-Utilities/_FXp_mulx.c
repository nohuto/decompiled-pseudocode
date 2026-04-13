/*
 * XREFs of _FXp_mulx @ 0x1800255F8
 * Callers:
 *     _Stofx @ 0x1800235F0 (_Stofx.c)
 *     _FDtento @ 0x18002583C (_FDtento.c)
 * Callees:
 *     _FXp_addx @ 0x1800252E8 (_FXp_addx.c)
 *     _FXp_mulh @ 0x180025410 (_FXp_mulh.c)
 *     memcpy_0 @ 0x1800280A8 (memcpy_0.c)
 */

float *__fastcall FXp_mulx(float *a1, int a2, float *a3, int a4, char *Src)
{
  __int64 v5; // rbp
  __int64 v7; // rdi
  char *v9; // r13
  __int64 i; // r14

  v5 = a4;
  v7 = a2;
  if ( a2 && a4 )
  {
    if ( *a3 == 0.0 || a3[1] == 0.0 )
    {
      FXp_mulh(a1, a2, *a3);
    }
    else
    {
      v9 = &Src[4 * a2];
      memcpy_0(Src, a1, 4LL * a2);
      FXp_mulh(a1, v7, *a3);
      for ( i = 1LL; i < v5 && a3[i] != 0.0; ++i )
      {
        memcpy_0(v9, Src, 4 * v7);
        FXp_mulh((float *)v9, v7, a3[i]);
        FXp_addx(a1, v7, (float *)v9, v7);
      }
    }
  }
  return a1;
}

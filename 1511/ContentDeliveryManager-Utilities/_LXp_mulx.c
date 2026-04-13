/*
 * XREFs of _LXp_mulx @ 0x180025F60
 * Callers:
 *     _Stoldx @ 0x180023F40 (_Stoldx.c)
 *     _LDtento @ 0x1800261A8 (_LDtento.c)
 * Callees:
 *     _LXp_addx @ 0x180025CFC (_LXp_addx.c)
 *     _LXp_mulh @ 0x180025D74 (_LXp_mulh.c)
 *     memcpy_0 @ 0x1800280A8 (memcpy_0.c)
 */

long double *__fastcall LXp_mulx(long double *a1, int a2, double *a3, int a4, char *Src)
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
      LXp_mulh(a1, a2, *a3);
    }
    else
    {
      v9 = &Src[8 * a2];
      memcpy_0(Src, a1, 8LL * a2);
      LXp_mulh(a1, v7, *a3);
      for ( i = 1LL; i < v5 && a3[i] != 0.0; ++i )
      {
        memcpy_0(v9, Src, 8 * v7);
        LXp_mulh((long double *)v9, v7, a3[i]);
        LXp_addx(a1, v7, (double *)v9, v7);
      }
    }
  }
  return a1;
}

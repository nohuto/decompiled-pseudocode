/*
 * XREFs of _Xp_mulx @ 0x180056FF8
 * Callers:
 *     _Stodx @ 0x180054C14 (_Stodx.c)
 *     _Dtento @ 0x180057240 (_Dtento.c)
 * Callees:
 *     _Xp_addx @ 0x180056CD4 (_Xp_addx.c)
 *     _Xp_mulh @ 0x180056E04 (_Xp_mulh.c)
 *     memcpy_0 @ 0x180058E98 (memcpy_0.c)
 */

double *__fastcall Xp_mulx(double *a1, int a2, double *a3, int a4, char *Src)
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
      Xp_mulh(a1, a2, *a3);
    }
    else
    {
      v9 = &Src[8 * a2];
      memcpy_0(Src, a1, 8LL * a2);
      Xp_mulh(a1, v7, *a3);
      for ( i = 1LL; i < v5 && a3[i] != 0.0; ++i )
      {
        memcpy_0(v9, Src, 8 * v7);
        Xp_mulh((double *)v9, v7, a3[i]);
        Xp_addx(a1, v7, (double *)v9, v7);
      }
    }
  }
  return a1;
}

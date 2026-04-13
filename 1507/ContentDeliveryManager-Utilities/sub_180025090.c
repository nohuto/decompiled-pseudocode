/*
 * XREFs of sub_180025090 @ 0x180025090
 * Callers:
 *     unknown_libname_9 @ 0x1800227D0 (unknown_libname_9.c)
 *     sub_1800252D8 @ 0x1800252D8 (sub_1800252D8.c)
 * Callees:
 *     sub_180024D74 @ 0x180024D74 (sub_180024D74.c)
 *     sub_180024EA4 @ 0x180024EA4 (sub_180024EA4.c)
 *     memcpy @ 0x180026528 (memcpy.c)
 */

void *__fastcall sub_180025090(void *Src, int a2, double *a3, int a4, char *Srca)
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
      sub_180024EA4((__int64)Src, a2, *a3);
    }
    else
    {
      v9 = &Srca[8 * a2];
      memcpy(Srca, Src, 8LL * a2);
      sub_180024EA4((__int64)Src, v7, *a3);
      for ( i = 1LL; i < v5 && a3[i] != 0.0; ++i )
      {
        memcpy(v9, Srca, 8 * v7);
        sub_180024EA4((__int64)v9, v7, a3[i]);
        sub_180024D74((__int64)Src, v7, (double *)v9, v7);
      }
    }
  }
  return Src;
}

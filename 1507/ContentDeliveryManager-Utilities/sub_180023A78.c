/*
 * XREFs of sub_180023A78 @ 0x180023A78
 * Callers:
 *     sub_180021A70 @ 0x180021A70 (sub_180021A70.c)
 *     sub_180023CBC @ 0x180023CBC (sub_180023CBC.c)
 * Callees:
 *     sub_180023768 @ 0x180023768 (sub_180023768.c)
 *     sub_180023890 @ 0x180023890 (sub_180023890.c)
 *     memcpy @ 0x180026528 (memcpy.c)
 */

void *__fastcall sub_180023A78(void *Src, int a2, float *a3, int a4, char *Srca)
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
      sub_180023890((__int64)Src, a2, *a3);
    }
    else
    {
      v9 = &Srca[4 * a2];
      memcpy(Srca, Src, 4LL * a2);
      sub_180023890((__int64)Src, v7, *a3);
      for ( i = 1LL; i < v5 && a3[i] != 0.0; ++i )
      {
        memcpy(v9, Srca, 4 * v7);
        sub_180023890((__int64)v9, v7, a3[i]);
        sub_180023768((__int64)Src, v7, (float *)v9, v7);
      }
    }
  }
  return Src;
}

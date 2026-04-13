/*
 * XREFs of sub_180024EA4 @ 0x180024EA4
 * Callers:
 *     sub_180025090 @ 0x180025090 (sub_180025090.c)
 * Callees:
 *     sub_180024780 @ 0x180024780 (sub_180024780.c)
 *     sub_180024A0C @ 0x180024A0C (sub_180024A0C.c)
 *     sub_180025520 @ 0x180025520 (sub_180025520.c)
 *     unknown_libname_11 @ 0x1800258D4 (unknown_libname_11.c)
 *     sub_180025938 @ 0x180025938 (sub_180025938.c)
 *     sub_180025A58 @ 0x180025A58 (sub_180025A58.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180024EA4(__int64 a1, int a2, double a3)
{
  __int16 v5; // ax
  __int16 v6; // si
  int v7; // r13d
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rsi
  char *v11; // r12
  double *v12; // rcx
  double v13; // xmm0_8
  __int64 i; // rax
  double v15; // xmm0_8
  __int16 v17; // [rsp+20h] [rbp-50h] BYREF
  double v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-40h]
  double v20[4]; // [rsp+38h] [rbp-38h] BYREF

  if ( a2 > 0 )
  {
    v20[0] = a3 * *(double *)a1;
    v5 = unknown_libname_11(v20);
    v6 = v5;
    if ( v5 >= 0 )
    {
      if ( v5 == 2 )
        sub_180025520(1LL);
      *(double *)a1 = v20[0];
      if ( v6 > 0 && a2 > 1 )
        *(_QWORD *)(a1 + 8) = 0LL;
      return a1;
    }
    *(_QWORD *)a1 = 0LL;
  }
  v7 = 0;
  v8 = 1;
  if ( a2 > 0 )
  {
    v9 = 0LL;
    v10 = 1LL;
    v19 = 0LL;
    v11 = (char *)v20 - a1;
    do
    {
      if ( v8 < 4 )
      {
        v12 = (double *)(a1 + 8 * (v10 + v9));
        while ( v8 + v7 < a2 )
        {
          v13 = *v12;
          if ( *v12 == 0.0 )
            break;
          *v12 = 0.0;
          ++v8;
          ++v10;
          *(double *)((char *)v12++ + (_QWORD)v11) = v13 * a3;
          if ( v8 >= 4 )
            goto LABEL_18;
        }
        v20[v10] = 0.0;
        v10 = 8LL;
        v8 = 8;
      }
LABEL_18:
      if ( v20[0] == 0.0 )
        break;
      v18 = v20[0];
      sub_180025A58(&v17, &v18);
      sub_180025938(&v18, 26LL);
      sub_180024780(&v18, v17);
      sub_180024A0C(a1, a2, v18);
      sub_180024A0C(a1, a2, v20[0] - v18);
      for ( i = 1LL; i < v10; ++i )
      {
        v15 = v20[i];
        v20[i - 1] = v15;
        if ( v15 == 0.0 )
          break;
      }
      ++v7;
      v9 = v19 + 1;
      v11 -= 8;
      --v8;
      ++v19;
      --v10;
    }
    while ( v7 < a2 );
  }
  return a1;
}

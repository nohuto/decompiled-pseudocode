/*
 * XREFs of _LXp_mulh @ 0x180025D74
 * Callers:
 *     _LXp_mulx @ 0x180025F60 (_LXp_mulx.c)
 * Callees:
 *     _LDscale @ 0x180025988 (_LDscale.c)
 *     _LXp_addh @ 0x180025994 (_LXp_addh.c)
 *     _Feraise @ 0x1800270A0 (_Feraise.c)
 *     _LDtest @ 0x18002728C (_LDtest.c)
 *     _LDint @ 0x180027298 (_LDint.c)
 *     _LDunscale @ 0x1800272A4 (_LDunscale.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

long double *__fastcall LXp_mulh(long double *a1, int a2, double a3)
{
  __int16 v5; // ax
  __int16 v6; // si
  int v7; // r13d
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rsi
  signed __int64 v11; // r12
  double *v12; // rcx
  double v13; // xmm0_8
  __int64 i; // rax
  double v15; // xmm0_8
  __int16 v17; // [rsp+20h] [rbp-50h] BYREF
  double v18; // [rsp+28h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-40h]
  long double v20[4]; // [rsp+38h] [rbp-38h] BYREF

  if ( a2 > 0 )
  {
    v20[0] = a3 * *a1;
    v5 = LDtest(v20);
    v6 = v5;
    if ( v5 >= 0 )
    {
      if ( v5 == 2 )
        Feraise(1);
      *a1 = v20[0];
      if ( v6 > 0 && a2 > 1 )
        a1[1] = 0.0;
      return a1;
    }
    *a1 = 0.0;
  }
  v7 = 0;
  v8 = 1;
  if ( a2 > 0 )
  {
    v9 = 0LL;
    v10 = 1LL;
    v19 = 0LL;
    v11 = (char *)v20 - (char *)a1;
    do
    {
      if ( v8 < 4 )
      {
        v12 = &a1[v10 + v9];
        while ( v8 + v7 < a2 )
        {
          v13 = *v12;
          if ( *v12 == 0.0 )
            break;
          *v12 = 0.0;
          ++v8;
          ++v10;
          *(double *)((char *)v12++ + v11) = v13 * a3;
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
      LDunscale(&v17, &v18);
      LDint(&v18, 26LL);
      LDscale((__int64)&v18, (unsigned int)v17);
      LXp_addh(a1, a2, v18);
      LXp_addh(a1, a2, v20[0] - v18);
      for ( i = 1LL; i < v10; ++i )
      {
        v15 = v20[i];
        v20[i - 1] = v15;
        if ( v15 == 0.0 )
          break;
      }
      ++v7;
      v9 = v19 + 1;
      v11 -= 8LL;
      --v8;
      ++v19;
      --v10;
    }
    while ( v7 < a2 );
  }
  return a1;
}

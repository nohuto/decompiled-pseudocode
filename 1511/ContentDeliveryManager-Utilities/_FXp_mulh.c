/*
 * XREFs of _FXp_mulh @ 0x180025410
 * Callers:
 *     _FXp_mulx @ 0x1800255F8 (_FXp_mulx.c)
 *     _FXp_setn @ 0x1800256FC (_FXp_setn.c)
 * Callees:
 *     _FDscale @ 0x180024DB0 (_FDscale.c)
 *     _FXp_addh @ 0x180024F8C (_FXp_addh.c)
 *     _Feraise @ 0x1800270A0 (_Feraise.c)
 *     _FDtest @ 0x1800270D4 (_FDtest.c)
 *     _FDint @ 0x180027120 (_FDint.c)
 *     _FDunscale @ 0x1800271FC (_FDunscale.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

float *__fastcall FXp_mulh(float *a1, int a2, float a3)
{
  __int16 v5; // ax
  __int16 v6; // si
  int v7; // r13d
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rsi
  signed __int64 v11; // r12
  float *v12; // rcx
  float v13; // xmm0_4
  __int64 i; // rax
  float v15; // xmm0_4
  float v17; // [rsp+20h] [rbp-40h] BYREF
  __int16 v18; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v19; // [rsp+28h] [rbp-38h]
  float v20[4]; // [rsp+30h] [rbp-30h] BYREF

  if ( a2 > 0 )
  {
    v20[0] = a3 * *a1;
    v5 = FDtest(v20);
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
          *(float *)((char *)v12++ + v11) = v13 * a3;
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
      v17 = v20[0];
      FDunscale(&v18, &v17);
      FDint(&v17, 12LL);
      FDscale((unsigned __int16 *)&v17, v18);
      FXp_addh(a1, a2, v17);
      FXp_addh(a1, a2, v20[0] - v17);
      for ( i = 1LL; i < v10; ++i )
      {
        v15 = v20[i];
        v20[i - 1] = v15;
        if ( v15 == 0.0 )
          break;
      }
      ++v7;
      v9 = v19 + 1;
      v11 -= 4LL;
      --v8;
      ++v19;
      --v10;
    }
    while ( v7 < a2 );
  }
  return a1;
}

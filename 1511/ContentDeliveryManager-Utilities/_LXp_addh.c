/*
 * XREFs of _LXp_addh @ 0x180025994
 * Callers:
 *     _LXp_addx @ 0x180025CFC (_LXp_addx.c)
 *     _LXp_mulh @ 0x180025D74 (_LXp_mulh.c)
 * Callees:
 *     _LDscale @ 0x180025988 (_LDscale.c)
 *     _Feraise @ 0x1800270A0 (_Feraise.c)
 *     _LDtest @ 0x18002728C (_LDtest.c)
 *     _LDint @ 0x180027298 (_LDint.c)
 *     _LDunscale @ 0x1800272A4 (_LDunscale.c)
 */

long double *__fastcall LXp_addh(long double *a1, int a2, double a3)
{
  __int64 v4; // rsi
  __int16 v5; // ax
  __int16 v6; // ax
  int v7; // r12d
  int v8; // ebx
  __int64 v9; // r15
  long double *v10; // r13
  long double *v11; // r14
  __int16 v12; // ax
  double v13; // xmm1_8
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  __int64 i; // rdx
  double v18; // xmm1_8
  int v19; // ecx
  double *v20; // rax
  double v21; // xmm0_8
  __int64 v22; // rdx
  long double v23; // xmm0_8
  int v24; // ecx
  double *v25; // rax
  double v26; // xmm0_8
  int v27; // r12d
  long double *v28; // rbx
  double v29; // xmm1_8
  double v30; // xmm0_8
  double v32; // [rsp+20h] [rbp-28h] BYREF
  double v33; // [rsp+28h] [rbp-20h] BYREF
  __int16 v34; // [rsp+90h] [rbp+48h] BYREF
  __int16 v35; // [rsp+98h] [rbp+50h] BYREF
  double v36; // [rsp+A0h] [rbp+58h] BYREF
  int v37; // [rsp+A8h] [rbp+60h]

  v36 = a3;
  v32 = a3;
  v4 = a2;
  if ( !a2 )
    return a1;
  v5 = LDunscale(&v34, &v32);
  if ( v5 <= 0 )
  {
    if ( v5 >= 0 )
      return a1;
    v7 = 2048;
    v8 = 0;
    if ( (int)v4 <= 0 )
      return a1;
    v9 = 0LL;
    v10 = a1 - 1;
    v11 = a1;
    while ( 1 )
    {
      v33 = *v11;
      v12 = LDunscale(&v35, &v33);
      if ( v12 > 0 )
        return a1;
      if ( !v12 )
      {
        a1[v8] = v36;
        if ( v8 + 1 < (int)v4 )
          a1[v8 + 1] = 0.0;
        return a1;
      }
      v13 = v36;
      v14 = v35 - v34;
      if ( v14 > -26 || v36 == 0.0 )
      {
        if ( v14 < 26 || v36 == 0.0 )
        {
          v18 = v36 + *v11;
          *v11 = v18;
          if ( v18 == 0.0 )
          {
            v19 = v8;
            v20 = v11;
            do
            {
              ++v19;
              ++v20;
              if ( v19 >= (int)v4 )
                break;
              v21 = *v20;
              *(v20 - 1) = *v20;
            }
            while ( v21 != 0.0 );
            a1[v4 - 1] = 0.0;
            v18 = *v11;
            if ( *v11 == 0.0 )
              return a1;
          }
          v36 = v18;
          LDunscale(&v34, &v36);
          v22 = (unsigned int)v34;
          if ( v7 - 26 < (int)v22 )
          {
            LOWORD(v22) = v34 - v7 + 26;
            LDint(&v36, v22);
            LDscale((__int64)&v36, (unsigned int)v34);
            v23 = *v11 - v36;
            *v11 = v23;
            if ( v23 == 0.0 )
            {
              v24 = v8;
              v25 = v11;
              do
              {
                ++v24;
                ++v25;
                if ( v24 >= (int)v4 )
                  break;
                v26 = *v25;
                *(v25 - 1) = *v25;
              }
              while ( v26 != 0.0 );
              a1[v4 - 1] = 0.0;
            }
            --v9;
            --v10;
            --v11;
            if ( --v8 )
            {
              v32 = *v10;
              LDunscale(&v35, &v32);
              v7 = v35;
            }
            else
            {
              v7 = 2048;
            }
            goto LABEL_50;
          }
          v27 = v8 + 1;
          if ( v8 + 1 == (_DWORD)v4 )
            return a1;
          v36 = *v11;
          v28 = &a1[v8];
          LDunscale(&v35, v28);
          LDint(v28, 26LL);
          LDscale((__int64)v28, (unsigned int)v35);
          v29 = *v11;
          v30 = v36 - v29;
          v37 = v35;
          v36 = v36 - v29;
          if ( v36 == 0.0 )
            v32 = v29;
          else
            v32 = v30;
          LDunscale(&v34, &v32);
          v8 = v27;
          v7 = v37;
        }
        else
        {
          v7 = v35;
          ++v8;
        }
        ++v9;
        ++v10;
        ++v11;
      }
      else
      {
        v15 = v8;
        v16 = v9;
        do
        {
          ++v15;
          ++v16;
        }
        while ( v16 < v4 && a1[v16] != 0.0 );
        if ( v15 >= (int)v4 - 1 )
        {
          if ( v15 == (_DWORD)v4 )
            --v15;
        }
        else
        {
          ++v15;
        }
        for ( i = v15; i > v9; --i )
          a1[i] = a1[i - 1];
        *v11 = v13;
        v36 = 0.0;
      }
LABEL_50:
      if ( v8 >= (int)v4 )
        return a1;
    }
  }
  if ( v5 == 2 || (v6 = LDtest(a1), v6 <= 0) )
  {
    *a1 = v36;
  }
  else if ( v6 != 2 && ((HIWORD(v36) ^ *((_WORD *)a1 + 3)) & 0x8000u) != 0 )
  {
    Feraise(1);
    *a1 = LNan._Long_double;
    if ( (int)v4 > 1 )
      a1[1] = 0.0;
  }
  return a1;
}

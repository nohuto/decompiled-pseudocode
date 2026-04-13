/*
 * XREFs of _Xp_addh @ 0x18005697C
 * Callers:
 *     _Xp_addx @ 0x180056CD4 (_Xp_addx.c)
 *     _Xp_mulh @ 0x180056E04 (_Xp_mulh.c)
 * Callees:
 *     _Dscale @ 0x1800566F0 (_Dscale.c)
 *     _Feraise @ 0x180057EB8 (_Feraise.c)
 *     _Dtest @ 0x180058248 (_Dtest.c)
 *     _Dint @ 0x1800582AC (_Dint.c)
 *     _Dunscale @ 0x1800583CC (_Dunscale.c)
 */

double *__fastcall Xp_addh(double *a1, int a2, double a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // r13d
  int v9; // ebx
  __int64 v10; // r15
  double *v11; // r12
  __int16 v12; // ax
  double v13; // xmm1_8
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  __int64 i; // rdx
  double v18; // xmm1_8
  __int64 v19; // rax
  double v20; // xmm0_8
  __int64 v21; // rdx
  double v22; // xmm0_8
  __int64 v23; // rax
  double v24; // xmm0_8
  int v25; // r15d
  double *v26; // rbx
  double v27; // xmm1_8
  double v28; // xmm0_8
  __int64 v29; // rax
  int v30; // ebx
  double v32[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v33; // [rsp+90h] [rbp+48h] BYREF
  __int16 v34; // [rsp+98h] [rbp+50h] BYREF
  double v35; // [rsp+A0h] [rbp+58h] BYREF
  double v36; // [rsp+A8h] [rbp+60h] BYREF

  v35 = a3;
  v3 = 0LL;
  v36 = a3;
  v5 = a2;
  if ( !a2 )
    return a1;
  v6 = Dunscale(&v33, &v36);
  if ( v6 <= 0 )
  {
    if ( v6 >= 0 )
      return a1;
    v8 = 2048;
    v9 = 0;
    v10 = v5;
    if ( (int)v5 <= 0 )
      return a1;
    v11 = a1 - 1;
    while ( 1 )
    {
      v32[0] = a1[v3];
      v12 = Dunscale(&v34, v32);
      if ( v12 > 0 )
        return a1;
      if ( !v12 )
      {
        v29 = v9;
        v30 = v9 + 1;
        a1[v29] = v35;
        if ( v30 < (int)v5 )
          a1[v30] = 0.0;
        return a1;
      }
      v13 = v35;
      v14 = v34 - v33;
      if ( v14 > -26 || v35 == 0.0 )
      {
        if ( v14 < 26 || v35 == 0.0 )
        {
          v18 = v35 + a1[v3];
          a1[v3] = v18;
          if ( v18 == 0.0 )
          {
            v19 = v3;
            do
            {
              if ( ++v19 >= v10 )
                break;
              v20 = a1[v19];
              a1[v19 - 1] = v20;
            }
            while ( v20 != 0.0 );
            a1[v10 - 1] = 0.0;
            v18 = a1[v3];
            if ( v18 == 0.0 )
              return a1;
          }
          v35 = v18;
          Dunscale(&v33, &v35);
          v21 = (unsigned int)v33;
          if ( v8 - 26 < (int)v21 )
          {
            LOWORD(v21) = v33 - v8 + 26;
            Dint(&v35, v21);
            Dscale(&v35, v33);
            v22 = a1[v3] - v35;
            a1[v3] = v22;
            if ( v22 == 0.0 )
            {
              v23 = v3;
              do
              {
                if ( ++v23 >= v10 )
                  break;
                v24 = a1[v23];
                a1[v23 - 1] = v24;
              }
              while ( v24 != 0.0 );
              a1[v10 - 1] = 0.0;
            }
            --v3;
            --v11;
            if ( --v9 )
            {
              v36 = *v11;
              Dunscale(&v34, &v36);
              v8 = v34;
            }
            else
            {
              v8 = 2048;
            }
            goto LABEL_50;
          }
          v25 = v9 + 1;
          if ( v9 + 1 == (_DWORD)v5 )
            return a1;
          v35 = a1[v3];
          v26 = &a1[v9];
          Dunscale(&v34, v26);
          Dint(v26, 26LL);
          Dscale(v26, v34);
          v27 = a1[v3];
          v8 = v34;
          v28 = v35 - v27;
          v35 = v35 - v27;
          if ( v35 == 0.0 )
            v36 = v27;
          else
            v36 = v28;
          Dunscale(&v33, &v36);
          v9 = v25;
          v10 = v5;
        }
        else
        {
          v8 = v34;
          ++v9;
        }
        ++v3;
        ++v11;
      }
      else
      {
        v15 = v9;
        v16 = v3;
        do
        {
          ++v15;
          ++v16;
        }
        while ( v16 < v10 && a1[v16] != 0.0 );
        if ( v15 >= (int)v5 - 1 )
        {
          if ( v15 == (_DWORD)v5 )
            --v15;
        }
        else
        {
          ++v15;
        }
        for ( i = v15; i > v3; --i )
          a1[i] = a1[i - 1];
        a1[v3] = v13;
        v35 = 0.0;
      }
LABEL_50:
      if ( v9 >= (int)v5 )
        return a1;
    }
  }
  if ( v6 == 2 || (v7 = Dtest(a1), v7 <= 0) )
  {
    *a1 = v35;
  }
  else if ( v7 != 2 && ((HIWORD(v35) ^ *((_WORD *)a1 + 3)) & 0x8000u) != 0 )
  {
    Feraise(1);
    *a1 = Nan._Double;
    if ( (int)v5 > 1 )
      a1[1] = 0.0;
  }
  return a1;
}

/*
 * XREFs of _Xp_addh @ 0x18006D42C
 * Callers:
 *     _Xp_addx @ 0x18006D784 (_Xp_addx.c)
 *     _Xp_mulh @ 0x18006D7F4 (_Xp_mulh.c)
 * Callees:
 *     _Dscale @ 0x18006D1A8 (_Dscale.c)
 *     _Feraise @ 0x18006E8E8 (_Feraise.c)
 *     _Dtest @ 0x18006EC64 (_Dtest.c)
 *     _Dint @ 0x18006ECC8 (_Dint.c)
 *     _Dunscale @ 0x18006EDE0 (_Dunscale.c)
 */

double *__fastcall Xp_addh(double *a1, int a2, double a3)
{
  __int64 v3; // rsi
  __int64 v5; // r15
  __int16 v6; // ax
  __int16 v7; // ax
  int v8; // r13d
  int v9; // r14d
  __int64 v10; // rbx
  double *v11; // r12
  __int16 v12; // ax
  double v13; // xmm1_8
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rax
  int v17; // edx
  __int64 i; // rdx
  double v19; // xmm1_8
  __int64 v20; // rax
  double v21; // xmm0_8
  __int64 v22; // rbx
  __int64 v23; // rdx
  double v24; // xmm0_8
  __int64 v25; // rax
  double v26; // xmm0_8
  double *v27; // rbx
  double v28; // xmm1_8
  double v29; // xmm0_8
  __int64 v30; // rax
  int v31; // r14d
  double v33[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v34; // [rsp+90h] [rbp+48h] BYREF
  __int16 v35; // [rsp+98h] [rbp+50h] BYREF
  double v36; // [rsp+A0h] [rbp+58h] BYREF
  double v37; // [rsp+A8h] [rbp+60h] BYREF

  v36 = a3;
  v3 = 0LL;
  v37 = a3;
  v5 = a2;
  if ( !a2 )
    return a1;
  v6 = Dunscale(&v34, &v37);
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
      v33[0] = a1[v3];
      v12 = Dunscale(&v35, v33);
      if ( v12 > 0 )
        return a1;
      if ( !v12 )
      {
        v30 = v9;
        v31 = v9 + 1;
        a1[v30] = v36;
        if ( v31 < (int)v5 )
          a1[v31] = 0.0;
        return a1;
      }
      v13 = v36;
      v14 = v35 - v34;
      if ( v14 > -26 || v36 == 0.0 )
      {
        if ( v14 < 26 || v36 == 0.0 )
        {
          v19 = v36 + a1[v3];
          a1[v3] = v19;
          if ( v19 == 0.0 )
          {
            v20 = v3;
            do
            {
              if ( ++v20 >= v10 )
                break;
              v21 = a1[v20];
              a1[v20 - 1] = v21;
            }
            while ( v21 != 0.0 );
            a1[v10 - 1] = 0.0;
            v19 = a1[v3];
            if ( v19 == 0.0 )
              return a1;
          }
          v36 = v19;
          v22 = v9;
          Dunscale(&v34, &v36);
          v23 = (unsigned int)v34;
          if ( v8 - 26 < (int)v23 )
          {
            LOWORD(v23) = v34 - v8 + 26;
            Dint(&v36, v23);
            Dscale(&v36, v34);
            v10 = v5;
            v24 = a1[v3] - v36;
            a1[v3] = v24;
            if ( v24 == 0.0 )
            {
              v25 = v3;
              do
              {
                if ( ++v25 >= v5 )
                  break;
                v26 = a1[v25];
                a1[v25 - 1] = v26;
              }
              while ( v26 != 0.0 );
              a1[v5 - 1] = 0.0;
            }
            --v3;
            --v11;
            if ( --v9 )
            {
              v37 = *v11;
              Dunscale(&v35, &v37);
              v8 = v35;
            }
            else
            {
              v8 = 2048;
            }
            goto LABEL_50;
          }
          if ( ++v9 == (_DWORD)v5 )
            return a1;
          v27 = &a1[v22];
          v36 = a1[v3];
          Dunscale(&v35, v27);
          Dint(v27, 26LL);
          Dscale(v27, v35);
          v28 = a1[v3];
          v8 = v35;
          v29 = v36 - v28;
          v36 = v36 - v28;
          if ( v36 == 0.0 )
            v37 = v28;
          else
            v37 = v29;
          Dunscale(&v34, &v37);
          v10 = v5;
        }
        else
        {
          v8 = v35;
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
          v17 = v15;
          ++v16;
          ++v15;
        }
        while ( v16 < v10 && a1[v16] != 0.0 );
        if ( v15 >= (int)v5 - 1 )
        {
          if ( v15 == (_DWORD)v5 )
            v15 = v17;
        }
        else
        {
          ++v15;
        }
        for ( i = v15; i > v3; --i )
          a1[i] = a1[i - 1];
        a1[v3] = v13;
        v36 = 0.0;
      }
LABEL_50:
      if ( v9 >= (int)v5 )
        return a1;
    }
  }
  if ( v6 == 2 || (v7 = Dtest(a1), v7 <= 0) )
  {
    *a1 = v36;
  }
  else if ( v7 != 2 && ((HIWORD(v36) ^ *((_WORD *)a1 + 3)) & 0x8000u) != 0 )
  {
    Feraise(1);
    *a1 = Nan._Double;
    if ( (int)v5 > 1 )
      a1[1] = 0.0;
  }
  return a1;
}

/*
 * XREFs of sub_180023E14 @ 0x180023E14
 * Callers:
 *     sub_18002417C @ 0x18002417C (sub_18002417C.c)
 *     sub_1800241F4 @ 0x1800241F4 (sub_1800241F4.c)
 * Callees:
 *     sub_180023E08 @ 0x180023E08 (sub_180023E08.c)
 *     sub_180025520 @ 0x180025520 (sub_180025520.c)
 *     j_unknown_libname_11 @ 0x18002570C (j_unknown_libname_11.c)
 *     sub_180025718 @ 0x180025718 (sub_180025718.c)
 *     sub_180025724 @ 0x180025724 (sub_180025724.c)
 */

__int64 __fastcall sub_180023E14(__int64 a1, int a2, double a3)
{
  __int64 v4; // rsi
  __int16 v5; // ax
  __int16 v6; // ax
  int v7; // r12d
  int v8; // ebx
  __int64 v9; // r15
  double *v10; // r13
  double *v11; // r14
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
  double v23; // xmm0_8
  int v24; // ecx
  double *v25; // rax
  double v26; // xmm0_8
  int v27; // r12d
  __int64 v28; // rbx
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
  v5 = sub_180025724(&v34, &v32);
  if ( v5 <= 0 )
  {
    if ( v5 >= 0 )
      return a1;
    v7 = 2048;
    v8 = 0;
    if ( (int)v4 <= 0 )
      return a1;
    v9 = 0LL;
    v10 = (double *)(a1 - 8);
    v11 = (double *)a1;
    while ( 1 )
    {
      v33 = *v11;
      v12 = sub_180025724(&v35, &v33);
      if ( v12 > 0 )
        return a1;
      if ( !v12 )
      {
        *(double *)(a1 + 8LL * v8) = v36;
        if ( v8 + 1 < (int)v4 )
          *(_QWORD *)(a1 + 8LL * v8 + 8) = 0LL;
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
            *(_QWORD *)(a1 + 8 * v4 - 8) = 0LL;
            v18 = *v11;
            if ( *v11 == 0.0 )
              return a1;
          }
          v36 = v18;
          sub_180025724(&v34, &v36);
          v22 = (unsigned int)v34;
          if ( v7 - 26 < (int)v22 )
          {
            LOWORD(v22) = v34 - v7 + 26;
            sub_180025718(&v36, v22);
            sub_180023E08((__int64)&v36, (unsigned int)v34);
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
              *(_QWORD *)(a1 + 8 * v4 - 8) = 0LL;
            }
            --v9;
            --v10;
            --v11;
            if ( --v8 )
            {
              v32 = *v10;
              sub_180025724(&v35, &v32);
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
          v28 = a1 + 8LL * v8;
          sub_180025724(&v35, v28);
          sub_180025718(v28, 26LL);
          sub_180023E08(v28, (unsigned int)v35);
          v29 = *v11;
          v30 = v36 - v29;
          v37 = v35;
          v36 = v36 - v29;
          if ( v36 == 0.0 )
            v32 = v29;
          else
            v32 = v30;
          sub_180025724(&v34, &v32);
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
        while ( v16 < v4 && *(double *)(a1 + 8 * v16) != 0.0 );
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
          *(_QWORD *)(a1 + 8 * i) = *(_QWORD *)(a1 + 8 * i - 8);
        *v11 = v13;
        v36 = 0.0;
      }
LABEL_50:
      if ( v8 >= (int)v4 )
        return a1;
    }
  }
  if ( v5 == 2 || (v6 = j_unknown_libname_11(a1), v6 <= 0) )
  {
    *(double *)a1 = v36;
  }
  else if ( v6 != 2 && ((HIWORD(v36) ^ *(_WORD *)(a1 + 6)) & 0x8000u) != 0 )
  {
    sub_180025520(1LL);
    *(_QWORD *)a1 = qword_18003A040;
    if ( (int)v4 > 1 )
      *(_QWORD *)(a1 + 8) = 0LL;
  }
  return a1;
}

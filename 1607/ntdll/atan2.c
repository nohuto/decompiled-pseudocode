/*
 * XREFs of atan2 @ 0x180098C40
 * Callers:
 *     <none>
 * Callees:
 *     _controlfp @ 0x18009E8A8 (_controlfp.c)
 *     _handle_error @ 0x18009E9E4 (_handle_error.c)
 */

double __cdecl atan2(double Y, double X)
{
  unsigned __int64 v2; // rbx
  double v3; // r15
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rsi
  double v8; // xmm9_8
  double v9; // xmm8_8
  BOOL v10; // r9d
  BOOL v11; // r8d
  int v12; // edi
  int v13; // r8d
  __int64 v14; // xmm6_8
  __int64 v15; // xmm0_8
  __int64 v16; // xmm0_8
  double v17; // xmm0_8
  unsigned __int64 v18; // rax
  __int64 v19; // xmm0_8
  double v20; // xmm0_8
  double v21; // rdi
  unsigned int v22; // edx
  unsigned int v23; // ecx
  double v24; // rax
  int v25; // ecx
  unsigned __int64 v26; // rax
  int v27; // r9d
  double v28; // xmm0_8
  double v29; // xmm5_8
  __int64 v30; // rcx
  double v31; // xmm10_8
  double v32; // xmm6_8
  double v33; // xmm5_8
  int v34; // eax
  double v35; // xmm4_8
  double v36; // xmm3_8
  double v37; // xmm10_8
  int v38; // [rsp+F0h] [rbp+18h]

  v2 = 0LL;
  v3 = Y;
  v4 = *(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL;
  v5 = (*(_QWORD *)&Y >> 52) & 0x7FFLL;
  v6 = *(_QWORD *)&X & 0x8000000000000000uLL;
  v38 = v5;
  v7 = *(_QWORD *)&Y & 0x8000000000000000uLL;
  v8 = X;
  v9 = Y;
  v10 = (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0x7FF0000000000000LL;
  v11 = (*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL) == 0x7FF0000000000000LL;
  v12 = ((*(_QWORD *)&Y >> 52) & 0x7FF) - ((*(_QWORD *)&X >> 52) & 0x7FF);
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
  {
    v13 = LODWORD(X);
LABEL_3:
    handle_error((unsigned int)"atan2", 16, v13, 1, 0, 33, *(__int64 *)&X, *(__int64 *)&Y, 2);
    return Y;
  }
  if ( v4 > 0x7FF0000000000000LL )
  {
    v13 = LODWORD(Y);
    goto LABEL_3;
  }
  if ( !v4 )
  {
    if ( !v6 )
      return Y;
    goto LABEL_8;
  }
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    if ( v7 )
    {
LABEL_12:
      v15 = qword_18014CA30;
LABEL_13:
      v14 = v15 ^ _xmm;
LABEL_33:
      v22 = 16;
      v23 = 16;
LABEL_34:
      controlfp(v23, v22);
      return *(double *)&v14;
    }
    controlfp(0x10u, 0x10u);
    LODWORD(v5) = v38;
    v11 = (*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL) == 0x7FF0000000000000LL;
    v10 = (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0x7FF0000000000000LL;
  }
  if ( ((unsigned __int16)(*(_QWORD *)&X >> 52) & 0x7FFu) < 0x3FD && (int)v5 < 1021 )
  {
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) != 0 )
    {
      v18 = *(_QWORD *)&X + 0x4000000000000000LL;
    }
    else
    {
      v16 = *(_QWORD *)&X | 0x4010000000000000LL;
      if ( v6 )
        v17 = *(double *)&v16 + 4.0;
      else
        v17 = *(double *)&v16 + -4.0;
      *(double *)&v18 = v17;
    }
    if ( (*(_QWORD *)&v3 & 0x7FF0000000000000LL) != 0 )
    {
      *(_QWORD *)&v21 = *(_QWORD *)&v3 + 0x4000000000000000LL;
    }
    else
    {
      v19 = *(_QWORD *)&v3 | 0x4010000000000000LL;
      if ( v7 )
        v20 = *(double *)&v19 + 4.0;
      else
        v20 = *(double *)&v19 + -4.0;
      v21 = v20;
    }
    v8 = *(double *)&v18;
    v9 = v21;
    v12 = ((*(_QWORD *)&v21 >> 52) & 0x7FF) - ((v18 >> 52) & 0x7FF);
  }
  if ( v12 > 56 )
  {
    if ( !v7 )
    {
      v14 = qword_18014CA30;
      goto LABEL_33;
    }
    goto LABEL_12;
  }
  if ( v12 >= -28 || v6 )
  {
    if ( v12 < -56 && v6 )
    {
LABEL_8:
      v14 = qword_18014CA28;
      if ( v7 )
        v14 = qword_18014CA28 ^ _xmm;
      goto LABEL_33;
    }
    if ( v11 && v10 )
    {
      if ( v6 )
      {
        if ( !v7 )
        {
          v14 = qword_18014CA40;
          goto LABEL_33;
        }
        v15 = qword_18014CA40;
      }
      else
      {
        if ( !v7 )
        {
          v14 = qword_18014CA38;
          goto LABEL_33;
        }
        v15 = qword_18014CA38;
      }
      goto LABEL_13;
    }
    if ( v6 )
      *(_QWORD *)&v8 ^= _xmm;
    if ( v7 )
      *(_QWORD *)&v9 ^= _xmm;
    v27 = 0;
    LOBYTE(v27) = v9 > v8;
    if ( v9 > v8 )
    {
      v28 = v8;
      v8 = v9;
      v9 = v28;
    }
    v29 = v9 / v8;
    if ( v9 / v8 <= 0.0625 )
    {
      v31 = 0.0;
      if ( v29 >= 0.00000001 )
        v29 = (v9
             - COERCE_DOUBLE(*(_QWORD *)&v29 & 0xFFFFFFFF00000000uLL)
             * COERCE_DOUBLE(*(_QWORD *)&v8 & 0xFFFFFFFF00000000uLL)
             - (v8 - COERCE_DOUBLE(*(_QWORD *)&v8 & 0xFFFFFFFF00000000uLL))
             * COERCE_DOUBLE(*(_QWORD *)&v29 & 0xFFFFFFFF00000000uLL)
             - (v29 - COERCE_DOUBLE(*(_QWORD *)&v29 & 0xFFFFFFFF00000000uLL)) * v8)
            / v8
            - (0.3333333333333317
             - (0.1999999999939322
              - (0.1428571356180717 - (0.1111073628351453 - v29 * v29 * 0.09002981028544979) * (v29 * v29))
              * (v29
               * v29))
             * (v29
              * v29))
            * (v29
             * v29
             * v29)
            + v29;
    }
    else
    {
      v30 = (unsigned int)((int)(v29 * 256.0 + 0.5) - 16);
      v31 = qword_18010E860[v30];
      v32 = (double)(int)(v29 * 256.0 + 0.5) * 0.00390625;
      v33 = COERCE_DOUBLE(((int)(1023 - ((*(_QWORD *)&v8 >> 52) & 0x7FF)) / 2 + 1023LL) << 52)
          * v8
          * COERCE_DOUBLE(((int)(1023
                               - ((*(_QWORD *)&v8 >> 52) & 0x7FF)
                               - (int)(1023 - ((*(_QWORD *)&v8 >> 52) & 0x7FF)) / 2)
                         + 1023LL) << 52);
      v34 = (int)(1023 - ((*(_QWORD *)&v8 >> 52) & 0x7FF)) / 2;
      v35 = COERCE_DOUBLE((v34 + 1023LL) << 52)
          * v9
          * COERCE_DOUBLE(((int)(1023 - ((*(_QWORD *)&v8 >> 52) & 0x7FF) - v34) + 1023LL) << 52);
      v36 = (v35
           - COERCE_DOUBLE(*(_QWORD *)&v33 & 0xFFFFFFFFF8000000uLL) * v32
           - (v33 - COERCE_DOUBLE(*(_QWORD *)&v33 & 0xFFFFFFFFF8000000uLL)) * v32)
          / (v32 * v35 + v33);
      v29 = v36 + qword_18010EFF0[v30] - (0.333333333332241 - v36 * v36 * 0.1999991803898914) * (v36 * v36) * v36;
    }
    if ( v27 )
    {
      v31 = *(double *)&qword_18014CA58 - v31;
      v29 = *(double *)&qword_18014CA60 - v29;
    }
    if ( v6 )
    {
      v31 = *(double *)&qword_18014CA48 - v31;
      v29 = *(double *)&qword_18014CA50 - v29;
    }
    v37 = v31 + v29;
    if ( v7 )
      *(_QWORD *)&v37 ^= _xmm;
    return v37;
  }
  else
  {
    if ( v12 < -1074 )
    {
      if ( v7 )
        *(double *)&v14 = DOUBLE_N0_0;
      else
        *(double *)&v14 = 0.0;
LABEL_48:
      v23 = 18;
      v22 = 18;
      goto LABEL_34;
    }
    if ( v12 < -1022 )
    {
      v24 = fabs(1.267650600228229e30 * v9 / v8);
      v25 = ((*(_QWORD *)&v24 >> 52) & 0x7FF) - 100;
      if ( v25 <= 0 )
      {
        v26 = *(_QWORD *)&v24 & 0x800FFFFFFFFFFFFFuLL | 0x10000000000000LL;
        if ( 1 - v25 <= 54 )
          v2 = ((v26 >> -(char)v25) & 1) + (v26 >> -(char)v25 >> 1);
      }
      else
      {
        v2 = *(_QWORD *)&v24 & 0x800FFFFFFFFFFFFFuLL | ((__int64)v25 << 52);
      }
      v14 = COERCE_UNSIGNED_INT64(1.267650600228229e30 * v9 / v8) & 0x8000000000000000uLL | v2;
      if ( (v2 & 0x7FF0000000000000LL) != 0 )
        return *(double *)&v14;
      goto LABEL_48;
    }
    return v9 / v8;
  }
}

/*
 * XREFs of cos @ 0x180099640
 * Callers:
 *     <none>
 * Callees:
 *     sin_piby4 @ 0x180099EA8 (sin_piby4.c)
 *     _controlfp @ 0x18009E8A8 (_controlfp.c)
 *     _handle_error @ 0x18009E9E4 (_handle_error.c)
 *     __remainder_piby2 @ 0x18009EB14 (__remainder_piby2.c)
 */

double __cdecl cos(double X)
{
  __int64 v1; // xmm6_8
  unsigned __int64 v3; // rdx
  double result; // xmm0_8
  double v5; // xmm6_8
  double v6; // xmm1_8
  double v7; // xmm3_8
  int v8; // ecx
  double v9; // xmm3_8
  double v10; // xmm2_8
  double v11; // xmm6_8
  unsigned __int64 v12; // r8
  double v13; // xmm1_8
  double v14; // xmm1_8
  int v15; // ecx
  double v16; // xmm7_8
  double v17; // xmm6_8
  int v18; // ecx
  int v19; // ecx
  int v20; // [rsp+80h] [rbp+8h] BYREF
  double v21; // [rsp+88h] [rbp+10h]
  double v22; // [rsp+90h] [rbp+18h] BYREF
  double v23; // [rsp+98h] [rbp+20h] BYREF

  v21 = X;
  *(double *)&v1 = X;
  v3 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x3FE921FB54442D18LL )
  {
    if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
    {
      result = 0.0;
      if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
        handle_error((unsigned int)"cos", 18, LODWORD(X), 1, 0, 33, v1, 0LL, 1);
      else
        handle_error((unsigned int)"cos", 18, 0, 1, 8, 33, v1, 0LL, 1);
      return result;
    }
    if ( v3 != *(_QWORD *)&X )
      v1 = *(_QWORD *)&X ^ _xmm;
    if ( *(double *)&v1 >= 500000.0 )
    {
      _remainder_piby2(0x7FF0000000000000LL, &v22, &v23, &v20);
      v15 = v20;
      v16 = v22;
      v17 = v23;
    }
    else
    {
      if ( v3 > 0x400F6A7A2955385ELL )
      {
        if ( v3 > 0x401C463ABECCB2BBLL )
          v8 = (int)(*(double *)&v1 * 0.6366197723675814 + 0.5);
        else
          v8 = (v3 > 0x4015FDBBE9BBA775LL) + 3;
      }
      else
      {
        v8 = (v3 > 0x4002D97C7F3321D2LL) + 1;
      }
      v9 = (double)v8;
      v10 = (double)v8 * 6.077100506506192e-11;
      v11 = *(double *)&v1 - (double)v8 * 1.570796326734126;
      v21 = v11;
      v12 = (v3 >> 52) - ((*(_QWORD *)&v11 >> 52) & 0x7FFLL);
      if ( v12 > 0xF )
      {
        v13 = v11;
        v11 = v11 - v9 * 6.077100506303966e-11;
        v10 = v9 * 2.022266248795951e-21 - (v13 - v11 - v9 * 6.077100506303966e-11);
        if ( v12 > 0x30 )
        {
          v14 = v11;
          v11 = v11 - v9 * 2.022266248711166e-21;
          v10 = v9 * 8.4784276603689e-32 - (v14 - v11 - v9 * 2.022266248711166e-21);
        }
      }
      v15 = v8 & 3;
      v16 = v11 - v10;
      v17 = v11 - (v11 - v10) - v10;
    }
    v18 = v15 - 1;
    if ( !v18 )
    {
      *(_QWORD *)&result = COERCE_UNSIGNED_INT64(((double (*)(void))sin_piby4)()) ^ _xmm;
      return result;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      *(_QWORD *)&v7 = COERCE_UNSIGNED_INT64(
                         (((((0.000000002087614638223296 - v16 * v16 * 1.138263980679449e-11) * (v16 * v16)
                           - 0.0000002755731727234419)
                          * (v16
                           * v16)
                          + 0.00002480158729876704)
                         * (v16
                          * v16)
                         - 0.00138888888888874)
                        * (v16
                         * v16)
                        + 0.04166666666666666)
                       * (v16
                        * v16
                        * (v16
                         * v16))
                       + 1.0
                       - (1.0
                        - v16 * v16 * 0.5)
                       - v16 * v16 * 0.5
                       - v17 * v16
                       + 1.0
                       - v16 * v16 * 0.5) ^ _xmm;
      return v7;
    }
    if ( v19 == 1 )
    {
      result = v16;
      sin_piby4();
      return result;
    }
    v5 = v17 * v16;
    v6 = v16 * v16;
    return (((((0.000000002087614638223296 - v6 * 1.138263980679449e-11) * v6 - 0.0000002755731727234419) * v6
            + 0.00002480158729876704)
           * v6
           - 0.00138888888888874)
          * v6
          + 0.04166666666666666)
         * (v6
          * v6)
         + 1.0
         - (1.0
          - v6 * 0.5)
         - v6 * 0.5
         - v5
         + 1.0
         - v6 * 0.5;
  }
  if ( v3 >= 0x3F20000000000000LL )
  {
    v5 = X * 0.0;
    v6 = X * X;
    return (((((0.000000002087614638223296 - v6 * 1.138263980679449e-11) * v6 - 0.0000002755731727234419) * v6
            + 0.00002480158729876704)
           * v6
           - 0.00138888888888874)
          * v6
          + 0.04166666666666666)
         * (v6
          * v6)
         + 1.0
         - (1.0
          - v6 * 0.5)
         - v6 * 0.5
         - v5
         + 1.0
         - v6 * 0.5;
  }
  if ( v3 >= 0x3E40000000000000LL )
    return 1.0 - X * X * 0.5;
  if ( v3 )
    controlfp(0x10u, 0x10u);
  return DOUBLE_1_0;
}

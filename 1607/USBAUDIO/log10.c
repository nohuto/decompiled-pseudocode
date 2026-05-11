/*
 * XREFs of log10 @ 0x1C0006900
 * Callers:
 *     USBCntrlGetSetDbLevel @ 0x1C0020980 (USBCntrlGetSetDbLevel.c)
 * Callees:
 *     _handle_error @ 0x1C0006D74 (_handle_error.c)
 */

double __cdecl log10(double X)
{
  double v1; // rcx
  __int64 v2; // xmm5_8
  int v3; // r8d
  double v4; // xmm4_8
  double v5; // xmm2_8
  double v6; // xmm1_8
  double v7; // xmm3_8
  int v8; // eax
  int v9; // edx
  double v10; // xmm1_8
  __int64 v11; // rcx
  double v12; // xmm2_8
  int v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp+8h]

  v1 = X;
  v2 = *(_QWORD *)&X;
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      X = 0.0;
      v3 = LODWORD(v1);
      v14 = v2;
      v13 = 0;
LABEL_4:
      handle_error((unsigned int)"log10", 27, v3, 1, v13, 33, v14, 0LL, 1);
      return X;
    }
    if ( X >= 0.0 )
      return X;
LABEL_7:
    X = 0.0;
    v3 = 0;
    v14 = v2;
    v13 = 8;
    goto LABEL_4;
  }
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    X = 0.0;
    handle_error((unsigned int)"log10", 27, 0, 2, 4, 34, v2, 0LL, 1);
    return X;
  }
  if ( X < 0.0 )
    goto LABEL_7;
  if ( (unsigned __int64)(*(_QWORD *)&X - 0x3FEE0FAA00000000LL) > 0x2F88200000000LL )
  {
    if ( *(_QWORD *)&X >= 0x10000000000000uLL )
    {
      v8 = 0;
    }
    else
    {
      v8 = 60;
      v1 = COERCE_DOUBLE(*(_QWORD *)&X | 0x3D0000000000000LL) - 2.565335500811485e-290;
    }
    v9 = ((*(_QWORD *)&v1 >> 52) & 0x7FF) - v8 - 1023;
    v15 = *(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL;
    v10 = (double)(int)(((*(_QWORD *)&v1 >> 45) & 1) + ((*(_QWORD *)&v1 >> 46) & 0x3F | 0x40));
    v11 = (int)(((*(_QWORD *)&v1 >> 45) & 1) + ((*(_QWORD *)&v1 >> 46) & 0x3F | 0x40) - 64);
    v12 = (*(double *)&v15 - v10 * 0.0078125) / ((*(double *)&v15 - v10 * 0.0078125) * 0.5 + v10 * 0.0078125);
    v4 = (double)v9 * 0.6931471228599548 + qword_1C000AEC0[v11];
    v7 = ((v12 * v12 * 0.002232198107585598 + 0.01249999999781387) * (v12 * v12) + 0.08333333333333336)
       * (v12
        * v12)
       * v12
       + v12
       + qword_1C000B0D0[v11]
       + (double)v9 * 0.00000005769999047543285;
  }
  else
  {
    *(_QWORD *)&v4 = COERCE_UNSIGNED_INT64(X - 1.0) & 0xFFFFFFFF00000000uLL;
    v5 = (X - 1.0) / (X - 1.0 + 2.0);
    v6 = v5 + v5;
    v7 = (((v6 * v6 * 0.0004348877777076146 + 0.002232139987919448) * (v6 * v6) + 0.01250000000377175) * (v6 * v6)
        + 0.08333333333333179)
       * (v6
        * v6
        * v6)
       - v5 * (X - 1.0)
       + X
       - 1.0
       - v4;
  }
  return v7 * 0.0000007349550096401511
       + v4 * 0.0000007349550096401511
       + v7 * 0.4342937469482422
       + v4 * 0.4342937469482422;
}

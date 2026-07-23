/*
 * XREFs of log @ 0x18009A270
 * Callers:
 *     <none>
 * Callees:
 *     _handle_error @ 0x18009E9E4 (_handle_error.c)
 */

double __cdecl log(double X)
{
  double v1; // rcx
  __int64 v2; // xmm4_8
  int v3; // r8d
  double v4; // xmm4_8
  double v5; // xmm3_8
  double v6; // xmm2_8
  int v7; // eax
  double v8; // xmm2_8
  double v9; // xmm1_8
  __int64 v10; // rcx
  double v11; // xmm3_8
  int v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp+8h]

  v1 = X;
  v2 = *(_QWORD *)&X;
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      X = 0.0;
      v3 = LODWORD(v1);
      v13 = v2;
      v12 = 0;
LABEL_4:
      handle_error((unsigned int)"log", 26, v3, 1, v12, 33, v13, 0LL, 1);
      return X;
    }
    if ( X >= 0.0 )
      return X;
LABEL_7:
    X = 0.0;
    v3 = 0;
    v13 = v2;
    v12 = 8;
    goto LABEL_4;
  }
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    X = 0.0;
    handle_error((unsigned int)"log", 26, 0, 2, 4, 34, v2, 0LL, 1);
    return X;
  }
  if ( X < 0.0 )
    goto LABEL_7;
  if ( (unsigned __int64)(*(_QWORD *)&X - 0x3FEE0FAA00000000LL) > 0x2F88200000000LL )
  {
    if ( *(_QWORD *)&X >= 0x10000000000000uLL )
    {
      v7 = 0;
    }
    else
    {
      v7 = 60;
      v1 = COERCE_DOUBLE(*(_QWORD *)&X | 0x3D0000000000000LL) - 2.565335500811485e-290;
    }
    v14 = *(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL;
    v8 = (double)(int)(((*(_QWORD *)&v1 >> 52) & 0x7FF) - v7 - 1023);
    v9 = (double)(int)(((*(_QWORD *)&v1 >> 45) & 1) + ((*(_QWORD *)&v1 >> 46) & 0x3F | 0x40));
    v10 = (int)(((*(_QWORD *)&v1 >> 45) & 1) + ((*(_QWORD *)&v1 >> 46) & 0x3F | 0x40) - 64);
    v11 = (*(double *)&v14 - v9 * 0.0078125) / ((*(double *)&v14 - v9 * 0.0078125) * 0.5 + v9 * 0.0078125);
    return ((v11 * v11 * 0.002232198107585598 + 0.01249999999781387) * (v11 * v11) + 0.08333333333333336)
         * (v11
          * v11)
         * v11
         + v11
         + qword_18010FAD0[v10]
         + v8 * 0.00000005769999047543285
         + v8 * 0.6931471228599548
         + qword_18010F8C0[v10];
  }
  else
  {
    v4 = X - 1.0;
    v5 = v4 / (v4 + 2.0);
    v6 = v5 + v5;
    return (((v6 * v6 * 0.0004348877777076146 + 0.002232139987919448) * (v6 * v6) + 0.01250000000377175) * (v6 * v6)
          + 0.08333333333333179)
         * (v6
          * v6
          * v6)
         - v5 * v4
         + v4;
  }
}

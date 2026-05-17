/*
 * XREFs of log @ 0x180087700
 * Callers:
 *     <none>
 * Callees:
 *     _handle_error @ 0x18008BE90 (_handle_error.c)
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
  int v8; // edx
  int v9; // eax
  double v10; // xmm3_8
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-28h]

  v1 = X;
  v2 = *(_QWORD *)&X;
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      X = 0.0;
      v3 = LODWORD(v1);
      v12 = v2;
      v11 = 0;
LABEL_4:
      handle_error((unsigned int)"log", 26, v3, 1, v11, 33, v12, 0LL, 1);
      return X;
    }
    if ( X >= 0.0 )
      return X;
LABEL_7:
    X = 0.0;
    v3 = 0;
    v12 = v2;
    v11 = 8;
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
    v8 = ((*(_QWORD *)&v1 >> 52) & 0x7FF) - v7 - 1023;
    v9 = ((*(_QWORD *)&v1 >> 45) & 1) + ((*(_QWORD *)&v1 >> 46) & 0x3F | 0x40);
    v10 = (COERCE_DOUBLE(*(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL) - (double)v9 * 0.0078125)
        / ((COERCE_DOUBLE(*(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL) - (double)v9 * 0.0078125) * 0.5
         + (double)v9 * 0.0078125);
    return ((v10 * v10 * 0.002232198107585598 + 0.01249999999781387) * (v10 * v10) + 0.08333333333333336)
         * (v10
          * v10)
         * v10
         + v10
         + qword_1801042D0[v9]
         + (double)v8 * 0.00000005769999047543285
         + (double)v8 * 0.6931471228599548
         + qword_1801040C0[v9];
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

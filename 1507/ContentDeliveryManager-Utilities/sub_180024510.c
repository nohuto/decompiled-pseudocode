/*
 * XREFs of sub_180024510 @ 0x180024510
 * Callers:
 *     unknown_libname_8 @ 0x1800223C0 (unknown_libname_8.c)
 *     sub_1800244E8 @ 0x1800244E8 (sub_1800244E8.c)
 *     sub_180024628 @ 0x180024628 (sub_180024628.c)
 * Callees:
 *     sub_180023E08 @ 0x180023E08 (sub_180023E08.c)
 *     sub_180025718 @ 0x180025718 (sub_180025718.c)
 *     sub_180025724 @ 0x180025724 (sub_180025724.c)
 */

__int64 __fastcall sub_180024510(__int64 a1, int a2, double a3)
{
  double v3; // xmm6_8
  __int16 v6; // ax
  double v7; // xmm0_8
  double v8; // xmm6_8
  double v9; // xmm6_8
  double v11; // [rsp+50h] [rbp+8h] BYREF
  __int16 v12; // [rsp+58h] [rbp+10h] BYREF

  v11 = a3;
  v3 = a3;
  if ( a2 <= 0 )
    return a1;
  if ( a2 == 1 )
  {
LABEL_13:
    *(double *)a1 = v3;
    return a1;
  }
  v6 = sub_180025724(&v12, &v11);
  if ( !v6 )
  {
    v3 = v11;
    goto LABEL_13;
  }
  if ( v6 <= 0 )
  {
    sub_180025718(&v11, 26LL);
    sub_180023E08((__int64)&v11, (unsigned int)v12);
    v7 = v11;
    *(double *)a1 = v11;
    v8 = a3 - v7;
    *(double *)(a1 + 8) = a3 - v7;
    if ( a2 > 2 )
    {
      if ( v8 == 0.0 )
      {
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      else
      {
        sub_180025724(&v12, a1 + 8);
        sub_180025718(a1 + 8, 26LL);
        sub_180023E08(a1 + 8, (unsigned int)v12);
        v9 = v8 - *(double *)(a1 + 8);
        *(double *)(a1 + 16) = v9;
        if ( a2 > 3 && v9 != 0.0 )
          *(_QWORD *)(a1 + 24) = 0LL;
      }
    }
  }
  else
  {
    *(double *)a1 = v11;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return a1;
}

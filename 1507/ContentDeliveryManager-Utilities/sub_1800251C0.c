/*
 * XREFs of sub_1800251C0 @ 0x1800251C0
 * Callers:
 *     unknown_libname_9 @ 0x1800227D0 (unknown_libname_9.c)
 *     sub_180025198 @ 0x180025198 (sub_180025198.c)
 *     sub_1800252D8 @ 0x1800252D8 (sub_1800252D8.c)
 * Callees:
 *     sub_180024780 @ 0x180024780 (sub_180024780.c)
 *     sub_180025938 @ 0x180025938 (sub_180025938.c)
 *     sub_180025A58 @ 0x180025A58 (sub_180025A58.c)
 */

__int64 __fastcall sub_1800251C0(__int64 a1, int a2, double a3)
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
  v6 = sub_180025A58(&v12, &v11);
  if ( !v6 )
  {
    v3 = v11;
    goto LABEL_13;
  }
  if ( v6 <= 0 )
  {
    sub_180025938(&v11, 26LL);
    sub_180024780(&v11, v12);
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
        sub_180025A58(&v12, a1 + 8);
        sub_180025938(a1 + 8, 26LL);
        sub_180024780((_WORD *)(a1 + 8), v12);
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

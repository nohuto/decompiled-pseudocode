/*
 * XREFs of _LXp_setw @ 0x180026090
 * Callers:
 *     _Stoldx @ 0x180023F40 (_Stoldx.c)
 *     _LXp_setn @ 0x180026068 (_LXp_setn.c)
 *     _LDtento @ 0x1800261A8 (_LDtento.c)
 * Callees:
 *     _LDscale @ 0x180025988 (_LDscale.c)
 *     _LDint @ 0x180027298 (_LDint.c)
 *     _LDunscale @ 0x1800272A4 (_LDunscale.c)
 */

__int64 __fastcall LXp_setw(__int64 a1, int a2, double a3)
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
  v6 = LDunscale(&v12, &v11);
  if ( !v6 )
  {
    v3 = v11;
    goto LABEL_13;
  }
  if ( v6 <= 0 )
  {
    LDint(&v11, 26LL);
    LDscale((__int64)&v11, (unsigned int)v12);
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
        LDunscale(&v12, a1 + 8);
        LDint(a1 + 8, 26LL);
        LDscale(a1 + 8, (unsigned int)v12);
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

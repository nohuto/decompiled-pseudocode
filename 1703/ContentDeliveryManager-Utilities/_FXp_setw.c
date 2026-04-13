/*
 * XREFs of _FXp_setw @ 0x18006CF48
 * Callers:
 *     _Stofx @ 0x18006AD30 (_Stofx.c)
 *     _FXp_setn @ 0x18006CEC4 (_FXp_setn.c)
 *     _FDtento @ 0x18006CFF8 (_FDtento.c)
 * Callees:
 *     _FDscale @ 0x18006C5B0 (_FDscale.c)
 *     _FDint @ 0x18006E964 (_FDint.c)
 *     _FDunscale @ 0x18006EA3C (_FDunscale.c)
 */

__int64 __fastcall FXp_setw(__int64 a1, int a2, float a3)
{
  float v3; // xmm6_4
  __int16 v6; // ax
  float v7; // xmm0_4
  __int16 v9; // [rsp+48h] [rbp+10h] BYREF
  float v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  v10 = a3;
  if ( a2 <= 0 )
    return a1;
  if ( a2 == 1 )
  {
LABEL_9:
    *(float *)a1 = v3;
    return a1;
  }
  v6 = FDunscale(&v9, &v10);
  if ( !v6 )
  {
    v3 = v10;
    goto LABEL_9;
  }
  if ( v6 <= 0 )
  {
    FDint(&v10, 12LL);
    FDscale((unsigned __int16 *)&v10, v9);
    v7 = v10;
    *(float *)a1 = v10;
    *(float *)(a1 + 4) = a3 - v7;
    if ( a2 > 2 )
      *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    *(float *)a1 = v10;
    *(_DWORD *)(a1 + 4) = 0;
  }
  return a1;
}

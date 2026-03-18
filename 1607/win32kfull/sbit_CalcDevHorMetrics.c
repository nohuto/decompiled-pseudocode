/*
 * XREFs of sbit_CalcDevHorMetrics @ 0x1C014782C
 * Callers:
 *     fs__Contour @ 0x1C00C7348 (fs__Contour.c)
 * Callees:
 *     UScaleX @ 0x1C001D4B0 (UScaleX.c)
 *     sfac_GetSbitMetrics @ 0x1C001E778 (sfac_GetSbitMetrics.c)
 *     SubstituteHorMetrics @ 0x1C02DDA08 (SubstituteHorMetrics.c)
 */

__int64 __fastcall sbit_CalcDevHorMetrics(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int16 *v6; // r14
  unsigned __int16 *v7; // r15
  unsigned __int16 *v9; // r12
  __int64 result; // rax
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // dx
  _WORD *v14; // rcx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // dx
  _WORD *v17; // rcx
  unsigned __int16 v18; // ax
  int v19; // r11d
  int v20; // r10d
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // dx
  _WORD *v23; // rcx
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // dx
  _WORD *v26; // rcx
  unsigned __int16 v27; // ax
  int v28; // r10d
  int v29; // r11d
  _DWORD v30[18]; // [rsp+70h] [rbp-48h] BYREF
  int v31; // [rsp+C0h] [rbp+8h] BYREF
  _DWORD *v32; // [rsp+D0h] [rbp+18h]

  v32 = a3;
  v6 = (unsigned __int16 *)(a1 + 50);
  v7 = (unsigned __int16 *)(a1 + 74);
  v9 = (unsigned __int16 *)(a1 + 48);
  result = sfac_GetSbitMetrics(
             a2,
             *(_WORD *)(a1 + 40),
             *(_WORD *)(a1 + 42),
             *(_DWORD *)(a1 + 4),
             (_WORD *)(a1 + 46),
             (_WORD *)(a1 + 48),
             (_WORD *)(a1 + 74),
             (_WORD *)(a1 + 76),
             (_WORD *)(a1 + 78),
             (_WORD *)(a1 + 80),
             (_WORD *)(a1 + 50),
             (_WORD *)(a1 + 52),
             &v31,
             v30);
  if ( !(_DWORD)result )
  {
    if ( v31 || (result = SubstituteHorMetrics(a1, a2), !(_DWORD)result) )
    {
      if ( *(_WORD *)(a1 + 38) )
      {
        if ( *(_WORD *)(a1 + 38) != 2 )
          return 6146LL;
        if ( *(_WORD *)(a1 + 28) == 3 && !*(_WORD *)(a1 + 34) )
          return 7168LL;
        v21 = UScaleX((_WORD *)a1, *v6);
        v22 = *v7;
        *v32 = -64 * v21;
        v24 = UScaleX(v23, v22);
        v25 = *v9;
        *a4 = -64 * v24;
        v27 = UScaleX(v26, v25);
        *a5 = v29 + (v27 << 6) - v28;
      }
      else
      {
        if ( *(_WORD *)(a1 + 28) == 3 && !*(_WORD *)(a1 + 34) )
          return 7168LL;
        v12 = UScaleX((_WORD *)a1, *v6);
        v13 = *v7;
        *v32 = v12 << 6;
        v15 = UScaleX(v14, v13);
        v16 = *v9;
        *a4 = v15 << 6;
        v18 = UScaleX(v17, v16);
        *a5 = v19 - (v18 << 6) - v20;
      }
      return 0LL;
    }
  }
  return result;
}

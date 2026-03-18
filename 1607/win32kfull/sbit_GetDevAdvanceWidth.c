/*
 * XREFs of sbit_GetDevAdvanceWidth @ 0x1C001D030
 * Callers:
 *     fs__Contour @ 0x1C00C7348 (fs__Contour.c)
 * Callees:
 *     UScaleX @ 0x1C001D4B0 (UScaleX.c)
 *     sfac_GetSbitMetrics @ 0x1C001E778 (sfac_GetSbitMetrics.c)
 *     SubstituteHorMetrics @ 0x1C02DDA08 (SubstituteHorMetrics.c)
 */

__int64 __fastcall sbit_GetDevAdvanceWidth(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int16 *v4; // r12
  __int64 result; // rax
  unsigned __int16 v8; // ax
  int v9; // ecx
  int v10; // [rsp+A0h] [rbp+8h] BYREF
  char v11; // [rsp+B8h] [rbp+20h] BYREF

  v4 = (unsigned __int16 *)(a1 + 50);
  result = sfac_GetSbitMetrics(
             a2,
             *(unsigned __int16 *)(a1 + 40),
             *(unsigned __int16 *)(a1 + 42),
             *(_DWORD *)(a1 + 4),
             a1 + 46,
             a1 + 48,
             a1 + 74,
             a1 + 76,
             a1 + 78,
             a1 + 80,
             a1 + 50,
             a1 + 52,
             (__int64)&v10,
             (__int64)&v11);
  if ( !(_DWORD)result )
  {
    if ( v10 || (result = SubstituteHorMetrics(a1, a2), !(_DWORD)result) )
    {
      if ( *(_WORD *)(a1 + 28) == 3 && !*(_WORD *)(a1 + 34) )
        return 7168LL;
      v8 = UScaleX(a1, *v4);
      v9 = v8 << 6;
      if ( !*(_WORD *)(a1 + 38) )
        goto LABEL_5;
      if ( *(_WORD *)(a1 + 38) != 1 )
      {
        if ( *(_WORD *)(a1 + 38) == 2 )
        {
          v9 = -64 * v8;
LABEL_5:
          a3[1] = 0;
          *a3 = v9;
          return 0LL;
        }
        if ( *(_WORD *)(a1 + 38) != 3 )
          return 6146LL;
        v9 = -64 * v8;
      }
      *a3 = 0;
      a3[1] = v9;
      return 0LL;
    }
  }
  return result;
}

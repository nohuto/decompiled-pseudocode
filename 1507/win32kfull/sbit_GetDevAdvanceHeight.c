/*
 * XREFs of sbit_GetDevAdvanceHeight @ 0x1C01106A0
 * Callers:
 *     fs__Contour @ 0x1C00B4F90 (fs__Contour.c)
 * Callees:
 *     SubstituteVertMetrics @ 0x1C01109CC (SubstituteVertMetrics.c)
 *     UScaleY @ 0x1C0111320 (UScaleY.c)
 *     sfac_GetSbitMetrics @ 0x1C0111354 (sfac_GetSbitMetrics.c)
 */

__int64 __fastcall sbit_GetDevAdvanceHeight(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int16 *v4; // r12
  __int64 result; // rax
  unsigned __int16 v8; // ax
  int v9; // r9d
  int v10; // [rsp+A0h] [rbp+8h] BYREF
  char v11; // [rsp+B8h] [rbp+20h] BYREF

  v4 = (unsigned __int16 *)(a1 + 52);
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
             (__int64)&v11,
             (__int64)&v10);
  if ( !(_DWORD)result )
  {
    if ( v10 || (result = SubstituteVertMetrics(a1, a2), !(_DWORD)result) )
    {
      if ( *(_WORD *)(a1 + 28) == 3 && !*(_WORD *)(a1 + 36) )
        return 7168LL;
      v8 = UScaleY(a1, *v4);
      v9 = v8 << 6;
      switch ( *(_WORD *)(a1 + 38) )
      {
        case 0:
          goto LABEL_6;
        case 1:
          v9 = -64 * v8;
          break;
        case 2:
          v9 = -64 * v8;
LABEL_6:
          a3[1] = v9;
          *a3 = 0;
          return 0LL;
        case 3:
          break;
        default:
          return 6146LL;
      }
      *a3 = v9;
      a3[1] = 0;
      return 0LL;
    }
  }
  return result;
}

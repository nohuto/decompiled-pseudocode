/*
 * XREFs of SScaleX @ 0x1C001D46C
 * Callers:
 *     sbit_GetMetrics @ 0x1C001D128 (sbit_GetMetrics.c)
 * Callees:
 *     UScaleX @ 0x1C001D4B0 (UScaleX.c)
 */

__int64 __fastcall SScaleX(__int64 a1, __int64 a2)
{
  if ( *(_WORD *)(a1 + 28) != 3 )
    return (unsigned __int16)a2;
  if ( (a2 & 0x8000u) == 0LL )
    return UScaleX(a1, a2);
  LOWORD(a2) = -(__int16)a2;
  return (unsigned __int16)-UScaleX(a1, a2);
}

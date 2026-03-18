/*
 * XREFs of DT_AdjustBreakForSurrogatesAndVariationSelectors @ 0x1C024AD08
 * Callers:
 *     NeedsEndEllipsis @ 0x1C024B5AC (NeedsEndEllipsis.c)
 * Callees:
 *     DT_GetLongChar @ 0x1C024B0B4 (DT_GetLongChar.c)
 */

__int64 __fastcall DT_AdjustBreakForSurrogatesAndVariationSelectors(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  unsigned int LongChar; // eax
  unsigned int v8; // eax

  v4 = a2;
  if ( !a2 )
    return 0LL;
  LongChar = DT_GetLongChar(a1, a2 - 1);
  if ( LongChar >= 0x10000 )
    ++v4;
  if ( LongChar - 65024 > 0xF && LongChar - 917760 > 0xEF && (int)v4 < a3 )
  {
    v8 = DT_GetLongChar(a1, v4);
    if ( v8 - 65024 <= 0xF || v8 - 917760 <= 0xEF )
      v4 += 2 - (v8 < 0x10000);
  }
  return v4;
}

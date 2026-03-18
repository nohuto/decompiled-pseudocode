/*
 * XREFs of DT_GetLongChar @ 0x1C024B0F4
 * Callers:
 *     DT_AdjustBreakForSurrogatesAndVariationSelectors @ 0x1C024AD48 (DT_AdjustBreakForSurrogatesAndVariationSelectors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DT_GetLongChar(__int64 a1, int a2, int a3)
{
  __int16 v3; // r8
  __int16 v4; // ax

  if ( a2 + 1 < a3
    && (v3 = *(_WORD *)(a1 + 2LL * a2), (v3 & 0xFC00) == 0xD800)
    && (v4 = *(_WORD *)(a1 + 2LL * a2 + 2), (v4 & 0xFC00) == 0xDC00) )
  {
    return (((v3 & 0x3FF) << 10) | v4 & 0x3FFu) + 0x10000;
  }
  else
  {
    return *(unsigned __int16 *)(a1 + 2LL * a2);
  }
}

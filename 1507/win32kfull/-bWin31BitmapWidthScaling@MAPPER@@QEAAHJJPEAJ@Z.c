/*
 * XREFs of ?bWin31BitmapWidthScaling@MAPPER@@QEAAHJJPEAJ@Z @ 0x1C0027B04
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00281B0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0286EC4 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C00EA000 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 */

__int64 __fastcall MAPPER::bWin31BitmapWidthScaling(MAPPER *this, int a2, unsigned int a3, int *a4)
{
  __int64 result; // rax

  if ( (unsigned int)SafeDivide<long,long,long>((unsigned int)(a2 - (int)(a3 + 1) / 2), a3, a4) )
    return 0LL;
  result = 1LL;
  ++*a4;
  return result;
}

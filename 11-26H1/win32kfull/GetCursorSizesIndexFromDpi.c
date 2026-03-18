/*
 * XREFs of GetCursorSizesIndexFromDpi @ 0x14002BC2C
 * Callers:
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x1400148D8 (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     _DrawIconEx @ 0x140027334 (_DrawIconEx.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x14002ABE8 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x14002BBC8 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z @ 0x1401BF328 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PECH1@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1401BF66C (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401BFAEC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCursorSizesIndexFromDpi(unsigned int a1)
{
  if ( a1 < 0x90 )
    return 0LL;
  if ( a1 < 0xC0 )
    return 1LL;
  if ( a1 >= 0x120 )
    return 4 - (unsigned int)(a1 < 0x180);
  return 2LL;
}

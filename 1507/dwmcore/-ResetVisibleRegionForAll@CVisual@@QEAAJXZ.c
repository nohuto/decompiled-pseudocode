/*
 * XREFs of ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180036258
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800345B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180038274 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x18007D060 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1801049A4 (-ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x1800E9E04 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x1800FCC20 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 */

__int64 __fastcall CVisual::ResetVisibleRegionForAll(CVisual *this)
{
  char *v1; // rsi
  unsigned int v2; // edi
  char *i; // rbx
  int v5; // eax

  v1 = (char *)this + 328;
  v2 = 0;
  for ( i = (char *)*((_QWORD *)this + 41); i != v1; i = *(char **)i )
  {
    v5 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(i - 88));
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xE36u);
      return v2;
    }
    CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(i - 88));
  }
  return v2;
}

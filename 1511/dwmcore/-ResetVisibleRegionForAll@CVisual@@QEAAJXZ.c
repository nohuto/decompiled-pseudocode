/*
 * XREFs of ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180048C68
 * Callers:
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x180048004 (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@.c)
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800637B0 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180120D04 (-ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180105CE0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180116090 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 */

__int64 __fastcall CVisual::ResetVisibleRegionForAll(CVisual *this)
{
  char *v1; // rsi
  unsigned int v2; // edi
  char *i; // rbx
  int v5; // eax

  v1 = (char *)this + 312;
  v2 = 0;
  for ( i = (char *)*((_QWORD *)this + 39); i != v1; i = *(char **)i )
  {
    v5 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(i - 88));
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xD9Cu);
      return v2;
    }
    CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(i - 88));
  }
  return v2;
}

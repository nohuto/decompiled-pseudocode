/*
 * XREFs of ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x180050D9C
 * Callers:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180051FB0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180053710 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180138C1C (-ResetVisibleRegionForAllInSubtree@CVisual@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004ED60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18011C1A0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180130300 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 */

__int64 __fastcall CVisual::ResetVisibleRegionForAll(CVisual *this)
{
  unsigned int v1; // edi
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v3; // rsi
  struct _LIST_ENTRY *Flink; // rbx
  int v6; // eax

  v1 = 0;
  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  v3 = RenderPassInfoList;
  if ( RenderPassInfoList )
  {
    Flink = RenderPassInfoList->Flink;
    if ( RenderPassInfoList->Flink != RenderPassInfoList )
    {
      while ( 1 )
      {
        v6 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)&Flink[-6].Blink);
        v1 = v6;
        if ( v6 < 0 )
          break;
        CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&Flink[-6].Blink);
        Flink = Flink->Flink;
        if ( Flink == v3 )
          return v1;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xEBBu);
    }
  }
  return v1;
}

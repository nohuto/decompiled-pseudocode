/*
 * XREFs of ?ResetWindowMove@CWindowNode@@UEAA_NXZ @ 0x18011CA20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004ED60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18011C1A0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 */

char __fastcall CWindowNode::ResetWindowMove(CWindowNode *this)
{
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v2; // rdi
  struct _LIST_ENTRY *Flink; // rbx

  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  v2 = RenderPassInfoList;
  if ( RenderPassInfoList )
  {
    Flink = RenderPassInfoList->Flink;
    if ( RenderPassInfoList->Flink != RenderPassInfoList )
    {
      do
      {
        CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&Flink[-6].Blink);
        Flink = Flink->Flink;
      }
      while ( Flink != v2 );
    }
  }
  return 1;
}

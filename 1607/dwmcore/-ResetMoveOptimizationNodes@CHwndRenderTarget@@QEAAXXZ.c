/*
 * XREFs of ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800B8C20
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800B8CA0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004ED60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004ED80 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18011C1A0 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180138A38 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ResetMoveOptimizationNodes(CHwndRenderTarget *this)
{
  int v2; // eax
  __int64 i; // rsi
  int v4; // eax
  __int64 j; // rsi
  CVisual *v6; // rbp
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v8; // r14
  struct _LIST_ENTRY *Flink; // rbx
  CVisual *v10; // rbx

  v2 = *((_DWORD *)this + 154) - 1;
  for ( i = v2; i >= 0; --i )
  {
    v6 = *(CVisual **)(*((_QWORD *)this + 74) + 8 * i);
    *((_WORD *)v6 + 522) = 0;
    RenderPassInfoList = CVisual::GetRenderPassInfoList(v6);
    v8 = RenderPassInfoList;
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
        while ( Flink != v8 );
      }
    }
    CVisual::Release(v6);
  }
  v4 = *((_DWORD *)this + 172) - 1;
  for ( j = v4; j >= 0; --j )
  {
    v10 = *(CVisual **)(*((_QWORD *)this + 83) + 8 * j);
    CVisual::PurgeOldRenderPassInfos(v10);
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_DWORD *)this + 154) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 592, 8u);
  *((_DWORD *)this + 172) = 0;
}

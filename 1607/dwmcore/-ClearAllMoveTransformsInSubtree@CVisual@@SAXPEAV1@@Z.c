/*
 * XREFs of ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B9F7C
 * Callers:
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x1800502CC (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B9F7C (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004ED60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A258C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800B9F7C (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::ClearAllMoveTransformsInSubtree(struct CVisual *a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp
  struct CVisual *v5; // rax
  CVisual *v6; // rbx
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v8; // rdi
  struct _LIST_ENTRY *Flink; // rbx
  __int64 *v10; // [rsp+30h] [rbp+8h]

  v1 = (__int64 *)((char *)a1 + 136);
  v10 = v1;
  v2 = *v1;
  if ( (*v1 & 2) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v2) = v2 & 1;
  if ( (_DWORD)v2 )
  {
    v3 = 0LL;
    v4 = (unsigned int)v2;
    do
    {
      v5 = (struct CVisual *)CPtrArrayBase::operator[](v1, v3);
      v6 = v5;
      if ( v5 )
      {
        CVisual::ClearAllMoveTransformsInSubtree(v5);
        if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 224LL))(v6) )
        {
          RenderPassInfoList = CVisual::GetRenderPassInfoList(v6);
          v8 = RenderPassInfoList;
          if ( RenderPassInfoList )
          {
            Flink = RenderPassInfoList->Flink;
            if ( RenderPassInfoList->Flink != RenderPassInfoList )
            {
              do
              {
                if ( Flink[-3].Flink )
                {
                  (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
                  Flink[-3].Flink = 0LL;
                }
                Flink = Flink->Flink;
              }
              while ( Flink != v8 );
            }
          }
        }
      }
      v1 = v10;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
}

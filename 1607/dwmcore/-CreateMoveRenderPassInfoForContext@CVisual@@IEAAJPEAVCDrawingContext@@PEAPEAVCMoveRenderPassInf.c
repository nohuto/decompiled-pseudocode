/*
 * XREFs of ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x180138058
 * Callers:
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18010A208 (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@0PEA_N0PEAVCDrawingContext@@@Z @ 0x180138CF8 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UD.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004ED60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x1801300E0 (--_GCMoveRenderPassInfo@@UEAAPEAXI@Z.c)
 *     ?SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x180138DA8 (-SetRenderPassInfoList@CVisual@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall CVisual::CreateMoveRenderPassInfoForContext(
        CVisual *this,
        struct CDrawingContext *a2,
        struct CMoveRenderPassInfo **a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rbx
  struct _LIST_ENTRY *RenderPassInfoList; // rsi
  struct _LIST_ENTRY *v9; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v11; // rax
  struct CDrawingContext *v12; // rax
  struct CDrawingContext **v13; // rdx

  v6 = 0;
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                   WPF::g_pProcessHeap,
                   120LL);
  if ( v7 )
  {
    v7[8] = 0LL;
    *v7 = &CMoveRenderPassInfo::`vftable';
    v7[9] = 0LL;
    v7[3] = 0LL;
    v7[4] = 0LL;
    v7[5] = 0LL;
    v7[6] = 0LL;
    v7[1] = 0LL;
    v7[2] = 0LL;
    v7[7] = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v7[8] = *((_QWORD *)this + 2);
    v7[9] = this;
    RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
    if ( !RenderPassInfoList )
    {
      v9 = (struct _LIST_ENTRY *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 8LL))(
                                   WPF::g_pProcessHeap,
                                   16LL);
      RenderPassInfoList = v9;
      if ( !v9 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1035u);
        CMoveRenderPassInfo::`scalar deleting destructor'((CMoveRenderPassInfo *)v7, 1);
        return v6;
      }
      v9->Blink = v9;
      v9->Flink = v9;
      CVisual::SetRenderPassInfoList(this, v9);
    }
    Blink = RenderPassInfoList->Blink;
    v11 = (struct _LIST_ENTRY *)(v7 + 11);
    if ( Blink->Flink != RenderPassInfoList )
      __fastfail(3u);
    v7[12] = Blink;
    v11->Flink = RenderPassInfoList;
    Blink->Flink = v11;
    RenderPassInfoList->Blink = v11;
    v12 = (struct CDrawingContext *)(v7 + 13);
    v7[10] = a2;
    ++*((_DWORD *)a2 + 1596);
    v13 = (struct CDrawingContext **)*((_QWORD *)a2 + 797);
    if ( *v13 != (struct CDrawingContext *)((char *)a2 + 6368) )
      __fastfail(3u);
    *(_QWORD *)v12 = (char *)a2 + 6368;
    v7[14] = v13;
    *v13 = v12;
    *((_QWORD *)a2 + 797) = v12;
    *a3 = (struct CMoveRenderPassInfo *)v7;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1029u);
  }
  return v6;
}

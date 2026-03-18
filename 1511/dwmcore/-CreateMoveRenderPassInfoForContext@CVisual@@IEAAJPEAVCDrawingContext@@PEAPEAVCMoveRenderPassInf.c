/*
 * XREFs of ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x1801200E0
 * Callers:
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1800F790C (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 *     ?SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@0PEA_N0PEAVCDrawingContext@@@Z @ 0x180120DA4 (-SetLastLocalToWorldTransform@CVisual@@QEAAJPEAV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UD.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::CreateMoveRenderPassInfoForContext(
        CVisual *this,
        struct CDrawingContext *a2,
        struct CMoveRenderPassInfo **a3)
{
  unsigned int v6; // esi
  struct CMoveRenderPassInfo *v7; // rdx
  CVisual *v8; // rcx
  CVisual **v9; // r8
  struct CDrawingContext *v10; // rax
  struct CDrawingContext **v11; // r8

  v6 = 0;
  v7 = (struct CMoveRenderPassInfo *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 8LL))(
                                       WPF::g_pProcessHeap,
                                       120LL);
  if ( v7 )
  {
    *((_QWORD *)v7 + 8) = 0LL;
    *(_QWORD *)v7 = &CMoveRenderPassInfo::`vftable';
    *((_QWORD *)v7 + 9) = 0LL;
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
    *((_QWORD *)v7 + 5) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 7) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    v8 = (struct CMoveRenderPassInfo *)((char *)v7 + 88);
    *((_QWORD *)v7 + 8) = *((_QWORD *)this + 2);
    *((_QWORD *)v7 + 9) = this;
    v9 = (CVisual **)*((_QWORD *)this + 40);
    *((_QWORD *)v7 + 11) = (char *)this + 312;
    *((_QWORD *)v7 + 12) = v9;
    if ( *v9 != (CVisual *)((char *)this + 312) )
      __fastfail(3u);
    *v9 = v8;
    *((_QWORD *)this + 40) = v8;
    *((_QWORD *)v7 + 10) = a2;
    v10 = (struct CMoveRenderPassInfo *)((char *)v7 + 104);
    ++*((_DWORD *)a2 + 1424);
    v11 = (struct CDrawingContext **)*((_QWORD *)a2 + 711);
    *((_QWORD *)v7 + 13) = (char *)a2 + 5680;
    *((_QWORD *)v7 + 14) = v11;
    if ( *v11 != (struct CDrawingContext *)((char *)a2 + 5680) )
      __fastfail(3u);
    *v11 = v10;
    *((_QWORD *)a2 + 711) = v10;
    *a3 = v7;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xEECu);
  }
  return v6;
}

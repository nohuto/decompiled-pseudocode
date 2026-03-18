/*
 * XREFs of ?Draw@CPencil@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?DrawPencil@CDrawingContext@@QEAAJPEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCCompositionSurfaceBitmap@@AEBUtagRECT@@23M@Z @ 0x180122B64 (-DrawPencil@CDrawingContext@@QEAAJPEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCComposition.c)
 *     ?GetD2DPencil@CPencil@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PencilStroke@@@Z @ 0x18014DD98 (-GetD2DPencil@CPencil@@QEAAJPEAVID2DContext@@PEAPEAUID2D1PencilStroke@@@Z.c)
 */

__int64 __fastcall CPencil::Draw(__int64 a1, struct ID2DContext **a2)
{
  int D2DPencil; // eax
  struct ID2D1PencilStroke *v5; // rdi
  unsigned int v6; // ebx
  int v7; // eax
  struct ID2D1PencilStroke *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0LL;
  D2DPencil = CPencil::GetD2DPencil((CPencil *)a1, a2[57], &v9);
  v5 = v9;
  v6 = D2DPencil;
  if ( D2DPencil < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DPencil, 0xE0u);
  }
  else
  {
    v7 = CDrawingContext::DrawPencil(
           (CDrawingContext *)a2,
           v9,
           (const struct D2D1_PENCIL_STYLE *)(a1 + 284),
           *(struct CCompositionSurfaceBitmap **)(a1 + 192),
           (const struct tagRECT *)(a1 + 200),
           *(struct CCompositionSurfaceBitmap **)(a1 + 216),
           (const struct tagRECT *)(a1 + 224),
           *(float *)(a1 + 320));
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xE9u);
  }
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1PencilStroke *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}

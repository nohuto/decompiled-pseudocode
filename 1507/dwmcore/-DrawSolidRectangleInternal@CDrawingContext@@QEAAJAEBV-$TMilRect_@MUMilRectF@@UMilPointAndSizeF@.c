/*
 * XREFs of ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800311D8
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18002DBD0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x1800E75B8 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180071CB0 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawSolidRectangleInternal(
        __int64 a1,
        struct D2D_RECT_F *a2,
        const struct _D3DCOLORVALUE *a3)
{
  const struct ID2DContextOwner *v5; // rdi
  int v6; // ecx
  enum D2D1_PRIMITIVE_BLEND v7; // ebx
  CD2DContext *v8; // r14
  enum D2D1_ANTIALIAS_MODE v9; // esi
  __int64 (__usercall *v10)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct D2D_RECT_F *@<r8>, const struct _D3DCOLORVALUE *@<r9>, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND); // rbp
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // ecx
  struct D2D_RECT_F v15; // [rsp+30h] [rbp-48h] BYREF

  v15 = *a2;
  if ( a1 )
    v5 = (const struct ID2DContextOwner *)(a1 + 56);
  else
    v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 272);
  v7 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
  if ( v6 )
  {
    v14 = v6 - 1;
    if ( v14 )
    {
      if ( v14 == 3 )
        v7 = D2D1_PRIMITIVE_BLEND_MIN;
    }
    else
    {
      v7 = D2D1_PRIMITIVE_BLEND_COPY;
    }
  }
  v8 = *(CD2DContext **)(a1 + 376);
  v9 = *(_DWORD *)(a1 + 248) != 0;
  v10 = *(__int64 (__usercall **)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct D2D_RECT_F *@<r8>, const struct _D3DCOLORVALUE *@<r9>, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)v8 + 152LL);
  if ( v10 == CD2DContext::FillRectangleWithSolidColor )
    v11 = CD2DContext::FillRectangleWithSolidColor(v8, v5, &v15, a3, v9, v7);
  else
    v11 = ((__int64 (__fastcall *)(CD2DContext *, const struct ID2DContextOwner *, struct D2D_RECT_F *, const struct _D3DCOLORVALUE *, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND))v10)(
            v8,
            v5,
            &v15,
            a3,
            v9,
            v7);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x3B0u);
  return v12;
}

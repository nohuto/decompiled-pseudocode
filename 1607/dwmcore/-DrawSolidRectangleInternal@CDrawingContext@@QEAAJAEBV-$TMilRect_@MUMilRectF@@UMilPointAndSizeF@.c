/*
 * XREFs of ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006F15C
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV3@@Z @ 0x1801197D4 (-DisplayText@CDisplayDebugFrameCounter@@IEAAJIIPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180122F78 (-DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D560 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::DrawSolidRectangleInternal(
        __int64 a1,
        struct D2D_RECT_F *a2,
        const struct _D3DCOLORVALUE *a3)
{
  const struct ID2DContextOwner *v5; // r10
  int v6; // ecx
  enum D2D1_PRIMITIVE_BLEND v7; // edx
  CD2DContext *v8; // rcx
  __int64 (__usercall *v9)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct D2D_RECT_F *@<r8>, const struct _D3DCOLORVALUE *@<r9>, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND); // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // ecx
  struct D2D_RECT_F v14; // [rsp+40h] [rbp-28h] BYREF

  v14 = *a2;
  if ( a1 )
    v5 = (const struct ID2DContextOwner *)(a1 + 128);
  else
    v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 352);
  v7 = D2D1_PRIMITIVE_BLEND_SOURCE_OVER;
  if ( v6 )
  {
    v13 = v6 - 1;
    if ( v13 )
    {
      if ( v13 == 3 )
        v7 = D2D1_PRIMITIVE_BLEND_MIN;
    }
    else
    {
      v7 = D2D1_PRIMITIVE_BLEND_COPY;
    }
  }
  v8 = *(CD2DContext **)(a1 + 456);
  v9 = *(__int64 (__usercall **)@<rax>(CD2DContext *__hidden@<rcx>, const struct ID2DContextOwner *@<rdx>, const struct D2D_RECT_F *@<r8>, const struct _D3DCOLORVALUE *@<r9>, enum D2D1_ANTIALIAS_MODE, enum D2D1_PRIMITIVE_BLEND))(*(_QWORD *)v8 + 144LL);
  if ( v9 == CD2DContext::FillRectangleWithSolidColor )
    v10 = CD2DContext::FillRectangleWithSolidColor(
            v8,
            v5,
            &v14,
            a3,
            (enum D2D1_ANTIALIAS_MODE)(*(_DWORD *)(a1 + 328) != 0),
            v7);
  else
    v10 = ((__int64 (__fastcall *)(CD2DContext *, const struct ID2DContextOwner *, struct D2D_RECT_F *, const struct _D3DCOLORVALUE *))v9)(
            v8,
            v5,
            &v14,
            a3);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3C5u);
  return v11;
}

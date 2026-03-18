/*
 * XREFs of ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000365C (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1800101C0 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800979B0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z @ 0x1801072CC (-IsOverlayAssigned@CDrawingContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_N@Z.c)
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x18010C020 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18010C060 (-IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x180122980 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1801399CC (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?ClipWithRect@CShape@@SAJPEBV1@PEBUMilRectF@@PEAPEAV1@@Z @ 0x180189B0C (-ClipWithRect@CShape@@SAJPEBV1@PEBUMilRectF@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::Draw(
        CCompositionSurfaceBitmap **this,
        struct CComposition **a2,
        struct D2D_SIZE_F *a3)
{
  float width; // xmm0_4
  unsigned int v4; // ebx
  struct CVisual *CurrentVisual; // r12
  __int64 v9; // rcx
  struct ISwapChainContent *v10; // r8
  char IsOverlayAssigned; // r15
  int v12; // eax
  int v13; // xmm6_4
  int v14; // xmm7_4
  int v15; // xmm8_4
  int v16; // xmm9_4
  struct CShape *v17; // rdi
  struct CShape *v18; // r8
  CCompositionSurfaceBitmap *v19; // rax
  struct ISwapChainContent *v20; // rdx
  int v21; // eax
  int v22; // eax
  bool v24[8]; // [rsp+38h] [rbp-D0h] BYREF
  struct CShape *v25; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v26[40]; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+70h] [rbp-98h]
  int v28; // [rsp+74h] [rbp-94h]
  int v29; // [rsp+78h] [rbp-90h]
  int v30; // [rsp+7Ch] [rbp-8Ch]
  int v31; // [rsp+98h] [rbp-70h] BYREF
  int v32; // [rsp+9Ch] [rbp-6Ch]
  int v33; // [rsp+A0h] [rbp-68h]
  int v34; // [rsp+A4h] [rbp-64h]
  _QWORD v35[3]; // [rsp+A8h] [rbp-60h] BYREF
  int v36; // [rsp+C0h] [rbp-48h]
  int v37; // [rsp+C4h] [rbp-44h]
  int v38; // [rsp+C8h] [rbp-40h]
  _BYTE v39[16]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-28h]

  width = a3->width;
  v4 = 0;
  v25 = 0LL;
  if ( width > 0.0
    && a3->height > 0.0
    && (*((unsigned __int8 (__fastcall **)(CCompositionSurfaceBitmap **))*this + 22))(this) )
  {
    v24[0] = 0;
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(a2 + 16));
    if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain(this[18])
      && ((!v9 ? (v10 = 0LL) : (v10 = (struct ISwapChainContent *)(v9 + 112)),
           ((IsOverlayAssigned = CDrawingContext::IsOverlayAssigned(a2, CurrentVisual, v10, v24)) != 0
         || CCompositionSurfaceBitmap::IsOverlayRequired((CCompositionSurfaceBitmap *)((char *)this[18] + 112)))
        && (LOBYTE(v4) = 1, IsOverlayAssigned))
       || (CDrawingContext::IsNormalDesktopRender((CDrawingContext *)a2),
           CCompositionSurfaceBitmap::SetCompositionMode((__int64)this[18] + 112),
           (_BYTE)v4)) )
    {
      v12 = CSurfaceBrush::ComputeLayout((CSurfaceBrush *)this, a3, 0LL, (struct CSurfaceBrush::LayoutData *)v26, &v25);
      v4 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x196u);
        v17 = v25;
      }
      else
      {
        v13 = v27;
        v14 = v28;
        v15 = v29;
        v16 = v30;
        v38 = 0;
        v40 = 0LL;
        v35[0] = &CRectanglesShape::`vftable';
        v35[1] = v39;
        v35[2] = v39;
        v31 = v27;
        v32 = v28;
        v33 = v29;
        v34 = v30;
        v36 = 1;
        v37 = 1;
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v35, (const struct MilRectF *)&v31);
        v17 = v25;
        if ( !v25 )
          goto LABEL_15;
        v31 = v13;
        v32 = v14;
        v33 = v15;
        v34 = v16;
        CShape::ClipWithRect(v25, (const struct MilRectF *)&v31, &v25);
        (**(void (__fastcall ***)(struct CShape *, __int64))v17)(v17, 1LL);
        v17 = v25;
        v18 = v25;
        if ( !v25 )
LABEL_15:
          v18 = (struct CShape *)v35;
        v19 = this[18];
        if ( v19 )
          v20 = (CCompositionSurfaceBitmap *)((char *)v19 + 112);
        else
          v20 = 0LL;
        v21 = CDrawingContext::DrawOverlayArea(a2, v20, v18, IsOverlayAssigned, v24[0]);
        v4 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x1A8u);
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v35);
      }
      if ( v17 )
        (**(void (__fastcall ***)(struct CShape *, __int64))v17)(v17, 1LL);
    }
    else
    {
      v22 = CDrawingContext::DrawCommonRenderingEffect(
              (CDrawingContext *)a2,
              CurrentVisual,
              (struct CSpriteVisualContent *)this,
              a3);
      v4 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x1ACu);
    }
  }
  return v4;
}

/*
 * XREFs of ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801396E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1800101C0 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ @ 0x180010E70 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001160C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005CA10 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180093980 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800979B0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1801399CC (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 */

__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        CCompositionSurfaceBitmap **this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  CCompositionSurfaceBitmap *v3; // rax
  unsigned int v4; // ebx
  int v8; // eax
  struct CShape *v9; // rcx
  char IsOpaque; // al
  int v11; // xmm6_4
  int v12; // xmm7_4
  unsigned int v13; // xmm8_4
  unsigned int v14; // xmm9_4
  int v15; // eax
  CCompositionSurfaceBitmap *v16; // r8
  int v17; // eax
  _DWORD v19[6]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  int v22; // [rsp+58h] [rbp-A8h]
  int v23; // [rsp+5Ch] [rbp-A4h]
  int v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+64h] [rbp-9Ch]
  int v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+6Ch] [rbp-94h]
  int v28; // [rsp+70h] [rbp-90h]
  _DWORD v29[10]; // [rsp+80h] [rbp-80h] BYREF
  struct CShape *v30; // [rsp+A8h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B4h] [rbp-4Ch]
  struct CShape *v33; // [rsp+D0h] [rbp-30h] BYREF
  int v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+DCh] [rbp-24h]
  _QWORD v36[3]; // [rsp+E0h] [rbp-20h] BYREF
  int v37; // [rsp+F8h] [rbp-8h]
  int v38; // [rsp+FCh] [rbp-4h]
  int v39; // [rsp+100h] [rbp+0h]
  _BYTE v40[16]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v41; // [rsp+118h] [rbp+18h]

  v3 = *this;
  v4 = 0;
  v33 = 0LL;
  if ( !(*((unsigned __int8 (__fastcall **)(CCompositionSurfaceBitmap **))v3 + 22))(this)
    || !a3
    || a3->width <= 0.0
    || a3->height <= 0.0 )
  {
    return v4;
  }
  v8 = CSurfaceBrush::ComputeLayout((CSurfaceBrush *)this, a3, 0LL, (struct CSurfaceBrush::LayoutData *)v29, &v33);
  v4 = v8;
  if ( v8 == -2003304441 )
  {
    v4 = 0;
    goto LABEL_20;
  }
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x115u);
LABEL_20:
    v9 = v33;
    if ( v33 )
      goto LABEL_21;
    return v4;
  }
  v9 = v33;
  if ( v33 )
  {
LABEL_21:
    (**(void (__fastcall ***)(struct CShape *, __int64))v9)(v9, 1LL);
    return v4;
  }
  IsOpaque = CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)((char *)this[18] + 120));
  v11 = v32;
  v12 = v31;
  v13 = HIDWORD(v30);
  v14 = (unsigned int)v30;
  if ( IsOpaque
    && (v33 = v30,
        v34 = v31,
        v35 = v32,
        v15 = COcclusionContext::DrawOcclusionRectangle((__int64)a2 + 8, (float *)&v33, 0),
        v4 = v15,
        v15 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x11Eu);
  }
  else if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain(this[18])
         && COcclusionContext::IsOverlayCandidateCollectionEnabled(a2) )
  {
    v39 = 0;
    v41 = 0LL;
    v36[0] = &CRectanglesShape::`vftable';
    v37 = 1;
    v36[1] = v40;
    v38 = 1;
    v36[2] = v40;
    v33 = (struct CShape *)__PAIR64__(v13, v14);
    v34 = v12;
    v35 = v11;
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v36, (const struct MilRectF *)&v33);
    v28 = 0;
    v19[2] = 0;
    v19[3] = 0;
    v20 = 0LL;
    v21 = 0LL;
    v23 = 0;
    v26 = 0;
    v16 = this[18];
    v19[0] = v29[0];
    v19[1] = v29[1];
    v19[4] = v29[2];
    v19[5] = v29[3];
    v24 = v29[4];
    v25 = v29[5];
    v22 = 1065353216;
    v27 = 1065353216;
    if ( v16 )
      v16 = (CCompositionSurfaceBitmap *)((char *)v16 + 112);
    v17 = COcclusionContext::CheckAndRecordOverlayCandidate(
            (__int64)a2,
            *((_QWORD *)a2 + 83),
            v16,
            (__int64)v19,
            (CShape *)v36,
            0);
    v4 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x12Cu);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v36);
  }
  return v4;
}

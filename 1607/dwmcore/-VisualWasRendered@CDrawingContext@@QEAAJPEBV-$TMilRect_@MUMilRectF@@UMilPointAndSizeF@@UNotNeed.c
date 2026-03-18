/*
 * XREFs of ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180067B3C
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180026AF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800513D0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x180036584 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18010A208 (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 */

__int64 __fastcall CDrawingContext::VisualWasRendered(__int64 a1, __int128 *a2, CVisual *a3)
{
  bool v3; // zf
  __int64 v7; // r11
  __int128 v8; // xmm0
  __int64 v9; // rdx
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  CVisual *v17; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v18[64]; // [rsp+40h] [rbp-39h] BYREF
  int v19; // [rsp+80h] [rbp+7h]
  __int128 v20; // [rsp+90h] [rbp+17h] BYREF
  float v21; // [rsp+A0h] [rbp+27h] BYREF
  float v22; // [rsp+A4h] [rbp+2Bh]
  float v23; // [rsp+A8h] [rbp+2Fh]
  float v24; // [rsp+ACh] [rbp+33h]

  v3 = *(_BYTE *)(a1 + 6532) == 0;
  v17 = a3;
  if ( !v3
    && qword_1801EFD28
    && CDisplaySet::NeedsDesktopMoves(qword_1801EFD28)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 224LL))(v7) )
  {
    v8 = *a2;
    v19 = 0;
    v20 = v8;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(a1 + 536), (struct CMILMatrix *)v18);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v18, (__int64)&v20, &v21);
    LOBYTE(v9) = 1;
    CScopedClipStack::GetTopGpuClipInScope(a1 + 912, v9, &v20);
    v10 = *(float *)&v20;
    if ( v21 > *(float *)&v20 )
    {
      v10 = v21;
      *(float *)&v20 = v21;
    }
    v11 = *((float *)&v20 + 1);
    if ( v22 > *((float *)&v20 + 1) )
    {
      v11 = v22;
      *((float *)&v20 + 1) = v22;
    }
    v12 = *((float *)&v20 + 2);
    if ( *((float *)&v20 + 2) > v23 )
    {
      v12 = v23;
      *((float *)&v20 + 2) = v23;
    }
    v13 = *((float *)&v20 + 3);
    if ( *((float *)&v20 + 3) > v24 )
    {
      v13 = v24;
      *((float *)&v20 + 3) = v24;
    }
    if ( v12 <= v10 || v13 <= v11 )
      v20 = 0uLL;
    CVisual::AddToVisibleRegion(v17);
    v14 = *(_DWORD *)(a1 + 6416);
    v15 = v14 + 1;
    if ( v14 + 1 < v14 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else if ( v15 > *(_DWORD *)(a1 + 6412) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 6392, 8LL, 1LL, &v17);
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 6392) + 8LL * v14) = v17;
      *(_DWORD *)(a1 + 6416) = v15;
    }
  }
  return 0LL;
}

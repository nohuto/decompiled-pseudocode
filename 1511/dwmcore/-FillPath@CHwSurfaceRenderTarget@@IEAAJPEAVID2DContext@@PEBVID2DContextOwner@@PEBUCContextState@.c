/*
 * XREFs of ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008D1B4
 * Callers:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18008C6E0 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18005D3F0 (-GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z.c)
 *     ?GetRealizedBrushNoRef@CLegacyMilBrushRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18008A440 (-GetRealizedBrushNoRef@CLegacyMilBrushRealizer@@UEAAPEAVCMILBrush@@_N@Z.c)
 *     ?GetOpacityFromRealizedBrush@CLegacyMilBrushRealizer@@QEAAMXZ @ 0x18008A6B8 (-GetOpacityFromRealizedBrush@CLegacyMilBrushRealizer@@QEAAMXZ.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008CA30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::FillPath(
        __int64 a1,
        struct ID2D1PrivateCompositorRenderer **a2,
        struct ID2DContextOwner *a3,
        __int64 a4,
        CShape *a5,
        float *a6,
        __int128 *a7,
        CLegacyMilBrushRealizer *a8,
        float *a9,
        int a10)
{
  __int64 v10; // rbx
  unsigned int v11; // edi
  struct CMILBrush *(__fastcall *v16)(CLegacyMilBrushRealizer *, char); // rbp
  struct CMILBrush *RealizedBrushNoRef; // rax
  struct CMILBrush *v18; // rbp
  float OpacityFromRealizedBrush; // xmm0_4
  int v20; // eax
  __int64 *v21; // rdx
  __int64 *v22; // r8
  __int64 v23; // r9
  _QWORD *v25; // rcx
  _QWORD *v26; // rax

  v10 = *(_QWORD *)(a1 + 160);
  v11 = 0;
  ++*(_DWORD *)(v10 + 856);
  v16 = *(struct CMILBrush *(__fastcall **)(CLegacyMilBrushRealizer *, char))(*(_QWORD *)a8 + 48LL);
  if ( (char *)v16 == (char *)CBrushResourceRealizer::GetRealizedBrushNoRef )
  {
    RealizedBrushNoRef = CBrushResourceRealizer::GetRealizedBrushNoRef(a8, 0);
  }
  else if ( v16 == CLegacyMilBrushRealizer::GetRealizedBrushNoRef )
  {
    RealizedBrushNoRef = CLegacyMilBrushRealizer::GetRealizedBrushNoRef(a8, 0);
  }
  else
  {
    RealizedBrushNoRef = v16(a8, 0);
  }
  v18 = RealizedBrushNoRef;
  OpacityFromRealizedBrush = CLegacyMilBrushRealizer::GetOpacityFromRealizedBrush(a8);
  if ( v18 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 160) + 488LL) = 0;
    v20 = CHwSurfaceRenderTarget::FillPathWithBrush(a1, a2, a3, a4, a5, a6, a7, v18, OpacityFromRealizedBrush, a9, a10);
    v11 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xBEu);
    if ( v11 == -2003304441 || v11 == -2003304438 )
      v11 = 0;
  }
  v21 = *(__int64 **)(v10 + 936);
  v22 = (__int64 *)(v10 + 928);
  while ( v21 != v22 && *((_DWORD *)v21 + 8) == *(_DWORD *)(v10 + 856) )
  {
    *((_DWORD *)v21 + 8) = 0;
    v21 = (__int64 *)v21[1];
  }
  v23 = *v21;
  if ( (__int64 *)*v21 != v22 )
  {
    v25 = *(_QWORD **)(v10 + 936);
    *v21 = (__int64)v22;
    v26 = *(_QWORD **)(v10 + 920);
    *(_QWORD *)(v10 + 936) = v21;
    *v26 = v23;
    *(_QWORD *)(v23 + 8) = v26;
    *(_QWORD *)(v10 + 920) = v25;
    *v25 = v10 + 912;
  }
  --*(_DWORD *)(v10 + 856);
  return v11;
}

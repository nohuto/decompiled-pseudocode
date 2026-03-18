/*
 * XREFs of ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCLegacyMilBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002E570
 * Callers:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18002DB00 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002DE30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?GetOpacityFromRealizedBrush@CLegacyMilBrushRealizer@@QEAAMXZ @ 0x18002EB90 (-GetOpacityFromRealizedBrush@CLegacyMilBrushRealizer@@QEAAMXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ExitUseContext@CD3DResourceManager@@QEAAXI@Z @ 0x18009F1A8 (-ExitUseContext@CD3DResourceManager@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::FillPath(
        CHwSurfaceRenderTarget *this,
        CD2DContext *a2,
        struct ID2DContextOwner *a3,
        __int64 a4,
        CRectanglesShape *a5,
        __int64 a6,
        float *a7,
        CLegacyMilBrushRealizer *a8,
        float *a9,
        int a10)
{
  int v14; // eax
  unsigned int v15; // edi
  CLegacyMilBrushRealizer *v16; // rbx
  CD3DResourceManager *v17; // rsi
  CLegacyMilBrushRealizer *v18; // rcx
  struct CMILBrush *v19; // rbp
  unsigned int v20; // edx
  float OpacityFromRealizedBrush; // xmm0_4
  int v22; // eax
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF

  v14 = (*(__int64 (__fastcall **)(CHwSurfaceRenderTarget *, __int64 *))(*(_QWORD *)this + 216LL))(this, &v24);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xA1u);
  }
  else
  {
    v16 = a8;
    v17 = (CD3DResourceManager *)(v24 + 880);
    v18 = a8;
    ++*(_DWORD *)(v24 + 888);
    v19 = (struct CMILBrush *)(*(__int64 (__fastcall **)(CLegacyMilBrushRealizer *, _QWORD))(*(_QWORD *)v18 + 48LL))(
                                v18,
                                0LL);
    OpacityFromRealizedBrush = CLegacyMilBrushRealizer::GetOpacityFromRealizedBrush(v16);
    if ( v19 )
    {
      v22 = CHwSurfaceRenderTarget::FillPathWithBrush(
              this,
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              v19,
              SLODWORD(OpacityFromRealizedBrush),
              a9,
              a10);
      v15 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xBCu);
    }
    CD3DResourceManager::ExitUseContext(v17, v20);
  }
  if ( v15 == -2003304441 || v15 == -2003304438 )
    return 0;
  return v15;
}

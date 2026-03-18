/*
 * XREFs of ?FillPath@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCBrushRealizer@@AEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x1800820A4
 * Callers:
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x180081870 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRealizedBrushNoRef@CBrushRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x180081320 (-GetRealizedBrushNoRef@CBrushRealizer@@UEAAPEAVCMILBrush@@_N@Z.c)
 *     ?GetOpacityFromRealizedBrush@CBrushRealizer@@QEAAMXZ @ 0x180081574 (-GetOpacityFromRealizedBrush@CBrushRealizer@@QEAAMXZ.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x180081B58 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x1800834B0 (-GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::FillPath(
        __int64 a1,
        CD2DContext *a2,
        struct ID2DContextOwner *a3,
        float *a4,
        CShape *a5,
        CBaseMatrix *a6,
        float *a7,
        CBrushRealizer *a8,
        float *a9,
        int a10)
{
  __int64 v10; // rbx
  unsigned int v11; // edi
  struct CMILBrush *(__fastcall *v16)(CBrushRealizer *, char); // rbp
  struct CMILBrush *RealizedBrushNoRef; // rax
  struct CMILBrush *v18; // rbp
  float OpacityFromRealizedBrush; // xmm0_4
  int v20; // eax
  __int64 *v21; // rdx
  __int64 *v22; // r8
  __int64 v23; // r9
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // [rsp+40h] [rbp-48h]

  v10 = *(_QWORD *)(a1 + 160);
  v11 = 0;
  ++*(_DWORD *)(v10 + 904);
  v16 = *(struct CMILBrush *(__fastcall **)(CBrushRealizer *, char))(*(_QWORD *)a8 + 48LL);
  if ( (char *)v16 == (char *)CBrushResourceRealizer::GetRealizedBrushNoRef )
  {
    RealizedBrushNoRef = CBrushResourceRealizer::GetRealizedBrushNoRef(a8, 0);
  }
  else if ( v16 == CBrushRealizer::GetRealizedBrushNoRef )
  {
    RealizedBrushNoRef = CBrushRealizer::GetRealizedBrushNoRef(a8, 0);
  }
  else
  {
    RealizedBrushNoRef = v16(a8, 0);
  }
  v18 = RealizedBrushNoRef;
  OpacityFromRealizedBrush = CBrushRealizer::GetOpacityFromRealizedBrush(a8);
  if ( v18 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 160) + 496LL) = 0;
    *(float *)&v27 = OpacityFromRealizedBrush;
    v20 = CHwSurfaceRenderTarget::FillPathWithBrush(a1, a2, a3, a4, a5, a6, a7, v18, v27, a9, a10);
    v11 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xBEu);
    if ( v11 == -2003304441 || v11 == -2003304438 )
      v11 = 0;
  }
  v21 = *(__int64 **)(v10 + 984);
  v22 = (__int64 *)(v10 + 976);
  while ( v21 != v22 && *((_DWORD *)v21 + 8) == *(_DWORD *)(v10 + 904) )
  {
    *((_DWORD *)v21 + 8) = 0;
    v21 = (__int64 *)v21[1];
  }
  v23 = *v21;
  if ( (__int64 *)*v21 != v22 )
  {
    v25 = *(_QWORD **)(v10 + 984);
    *v21 = (__int64)v22;
    v26 = *(_QWORD **)(v10 + 968);
    *(_QWORD *)(v10 + 984) = v21;
    *v26 = v23;
    *(_QWORD *)(v23 + 8) = v26;
    *(_QWORD *)(v10 + 968) = v25;
    *v25 = v10 + 960;
  }
  --*(_DWORD *)(v10 + 904);
  return v11;
}

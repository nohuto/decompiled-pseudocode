/*
 * XREFs of ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180006E44
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180007060 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18000CFD0 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180083204 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCurrentDXGIResource(
        CCompositionSurfaceInfo **this,
        struct _LUID a2,
        struct IDXGIResource **a3)
{
  CBitmapRealization *RenderingRealizationNoRef; // rax
  CBitmapRealization *v5; // rbx
  __int64 (__fastcall *v6)(CBitmapRealization *, struct IDXGIResource **, _QWORD); // rdi
  int DXGIResource; // eax
  unsigned int v8; // ebx

  *a3 = 0LL;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(this[4]);
  v5 = RenderingRealizationNoRef;
  if ( RenderingRealizationNoRef && **(_QWORD **)&CBitmapRealization::GetAdapterLuid(RenderingRealizationNoRef) == a2 )
  {
    v6 = *(__int64 (__fastcall **)(CBitmapRealization *, struct IDXGIResource **, _QWORD))(*(_QWORD *)v5 + 80LL);
    if ( (char *)v6 == (char *)CDxHandleBitmapRealization::GetDXGIResource )
      DXGIResource = CDxHandleBitmapRealization::GetDXGIResource(v5, a3, 0LL);
    else
      DXGIResource = v6(v5, a3, 0LL);
    v8 = DXGIResource;
    if ( DXGIResource < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DXGIResource, 0x188u);
  }
  else
  {
    v8 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x18Cu);
  }
  return v8;
}

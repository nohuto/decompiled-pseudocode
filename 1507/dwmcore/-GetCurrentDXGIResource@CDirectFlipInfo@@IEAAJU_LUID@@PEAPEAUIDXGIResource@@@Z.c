/*
 * XREFs of ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180006488
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x1800066B0 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180046CB4 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCurrentDXGIResource(
        CCompositionSurfaceInfo **this,
        struct _LUID a2,
        struct IDXGIResource **a3)
{
  CBitmapRealization *RenderingRealizationNoRef; // rax
  CBitmapRealization *v5; // rdi
  int v6; // eax
  unsigned int v7; // ebx

  *a3 = 0LL;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(this[4]);
  v5 = RenderingRealizationNoRef;
  if ( RenderingRealizationNoRef && **(_QWORD **)&CBitmapRealization::GetAdapterLuid(RenderingRealizationNoRef) == a2 )
  {
    v6 = (*(__int64 (__fastcall **)(CBitmapRealization *, struct IDXGIResource **, _QWORD))(*(_QWORD *)v5 + 80LL))(
           v5,
           a3,
           0LL);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x156u);
  }
  else
  {
    v7 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x15Au);
  }
  return v7;
}

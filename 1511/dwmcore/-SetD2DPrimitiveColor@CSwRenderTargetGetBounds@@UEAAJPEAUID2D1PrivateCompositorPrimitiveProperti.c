/*
 * XREFs of ?SetD2DPrimitiveColor@CSwRenderTargetGetBounds@@UEAAJPEAUID2D1PrivateCompositorPrimitiveProperties@@AEBU_D3DCOLORVALUE@@@Z @ 0x180148720
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x180148594 (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::SetD2DPrimitiveColor(
        CSwRenderTargetGetBounds *this,
        struct ID2D1PrivateCompositorPrimitiveProperties *a2,
        const struct _D3DCOLORVALUE *a3)
{
  int FirstAvailableD2DContext; // eax
  struct ID2DContext *v6; // rsi
  unsigned int v7; // edi
  int v8; // eax
  struct ID2DContext *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(
                               (CSwRenderTargetGetBounds *)((char *)this - 24),
                               &v10);
  v6 = v10;
  v7 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorPrimitiveProperties *, const struct _D3DCOLORVALUE *))(*(_QWORD *)v10 + 256LL))(
           v10,
           a2,
           a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x22Du);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD2DContext, 0x22Au);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}

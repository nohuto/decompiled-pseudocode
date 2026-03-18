/*
 * XREFs of ?CreateD2DPrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x180137190
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x180137564 (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreateD2DPrimitiveProperties(
        CSwRenderTargetGetBounds *this,
        struct ID2D1PrivateCompositorPrimitiveProperties **a2)
{
  int FirstAvailableD2DContext; // eax
  struct ID2DContext *v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  struct ID2DContext *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(
                               (CSwRenderTargetGetBounds *)((char *)this - 24),
                               &v8);
  v4 = v8;
  v5 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorPrimitiveProperties **))(*(_QWORD *)v8 + 248LL))(
           v8,
           a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x21Au);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD2DContext, 0x218u);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}

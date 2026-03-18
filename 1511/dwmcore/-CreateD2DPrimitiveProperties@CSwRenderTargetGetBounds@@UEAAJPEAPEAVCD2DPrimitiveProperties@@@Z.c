/*
 * XREFs of ?CreateD2DPrimitiveProperties@CSwRenderTargetGetBounds@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x1801481C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x180148594 (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreateD2DPrimitiveProperties(
        CSwRenderTargetGetBounds *this,
        struct CD2DPrimitiveProperties **a2)
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
    v6 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct CD2DPrimitiveProperties **))(*(_QWORD *)v8 + 248LL))(
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

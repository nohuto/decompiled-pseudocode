/*
 * XREFs of ?GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4Enum@D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801484E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x180148594 (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetCachedEffectNoRef(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int FirstAvailableD2DContext; // eax
  struct ID2DContext *v6; // rsi
  unsigned int v7; // edi
  int v8; // eax
  struct ID2DContext *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  *a3 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(
                               (CSwRenderTargetGetBounds *)(a1 - 24),
                               &v10);
  v6 = v10;
  v7 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, _QWORD, _QWORD *))(*(_QWORD *)v10 + 232LL))(v10, a2, a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1E5u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD2DContext, 0x1E0u);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}

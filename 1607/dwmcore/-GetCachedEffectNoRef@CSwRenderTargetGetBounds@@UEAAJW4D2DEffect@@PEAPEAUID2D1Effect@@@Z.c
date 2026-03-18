/*
 * XREFs of ?GetCachedEffectNoRef@CSwRenderTargetGetBounds@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x1801788E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18017898C (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::GetCachedEffectNoRef(__int64 a1, unsigned int a2, _QWORD *a3)
{
  int FirstAvailableD2DContext; // eax
  struct ID2DContext *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  struct ID2DContext *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  *a3 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(
                               (CSwRenderTargetGetBounds *)(a1 - 24),
                               &v10);
  v6 = v10;
  v7 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD2DContext, 0x208u);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, _QWORD, _QWORD *))(*(_QWORD *)v10 + 240LL))(v10, a2, a3);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x209u);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}

/*
 * XREFs of ?CreateD2DInk@CSwRenderTargetGetBounds@@UEAAJAEBUD2D1_INK_POINT@@AEBUD2D1_INK_STYLE_PROPERTIES@@PEAPEAVCD2DInk@@@Z @ 0x180178490
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18017898C (-GetFirstAvailableD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CSwRenderTargetGetBounds::CreateD2DInk(
        CSwRenderTargetGetBounds *this,
        const struct D2D1_INK_POINT *a2,
        const struct D2D1_INK_STYLE_PROPERTIES *a3,
        struct CD2DInk **a4)
{
  int FirstAvailableD2DContext; // eax
  struct ID2DContext *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  struct ID2DContext *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  *a4 = 0LL;
  FirstAvailableD2DContext = CSwRenderTargetGetBounds::GetFirstAvailableD2DContext(
                               (CSwRenderTargetGetBounds *)((char *)this - 24),
                               &v12);
  v8 = v12;
  v9 = FirstAvailableD2DContext;
  if ( FirstAvailableD2DContext < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstAvailableD2DContext, 0x18Cu);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct D2D1_INK_POINT *, const struct D2D1_INK_STYLE_PROPERTIES *, struct CD2DInk **))(*(_QWORD *)v12 + 192LL))(
            v12,
            a2,
            a3,
            a4);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x18Eu);
  }
  if ( v8 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}

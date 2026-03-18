/*
 * XREFs of ?GetCachedEffectNoRef@CDrawingContext@@QEAAJW4Enum@D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x18010DA64
 * Callers:
 *     ?RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180115934 (-RenderLayer@CColorTransformLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CDrawingContext::GetCachedEffectNoRef(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 376) + 232LL))(
           *(_QWORD *)(a1 + 376),
           1LL,
           a3);
}

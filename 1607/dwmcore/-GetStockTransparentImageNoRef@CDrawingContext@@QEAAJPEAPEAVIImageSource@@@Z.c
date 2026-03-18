/*
 * XREFs of ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x180123F34
 * Callers:
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z @ 0x180123628 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z.c)
 *     ?GetInputParameters@CEffectBrush@@AEAAJIAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAUGraphInputParameters@1@@Z @ 0x18013BD88 (-GetInputParameters@CEffectBrush@@AEAAJIAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAUGraphInputParam.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::GetStockTransparentImageNoRef(CDrawingContext *this, struct IImageSource **a2)
{
  CD3DDeviceLevel1 *v3; // rax

  v3 = (CD3DDeviceLevel1 *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 57) + 176LL))(*((_QWORD *)this + 57));
  return CD3DDeviceLevel1::GetStockTransparentImageNoRef(v3, a2);
}

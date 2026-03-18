/*
 * XREFs of ?GetDebugClearColor@CoRenderHost@@QEAAJPEAU_D3DCOLORVALUE@@@Z @ 0x18010DAB8
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x180045060 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CoRenderHost::GetDebugClearColor(CoRenderHost *this, struct _D3DCOLORVALUE *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _D3DCOLORVALUE *))(**((_QWORD **)this + 3) + 144LL))(
           *((_QWORD *)this + 3),
           a2);
}

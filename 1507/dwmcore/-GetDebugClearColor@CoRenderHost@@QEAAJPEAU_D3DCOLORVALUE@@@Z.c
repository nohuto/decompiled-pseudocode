/*
 * XREFs of ?GetDebugClearColor@CoRenderHost@@QEAAJPEAU_D3DCOLORVALUE@@@Z @ 0x1800F3AA4
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CoRenderHost::GetDebugClearColor(CoRenderHost *this, struct _D3DCOLORVALUE *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _D3DCOLORVALUE *))(**((_QWORD **)this + 3) + 144LL))(
           *((_QWORD *)this + 3),
           a2);
}

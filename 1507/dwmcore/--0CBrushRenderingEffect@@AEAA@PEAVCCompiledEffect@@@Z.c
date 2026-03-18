/*
 * XREFs of ??0CBrushRenderingEffect@@AEAA@PEAVCCompiledEffect@@@Z @ 0x1800FF608
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CBrushRenderingEffect *__fastcall CBrushRenderingEffect::CBrushRenderingEffect(
        CBrushRenderingEffect *this,
        struct CCompiledEffect *a2)
{
  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &CBrushRenderingEffect::`vftable';
  (*(void (__fastcall **)(struct CCompiledEffect *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}

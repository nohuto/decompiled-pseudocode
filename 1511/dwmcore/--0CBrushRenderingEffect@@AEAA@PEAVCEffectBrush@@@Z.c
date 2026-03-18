/*
 * XREFs of ??0CBrushRenderingEffect@@AEAA@PEAVCEffectBrush@@@Z @ 0x1801184F4
 * Callers:
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z @ 0x18010B978 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCEffectBrush@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 */

CBrushRenderingEffect *__fastcall CBrushRenderingEffect::CBrushRenderingEffect(
        CBrushRenderingEffect *this,
        struct CEffectBrush *a2)
{
  *(_QWORD *)this = &CBrushRenderingEffect::`vftable';
  `vector constructor iterator'(
    (CBrushRenderingEffect *)((char *)this + 16),
    3LL,
    2,
    SamplerMode::`default constructor closure');
  *((_QWORD *)this + 1) = a2;
  (*(void (__fastcall **)(struct CEffectBrush *))(*(_QWORD *)a2 + 8LL))(a2);
  return this;
}

/*
 * XREFs of ?CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x18014EF48
 * Callers:
 *     ?Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014F0B4 (-Draw@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?IsRectangular@CDropShadowContent@@QEBA_NXZ @ 0x18014FAE4 (-IsRectangular@CDropShadowContent@@QEBA_NXZ.c)
 */

bool __fastcall CDropShadow::CanUseFastShadow(CDropShadowContent **this, const struct D2D_SIZE_F *a2)
{
  return this != (CDropShadowContent **)CDropShadow::s_pFastShadow
      && CDropShadowContent::IsRectangular(this[24])
      && *((float *)this + 38) <= (float)(fminf(a2->width, a2->height) * 0.5);
}

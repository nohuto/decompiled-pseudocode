/*
 * XREFs of ?IsRectangular@CDropShadowContent@@QEBA_NXZ @ 0x18014FAE4
 * Callers:
 *     ?CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x18014EF48 (-CanUseFastShadow@CDropShadow@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@Z @ 0x18014F1CC (-DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@.c)
 *     ?GetCommonBrushParameters@CDropShadowContent@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x1801601C0 (-GetCommonBrushParameters@CDropShadowContent@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDropShadowContent::IsRectangular(CDropShadowContent *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 16);
  v2 = 0;
  if ( !v1 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL))(v1, 78LL) )
    return 1;
  return v2;
}

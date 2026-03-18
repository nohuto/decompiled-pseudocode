/*
 * XREFs of ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C0009D1C
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C00AAEC0 (DxgkUpdateGdiInfo.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z @ 0x1C00ABE40 (-SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiInternal::AvgXY(DpiInternal *this, struct tagSIZE a2)
{
  return (unsigned int)(((int)this + HIDWORD(this)) / 2);
}

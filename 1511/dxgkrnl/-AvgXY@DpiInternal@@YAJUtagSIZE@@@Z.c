/*
 * XREFs of ?AvgXY@DpiInternal@@YAJUtagSIZE@@@Z @ 0x1C000A8F4
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z @ 0x1C00ACB04 (-SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiInternal::AvgXY(DpiInternal *this, struct tagSIZE a2)
{
  return (unsigned int)(((int)this + HIDWORD(this)) / 2);
}

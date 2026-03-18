/*
 * XREFs of ?IsPreferredModeInterlaced@DpiInternal@@YA_NPEBX@Z @ 0x1C0012574
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0169024 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiInternal::IsPreferredModeInterlaced(DpiInternal *this, const void *a2)
{
  return *((_BYTE *)this + 71) >> 7;
}

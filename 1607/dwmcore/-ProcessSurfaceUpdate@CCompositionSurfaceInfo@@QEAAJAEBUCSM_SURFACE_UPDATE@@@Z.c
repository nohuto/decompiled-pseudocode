/*
 * XREFs of ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180099454
 * Callers:
 *     ?ProcessSurfaceUpdates@CSurfaceManager@@QEAAJ_K@Z @ 0x1800375E0 (-ProcessSurfaceUpdates@CSurfaceManager@@QEAAJ_K@Z.c)
 *     ?ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z @ 0x1801657E8 (-ProcessExclusiveSurfaceUpdate@CAnalogExclusiveView@@AEAA_NI@Z.c)
 * Callees:
 *     Template_nxxxqqxqqqqqqqqx @ 0x180152ADC (Template_nxxxqqxqqqqqqqqx.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::ProcessSurfaceUpdate(
        CCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_nxxxqqxqqqqqqqqx(
      *((_DWORD *)a2 + 7),
      (*((_DWORD *)a2 + 47) >> 2) & 1,
      (*((_DWORD *)a2 + 47) >> 3) & 1,
      (_DWORD)a2 + 4,
      *((_QWORD *)a2 + 2),
      *((_DWORD *)a2 + 7));
  return CCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(this, a2);
}

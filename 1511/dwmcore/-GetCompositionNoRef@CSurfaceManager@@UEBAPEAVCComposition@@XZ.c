/*
 * XREFs of ?GetCompositionNoRef@CSurfaceManager@@UEBAPEAVCComposition@@XZ @ 0x18006CB30
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18006C384 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?GetCompositionNoRef@CSurfaceManager@@WFA@EBAPEAVCComposition@@XZ @ 0x1800BC9C0 (-GetCompositionNoRef@CSurfaceManager@@WFA@EBAPEAVCComposition@@XZ.c)
 * Callees:
 *     <none>
 */

struct CComposition *__fastcall CSurfaceManager::GetCompositionNoRef(CSurfaceManager *this)
{
  return (struct CComposition *)*((_QWORD *)this + 48);
}

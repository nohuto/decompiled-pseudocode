/*
 * XREFs of ?UpdateStats@CCompositionSurface@@IEAAJ_KAEBUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00489FC
 * Callers:
 *     ?Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C0047D80 (-Retire@CFlipToken@@UEAAXAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?UpdateStats@CompositionSurfaceObject@@QEAAX_KAEBUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00A3E14 (-UpdateStats@CompositionSurfaceObject@@QEAAX_KAEBUCSM_BUFFER_STATISTICS@@@Z.c)
 *     NtSetCompositionSurfaceStatistics @ 0x1C00DF270 (NtSetCompositionSurfaceStatistics.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0048D48 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::UpdateStats(
        CCompositionSurface *this,
        unsigned __int64 a2,
        const struct CSM_BUFFER_STATISTICS *a3)
{
  __int64 result; // rax
  _OWORD *v4; // r11
  struct CCompositionBuffer *v5; // rcx
  __int128 v6; // xmm0
  struct CCompositionBuffer *v7; // [rsp+48h] [rbp+20h] BYREF

  result = CCompositionSurface::FindBuffer(this, a2, &v7);
  if ( (int)result >= 0 )
  {
    v5 = v7;
    *((_OWORD *)v7 + 13) = *v4;
    *((_OWORD *)v5 + 14) = v4[1];
    v6 = v4[2];
    *((_BYTE *)v5 + 256) = 1;
    *((_OWORD *)v5 + 15) = v6;
  }
  return result;
}

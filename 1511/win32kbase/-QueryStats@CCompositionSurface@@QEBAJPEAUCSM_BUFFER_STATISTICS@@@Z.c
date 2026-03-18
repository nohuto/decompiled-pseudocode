/*
 * XREFs of ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C0039E10
 * Callers:
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0071220 (NtQueryCompositionSurfaceStatistics.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C003A388 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall CCompositionSurface::QueryStats(CCompositionSurface *this, struct CSM_BUFFER_STATISTICS *a2)
{
  int v2; // ebx
  struct CCompositionBuffer *ActiveBuffer; // rax
  _OWORD *v4; // rdx
  void *v5; // r9

  v2 = -1073741823;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  if ( !ActiveBuffer )
    goto LABEL_6;
  if ( *((_BYTE *)ActiveBuffer + 264) )
  {
    v2 = 0;
    *v4 = *(_OWORD *)((char *)ActiveBuffer + 216);
    v4[1] = *(_OWORD *)((char *)ActiveBuffer + 232);
    v4[2] = *(_OWORD *)((char *)ActiveBuffer + 248);
  }
  if ( v2 < 0 )
LABEL_6:
    memset(v5, 0, 0x30uLL);
  return (unsigned int)v2;
}

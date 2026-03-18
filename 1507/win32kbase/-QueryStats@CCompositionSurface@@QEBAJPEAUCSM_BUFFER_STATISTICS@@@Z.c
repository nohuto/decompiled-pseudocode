/*
 * XREFs of ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00487D0
 * Callers:
 *     NtQueryCompositionSurfaceStatistics @ 0x1C0048600 (NtQueryCompositionSurfaceStatistics.c)
 * Callees:
 *     ?GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048DA8 (-GetActiveBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall CCompositionSurface::QueryStats(CCompositionSurface *this, struct CSM_BUFFER_STATISTICS *a2)
{
  int v2; // ebx
  struct CCompositionBuffer *ActiveBuffer; // rax
  __int64 v4; // rdx
  void *v5; // r9

  v2 = -1073741823;
  ActiveBuffer = CCompositionSurface::GetActiveBuffer(this);
  if ( !ActiveBuffer )
    goto LABEL_6;
  if ( *((_BYTE *)ActiveBuffer + 256) )
  {
    v2 = 0;
    *(_OWORD *)v4 = *((_OWORD *)ActiveBuffer + 13);
    *(_OWORD *)(v4 + 16) = *((_OWORD *)ActiveBuffer + 14);
    *(_OWORD *)(v4 + 32) = *((_OWORD *)ActiveBuffer + 15);
    *(_DWORD *)(v4 + 4) = *((_DWORD *)ActiveBuffer + 82);
  }
  if ( v2 < 0 )
LABEL_6:
    memset(v5, 0, 0x30uLL);
  return (unsigned int)v2;
}

/*
 * XREFs of ?FindOverlayPlaneIndexByVisual@COverlayContext@@AEAAHPEAVCVisual@@@Z @ 0x1800F6A94
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::FindOverlayPlaneIndexByVisual(COverlayContext *this, struct CVisual *a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r9d
  unsigned int v4; // r8d

  v2 = *((_DWORD *)this + 56);
  v3 = -1;
  v4 = 0;
  if ( v2 )
  {
    while ( *(struct CVisual **)(240LL * v4 + *((_QWORD *)this + 25)) != a2 )
    {
      if ( ++v4 >= v2 )
        return v3;
    }
    return v4;
  }
  return v3;
}

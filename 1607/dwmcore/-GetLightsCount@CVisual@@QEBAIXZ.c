/*
 * XREFs of ?GetLightsCount@CVisual@@QEBAIXZ @ 0x1800BD3A8
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetLightsCount(CVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 39);
  if ( (v1 & 2) != 0 )
    return *(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    return *((_QWORD *)this + 39) & 1LL;
}

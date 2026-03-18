/*
 * XREFs of ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@I@Z @ 0x18013843C
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

struct CCompositionLight *__fastcall CVisual::GetLightAtNoRef(CVisual *this, unsigned int a2)
{
  __int64 *v2; // rcx
  unsigned __int64 v3; // rax

  v2 = (__int64 *)((char *)this + 312);
  if ( (*v2 & 2) != 0 )
    v3 = *(_QWORD *)(*v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v3 = *v2 & 1;
  if ( a2 < v3 )
    return (struct CCompositionLight *)CPtrArrayBase::operator[](v2, a2);
  else
    return 0LL;
}

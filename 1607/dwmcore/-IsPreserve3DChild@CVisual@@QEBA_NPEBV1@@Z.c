/*
 * XREFs of ?IsPreserve3DChild@CVisual@@QEBA_NPEBV1@@Z @ 0x180109FC8
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsPreserve3DChild(CVisual *this, const struct CVisual *a2)
{
  bool result; // al

  if ( !a2 )
    return 0;
  result = 1;
  if ( *((_DWORD *)a2 + 40) != 1 )
    return 0;
  return result;
}

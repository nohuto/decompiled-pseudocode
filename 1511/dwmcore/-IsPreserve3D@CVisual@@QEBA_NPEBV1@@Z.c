/*
 * XREFs of ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x1800090C4
 * Callers:
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180008FA4 (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180056500 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisual::IsPreserve3D(CVisual *this, const struct CVisual *a2)
{
  char v2; // r8
  __int64 v4; // rax

  v2 = 1;
  if ( !a2 || *((_DWORD *)a2 + 21) != 1 )
  {
    if ( *((_DWORD *)this + 21) != 1 )
      return 0;
    v4 = *((_QWORD *)this + 7);
    if ( (v4 & 2) != 0 )
      v4 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v4) = v4 & 1;
    if ( !(_DWORD)v4 )
      return 0;
  }
  return v2;
}

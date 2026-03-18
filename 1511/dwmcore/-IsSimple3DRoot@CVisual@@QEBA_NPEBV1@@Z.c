/*
 * XREFs of ?IsSimple3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1800F78C0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004F330 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18010BF88 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::IsSimple3DRoot(CVisual *this, const struct CVisual *a2)
{
  __int64 result; // rax
  bool v3; // r8
  bool v4; // dl
  __int64 v5; // rcx
  bool v6; // cl

  result = 1LL;
  v3 = *((_DWORD *)this + 21) != 1;
  v4 = a2 && *((_DWORD *)a2 + 21) == 1;
  v5 = *((_QWORD *)this + 7);
  if ( (v5 & 2) != 0 )
    v5 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v5) = v5 & 1;
  v6 = (_DWORD)v5 != 0;
  if ( !v3 || !v4 || !v6 )
    return 0LL;
  return result;
}

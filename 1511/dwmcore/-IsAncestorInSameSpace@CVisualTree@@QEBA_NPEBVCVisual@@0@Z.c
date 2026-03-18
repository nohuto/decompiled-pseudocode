/*
 * XREFs of ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180008FA4
 * Callers:
 *     ?GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEA_N@Z @ 0x180009400 (-GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z @ 0x1800090C4 (-IsPreserve3D@CVisual@@QEBA_NPEBV1@@Z.c)
 */

char __fastcall CVisualTree::IsAncestorInSameSpace(
        CVisualTree *this,
        const struct CVisual **a2,
        const struct CVisual **a3)
{
  char v3; // r10
  bool IsPreserve3D; // al
  __int64 v6; // r9
  __int64 v7; // r11
  const struct CVisual **v8; // rdx
  char v9; // r8
  const struct CVisual **v10; // rcx
  char v11; // al
  __int64 v13; // rax

  v3 = 0;
  if ( a2 != a3 )
  {
    IsPreserve3D = CVisual::IsPreserve3D((CVisual *)a2, a2[8]);
    v8 = *(const struct CVisual ***)(v7 + 24);
    v9 = IsPreserve3D;
    if ( (const struct CVisual **)v6 != v8 )
    {
      do
      {
        if ( (v10 = *(const struct CVisual ***)(v6 + 64)) != 0LL && *((_DWORD *)v10 + 21) == 1
          || *(_DWORD *)(v6 + 84) == 1
          && ((v13 = *(_QWORD *)(v6 + 56), (v13 & 2) == 0)
            ? (LODWORD(v13) = v13 & 1)
            : (v13 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFCuLL)),
              (_DWORD)v13) )
        {
          v11 = 1;
        }
        else
        {
          v11 = v3;
        }
        if ( v9 != v11 )
          break;
        if ( v10 == a3 )
          return 1;
        v6 = *(_QWORD *)(v6 + 64);
      }
      while ( v10 != v8 );
    }
  }
  return v3;
}

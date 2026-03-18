/*
 * XREFs of ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1800095FC
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800080E0 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800089E0 (-PostSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@0@Z @ 0x18015AEBC (-PopStacks@CBspPreComputeHelper@@AEAAXPEBVCVisual@@0@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CVisual::IsPreserve3DRoot(CVisual *this, const struct CVisual *a2)
{
  char v2; // r8
  bool v3; // al
  __int64 v5; // rax

  v2 = 1;
  v3 = a2 && *((_DWORD *)a2 + 21) == 1;
  if ( *((_DWORD *)this + 21) != 1 || v3 )
    return 0;
  v5 = *((_QWORD *)this + 7);
  if ( (v5 & 2) != 0 )
    v5 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v5) = v5 & 1;
  if ( !(_DWORD)v5 )
    return 0;
  return v2;
}

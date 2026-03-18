/*
 * XREFs of ?GetChildrenCount@CVisual@@UEBAIXZ @ 0x180034E40
 * Callers:
 *     ?GotoFirstChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z @ 0x18000BCB8 (-GotoFirstChild@CGraphWalker@@AEAAJPEAPEAVIGraphNode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetChildrenCount(CVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 1);
  if ( (v1 & 2) != 0 )
    return *(unsigned int *)(v1 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    return *((_QWORD *)this + 1) & 1LL;
}

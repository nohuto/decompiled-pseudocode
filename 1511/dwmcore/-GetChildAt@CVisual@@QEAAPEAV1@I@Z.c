/*
 * XREFs of ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x180009634
 * Callers:
 *     ?GotoSibling@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x180005FF0 (-GotoSibling@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z @ 0x180006060 (-GotoFirstChild@-$CGraphWalker@VCVisual@@@@QEAAJPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

struct CVisual *__fastcall CVisual::GetChildAt(CVisual *this, unsigned int a2)
{
  _QWORD *v2; // rcx
  unsigned __int64 v3; // rax

  v2 = (_QWORD *)((char *)this + 56);
  if ( (*v2 & 2) != 0 )
    v3 = *(_QWORD *)(*v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v3 = *v2 & 1LL;
  if ( v3 <= a2 )
    return 0LL;
  else
    return (struct CVisual *)CPtrArrayBase::operator[](v2, a2);
}

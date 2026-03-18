/*
 * XREFs of ??0CTreeData@@IEAA@XZ @ 0x1800597D4
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180031500 (--$WalkSubtree@VCDrawingContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawin.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180031E90 (--$WalkSubtree@VCPreComputeContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPre.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800325D0 (--$WalkSubtree@VCOcclusionContext@@@CGraphIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOccl.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800343F0 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?VisitNode@CVisual@@UEAAJPEBVCVisualTree@@@Z @ 0x180035CB0 (-VisitNode@CVisual@@UEAAJPEBVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

CTreeData *__fastcall CTreeData::CTreeData(CTreeData *this)
{
  CTreeData *result; // rax

  *((_BYTE *)this + 16) &= ~1u;
  *(_QWORD *)this = &CTreeData::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 25) = 1065353216;
  *((_DWORD *)this + 20) = 1065353216;
  *((_DWORD *)this + 15) = 1065353216;
  *((_DWORD *)this + 10) = 1065353216;
  result = this;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  return result;
}

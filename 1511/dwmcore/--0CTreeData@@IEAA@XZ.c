/*
 * XREFs of ??0CTreeData@@IEAA@XZ @ 0x180059500
 * Callers:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x18004CD30 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004D8D0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
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
  *((_BYTE *)this + 260) = 0;
  return result;
}

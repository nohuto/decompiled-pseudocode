/*
 * XREFs of ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x18009C9C0
 * Callers:
 *     ?Release@CAtlasedRects@@UEAAKXZ @ 0x18009BC80 (-Release@CAtlasedRects@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x18009CD88 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CAtlasedRectsMesh *__fastcall CAtlasedRectsMesh::`vector deleting destructor'(CAtlasedRectsMesh *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rax

  CAtlasedRectsMesh::~CAtlasedRectsMesh(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}

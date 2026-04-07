/*
 * XREFs of ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x180018AB0
 * Callers:
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x18001DA58 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 * Callees:
 *     ??1CAtlasButton@@MEAA@XZ @ 0x1800190A0 (--1CAtlasButton@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CAtlasButton *__fastcall CAtlasButton::`scalar deleting destructor'(CAtlasButton *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CAtlasButton::~CAtlasButton(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}

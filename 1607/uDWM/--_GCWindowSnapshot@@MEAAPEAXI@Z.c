/*
 * XREFs of ??_GCWindowSnapshot@@MEAAPEAXI@Z @ 0x180037CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180038088 (--1CWindowSnapshot@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CWindowSnapshot *__fastcall CWindowSnapshot::`scalar deleting destructor'(CWindowSnapshot *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rax

  CWindowSnapshot::~CWindowSnapshot(this);
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

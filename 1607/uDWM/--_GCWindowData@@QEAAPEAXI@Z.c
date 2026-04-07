/*
 * XREFs of ??_GCWindowData@@QEAAPEAXI@Z @ 0x18001B3E4
 * Callers:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x180038088 (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x180038E00 (--1CWindowIconic@@MEAA@XZ.c)
 * Callees:
 *     ??1CWindowData@@QEAA@XZ @ 0x18001A268 (--1CWindowData@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CWindowData *__fastcall CWindowData::`scalar deleting destructor'(CWindowData *this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CWindowData::~CWindowData(this);
  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    v2(WPF::g_pProcessHeap, this);
  return this;
}

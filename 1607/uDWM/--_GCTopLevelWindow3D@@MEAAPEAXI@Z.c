/*
 * XREFs of ??_GCTopLevelWindow3D@@MEAAPEAXI@Z @ 0x180028130
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18002A988 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CTopLevelWindow3D *__fastcall CTopLevelWindow3D::`scalar deleting destructor'(CTopLevelWindow3D *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CTopLevelWindow3D::~CTopLevelWindow3D(this);
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

/*
 * XREFs of ??_GCBitmapLock@@UEAAPEAXI@Z @ 0x18009E430
 * Callers:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??_ECBitmapLock@@WBA@EAAPEAXI@Z @ 0x1800C1C70 (--_ECBitmapLock@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CBitmapLock@@UEAA@XZ @ 0x18009E914 (--1CBitmapLock@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CBitmapLock *__fastcall CBitmapLock::`scalar deleting destructor'(CBitmapLock *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rax

  CBitmapLock::~CBitmapLock(this);
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

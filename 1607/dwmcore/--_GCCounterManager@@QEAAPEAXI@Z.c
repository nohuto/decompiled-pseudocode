/*
 * XREFs of ??_GCCounterManager@@QEAAPEAXI@Z @ 0x18011AB64
 * Callers:
 *     ?Create@CCounterManager@@CAJPEAPEAV1@@Z @ 0x1800B5440 (-Create@CCounterManager@@CAJPEAPEAV1@@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180116584 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CCounterManager *__fastcall CCounterManager::`scalar deleting destructor'(CCounterManager *this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 424);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCounterManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}

/*
 * XREFs of ??_GGeometrySink@CDrawListPrimitiveBuilder@@UEAAPEAXI@Z @ 0x180133850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDrawListPrimitiveBuilder::GeometrySink *__fastcall CDrawListPrimitiveBuilder::GeometrySink::`scalar deleting destructor'(
        CDrawListPrimitiveBuilder::GeometrySink *this,
        char a2)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 136);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 40);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDrawListPrimitiveBuilder::GeometrySink *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

/*
 * XREFs of ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x18002F6B0
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ClearResources@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x18003009C (-ClearResources@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x1800AA42C (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 */

CPrimitiveGroupDrawListGenerator *__fastcall CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'(
        CPrimitiveBuffer **this,
        char a2)
{
  unsigned int v4; // edx
  CPrimitiveBuffer *v5; // rcx
  CPrimitiveBuffer *v6; // rcx
  void (*v7)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  *this = (CPrimitiveBuffer *)&CPrimitiveGroupDrawListGenerator::`vftable';
  CPrimitiveGroupDrawListGenerator::ClearResources((CPrimitiveGroupDrawListGenerator *)this);
  v5 = this[2];
  if ( v5 )
    CPrimitiveBuffer::`scalar deleting destructor'(v5, v4);
  v6 = this[3];
  if ( v6 )
    CPrimitiveBuffer::`scalar deleting destructor'(v6, v4);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 13);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 9);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 5);
  *this = (CPrimitiveBuffer *)&CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v7 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v7 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CPrimitiveBuffer **))v7)(WPF::g_pProcessHeap, this);
  }
  return (CPrimitiveGroupDrawListGenerator *)this;
}

/*
 * XREFs of ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x1800761D0
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x18005D1E8 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 *     ?ClearResources@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x180076A60 (-ClearResources@CPrimitiveGroupDrawListGenerator@@AEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void **__fastcall CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'(void **this, char a2)
{
  void **v4; // rcx
  void **v5; // rcx
  void (__fastcall *v6)(WPF::ProcessHeapImpl *, void *); // rsi

  *this = &CPrimitiveGroupDrawListGenerator::`vftable';
  CPrimitiveGroupDrawListGenerator::ClearResources((CPrimitiveGroupDrawListGenerator *)this);
  v4 = (void **)this[2];
  if ( v4 )
    CPrimitiveBuffer::`scalar deleting destructor'(v4);
  v5 = (void **)this[3];
  if ( v5 )
    CPrimitiveBuffer::`scalar deleting destructor'(v5);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 13);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 9);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 5);
  *this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v6 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v6 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v6(WPF::g_pProcessHeap, this);
  }
  return this;
}

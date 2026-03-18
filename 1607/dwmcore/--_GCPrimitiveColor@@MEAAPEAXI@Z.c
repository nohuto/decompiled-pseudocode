/*
 * XREFs of ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x18001BEEC
 * Callers:
 *     ??_ECPrimitiveColor@@O7EAAPEAXI@Z @ 0x1800BFBE0 (--_ECPrimitiveColor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CPrimitiveColor@@MEAA@XZ @ 0x18001BEA0 (--1CPrimitiveColor@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CPrimitiveColor *__fastcall CPrimitiveColor::`scalar deleting destructor'(CPrimitiveColor *this, char a2)
{
  CPrimitiveColor::~CPrimitiveColor(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CPrimitiveColor *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

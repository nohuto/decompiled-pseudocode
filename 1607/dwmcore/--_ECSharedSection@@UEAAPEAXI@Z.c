/*
 * XREFs of ??_ECSharedSection@@UEAAPEAXI@Z @ 0x1800B0040
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSharedSection@@UEAA@XZ @ 0x1800B0160 (--1CSharedSection@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CSharedSection *__fastcall CSharedSection::`vector deleting destructor'(CSharedSection *this, char a2)
{
  CSharedSection::~CSharedSection(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSharedSection *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

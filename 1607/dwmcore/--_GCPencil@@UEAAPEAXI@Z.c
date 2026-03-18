/*
 * XREFs of ??_GCPencil@@UEAAPEAXI@Z @ 0x18012B930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CPencil@@UEAA@XZ @ 0x18012B258 (--1CPencil@@UEAA@XZ.c)
 */

struct CResource **__fastcall CPencil::`scalar deleting destructor'(struct CResource **this, char a2)
{
  CPencil::~CPencil(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, struct CResource **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

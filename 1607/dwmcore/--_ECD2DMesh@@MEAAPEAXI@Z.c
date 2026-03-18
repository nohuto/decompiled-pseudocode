/*
 * XREFs of ??_ECD2DMesh@@MEAAPEAXI@Z @ 0x18017DF20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CD2DMesh@@MEAA@XZ @ 0x18017DED4 (--1CD2DMesh@@MEAA@XZ.c)
 */

CD2DMesh *__fastcall CD2DMesh::`vector deleting destructor'(CD2DMesh *this, char a2)
{
  CD2DMesh::~CD2DMesh(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DMesh *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

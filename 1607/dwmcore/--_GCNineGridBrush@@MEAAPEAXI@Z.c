/*
 * XREFs of ??_GCNineGridBrush@@MEAAPEAXI@Z @ 0x18013F7E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x18013F790 (--1CNineGridBrush@@MEAA@XZ.c)
 */

CNineGridBrush *__fastcall CNineGridBrush::`scalar deleting destructor'(CNineGridBrush *this, char a2)
{
  CNineGridBrush::~CNineGridBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CNineGridBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

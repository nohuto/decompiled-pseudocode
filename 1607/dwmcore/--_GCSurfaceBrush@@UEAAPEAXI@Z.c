/*
 * XREFs of ??_GCSurfaceBrush@@UEAAPEAXI@Z @ 0x18013EF20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CSurfaceBrush@@UEAA@XZ @ 0x18013967C (--1CSurfaceBrush@@UEAA@XZ.c)
 */

CSurfaceBrush *__fastcall CSurfaceBrush::`scalar deleting destructor'(CSurfaceBrush *this, char a2)
{
  CSurfaceBrush::~CSurfaceBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSurfaceBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

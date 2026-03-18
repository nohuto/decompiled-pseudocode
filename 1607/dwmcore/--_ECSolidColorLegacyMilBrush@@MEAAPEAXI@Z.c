/*
 * XREFs of ??_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z @ 0x180031870
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x180031AB0 (--1CSolidColorLegacyMilBrush@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CSolidColorLegacyMilBrush *__fastcall CSolidColorLegacyMilBrush::`vector deleting destructor'(
        CSolidColorLegacyMilBrush *this,
        char a2)
{
  CSolidColorLegacyMilBrush::~CSolidColorLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSolidColorLegacyMilBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

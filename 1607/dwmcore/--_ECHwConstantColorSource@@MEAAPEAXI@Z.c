/*
 * XREFs of ??_ECHwConstantColorSource@@MEAAPEAXI@Z @ 0x1801818F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CHwConstantColorSource@@MEAA@XZ @ 0x1800AB054 (--1CHwConstantColorSource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CHwConstantColorSource *__fastcall CHwConstantColorSource::`vector deleting destructor'(
        CHwConstantColorSource *this,
        char a2)
{
  CHwConstantColorSource::~CHwConstantColorSource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwConstantColorSource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

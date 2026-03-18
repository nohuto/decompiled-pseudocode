/*
 * XREFs of ??_GCHwBitmapColorSource@@MEAAPEAXI@Z @ 0x180083120
 * Callers:
 *     <none>
 * Callees:
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x1800830B8 (--1CHwBitmapColorSource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CHwBitmapColorSource *__fastcall CHwBitmapColorSource::`scalar deleting destructor'(
        CHwBitmapColorSource *this,
        char a2)
{
  CHwBitmapColorSource::~CHwBitmapColorSource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwBitmapColorSource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

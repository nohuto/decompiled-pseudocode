/*
 * XREFs of ??_GCHwCacheablePoolBrush@@MEAAPEAXI@Z @ 0x180181AB8
 * Callers:
 *     ??_ECHwCacheablePoolBrush@@O7EAAPEAXI@Z @ 0x1800C1BC0 (--_ECHwCacheablePoolBrush@@O7EAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CHwCacheablePoolBrush@@MEAA@XZ @ 0x180181A60 (--1CHwCacheablePoolBrush@@MEAA@XZ.c)
 */

CHwCacheablePoolBrush *__fastcall CHwCacheablePoolBrush::`scalar deleting destructor'(
        CHwCacheablePoolBrush *this,
        char a2)
{
  CHwCacheablePoolBrush::~CHwCacheablePoolBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwCacheablePoolBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

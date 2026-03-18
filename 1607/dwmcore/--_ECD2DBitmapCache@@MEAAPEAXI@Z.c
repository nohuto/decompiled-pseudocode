/*
 * XREFs of ??_ECD2DBitmapCache@@MEAAPEAXI@Z @ 0x180131AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmapCache@@MEAA@XZ @ 0x18009F7D8 (--1CD2DBitmapCache@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD2DBitmapCache *__fastcall CD2DBitmapCache::`vector deleting destructor'(CD2DBitmapCache *this, char a2)
{
  CD2DBitmapCache::~CD2DBitmapCache(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DBitmapCache *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

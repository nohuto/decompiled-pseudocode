/*
 * XREFs of ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x18018E580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x18018E4D0 (--1CSectionBitmapRealization@@MEAA@XZ.c)
 */

CSectionBitmapRealization *__fastcall CSectionBitmapRealization::`vector deleting destructor'(
        CSectionBitmapRealization *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bl

  v3 = a2;
  CSectionBitmapRealization::~CSectionBitmapRealization(this, a2, a3);
  if ( (v3 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSectionBitmapRealization *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

/*
 * XREFs of ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x1800AB160
 * Callers:
 *     ??1CHwBrushPool@@QEAA@XZ @ 0x18002F798 (--1CHwBrushPool@@QEAA@XZ.c)
 * Callees:
 *     ??1CHwBitmapBrush@@UEAA@XZ @ 0x1800AB118 (--1CHwBitmapBrush@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CHwBitmapBrush *__fastcall CHwBitmapBrush::`scalar deleting destructor'(CHwBitmapBrush *this, char a2)
{
  CHwBitmapBrush::~CHwBitmapBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwBitmapBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

/*
 * XREFs of ??_ECDxHandleStereoBitmapRealization@@MEAAPEAXI@Z @ 0x180190040
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x18018FFD8 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleStereoBitmapRealization *__fastcall CDxHandleStereoBitmapRealization::`vector deleting destructor'(
        CDxHandleStereoBitmapRealization *this,
        char a2)
{
  CDxHandleStereoBitmapRealization::~CDxHandleStereoBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDxHandleStereoBitmapRealization *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

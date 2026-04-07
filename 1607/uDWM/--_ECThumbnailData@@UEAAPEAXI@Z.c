/*
 * XREFs of ??_ECThumbnailData@@UEAAPEAXI@Z @ 0x180009800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CThumbnailData *__fastcall CThumbnailData::`vector deleting destructor'(CThumbnailData *this, char a2)
{
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CThumbnailData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

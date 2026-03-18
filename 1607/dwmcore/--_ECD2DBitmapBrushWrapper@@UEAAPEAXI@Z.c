/*
 * XREFs of ??_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z @ 0x1800B0A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmapBrushWrapper@@UEAA@XZ @ 0x1800B0A24 (--1CD2DBitmapBrushWrapper@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CD2DBitmapBrushWrapper *__fastcall CD2DBitmapBrushWrapper::`vector deleting destructor'(
        CD2DBitmapBrushWrapper *this,
        char a2)
{
  CD2DBitmapBrushWrapper::~CD2DBitmapBrushWrapper(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CD2DBitmapBrushWrapper *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

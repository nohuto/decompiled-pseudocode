/*
 * XREFs of ??_GCDxHandleAdvancedDirectFlipBitmapRealization@@MEAAPEAXI@Z @ 0x18014E870
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x18014E804 (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleAdvancedDirectFlipBitmapRealization *__fastcall CDxHandleAdvancedDirectFlipBitmapRealization::`scalar deleting destructor'(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        char a2)
{
  CDxHandleAdvancedDirectFlipBitmapRealization::~CDxHandleAdvancedDirectFlipBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDxHandleAdvancedDirectFlipBitmapRealization *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

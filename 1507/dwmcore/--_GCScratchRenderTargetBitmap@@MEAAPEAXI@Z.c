/*
 * XREFs of ??_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180003050
 * Callers:
 *     ??_ECScratchRenderTargetBitmap@@OHI@EAAPEAXI@Z @ 0x18009B4C0 (--_ECScratchRenderTargetBitmap@@OHI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x180003010 (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CScratchRenderTargetBitmap *__fastcall CScratchRenderTargetBitmap::`scalar deleting destructor'(
        CScratchRenderTargetBitmap *this,
        char a2)
{
  CScratchRenderTargetBitmap::~CScratchRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CScratchRenderTargetBitmap *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

/*
 * XREFs of ??_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180011690
 * Callers:
 *     ??_ECScratchRenderTargetBitmap@@OHI@EAAPEAXI@Z @ 0x1800BE1A0 (--_ECScratchRenderTargetBitmap@@OHI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x180011650 (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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

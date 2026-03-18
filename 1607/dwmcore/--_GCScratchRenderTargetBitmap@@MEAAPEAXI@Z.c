/*
 * XREFs of ??_GCScratchRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180013760
 * Callers:
 *     ??_ECScratchRenderTargetBitmap@@OIA@EAAPEAXI@Z @ 0x1800C1A90 (--_ECScratchRenderTargetBitmap@@OIA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CScratchRenderTargetBitmap@@MEAA@XZ @ 0x180013700 (--1CScratchRenderTargetBitmap@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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

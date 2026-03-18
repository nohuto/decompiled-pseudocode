/*
 * XREFs of ??_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z @ 0x1800AC900
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CD2DBitmapBrushWrapper@@UEAA@XZ @ 0x1800AC888 (--1CD2DBitmapBrushWrapper@@UEAA@XZ.c)
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

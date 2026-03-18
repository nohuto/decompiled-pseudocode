/*
 * XREFs of ??_GCSurfaceBrush@@UEAAPEAXI@Z @ 0x180121300
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CSurfaceBrush@@UEAA@XZ @ 0x1801212B0 (--1CSurfaceBrush@@UEAA@XZ.c)
 */

CSurfaceBrush *__fastcall CSurfaceBrush::`scalar deleting destructor'(CSurfaceBrush *this, char a2)
{
  CSurfaceBrush::~CSurfaceBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CSurfaceBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

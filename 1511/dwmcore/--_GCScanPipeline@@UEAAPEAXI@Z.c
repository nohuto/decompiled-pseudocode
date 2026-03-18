/*
 * XREFs of ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x1801540B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x180153FC8 (--1CScanPipeline@@UEAA@XZ.c)
 */

CScanPipeline *__fastcall CScanPipeline::`scalar deleting destructor'(CScanPipeline *this, char a2)
{
  CScanPipeline::~CScanPipeline(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CScanPipeline *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

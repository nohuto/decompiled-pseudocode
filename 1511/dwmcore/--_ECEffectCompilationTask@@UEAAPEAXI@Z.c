/*
 * XREFs of ??_ECEffectCompilationTask@@UEAAPEAXI@Z @ 0x180112650
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CEffectCompilationTask@@UEAA@XZ @ 0x1801125E4 (--1CEffectCompilationTask@@UEAA@XZ.c)
 */

BSTR *__fastcall CEffectCompilationTask::`vector deleting destructor'(BSTR *this, char a2)
{
  CEffectCompilationTask::~CEffectCompilationTask(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, BSTR *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}

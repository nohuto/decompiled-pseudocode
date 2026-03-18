/*
 * XREFs of ??_ECEffectCompilationTask@@UEAAPEAXI@Z @ 0x1800F82D0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CEffectCompilationTask@@UEAA@XZ @ 0x1800F8264 (--1CEffectCompilationTask@@UEAA@XZ.c)
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

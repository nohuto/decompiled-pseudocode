/*
 * XREFs of ??_ECEffectCompilationTask@@UEAAPEAXI@Z @ 0x18012A910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CEffectCompilationTask@@UEAA@XZ @ 0x18012A8B4 (--1CEffectCompilationTask@@UEAA@XZ.c)
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

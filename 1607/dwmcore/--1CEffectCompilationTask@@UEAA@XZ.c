/*
 * XREFs of ??1CEffectCompilationTask@@UEAA@XZ @ 0x18012A8B4
 * Callers:
 *     ??_ECEffectCompilationTask@@UEAAPEAXI@Z @ 0x18012A910 (--_ECEffectCompilationTask@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Cancel@CEffectCompilationTask@@QEAAXXZ @ 0x18012A954 (-Cancel@CEffectCompilationTask@@QEAAXXZ.c)
 */

void __fastcall CEffectCompilationTask::~CEffectCompilationTask(BSTR *this)
{
  BSTR v2; // rcx

  *this = (BSTR)&CEffectCompilationTask::`vftable';
  CEffectCompilationTask::Cancel((CEffectCompilationTask *)this);
  v2 = this[7];
  if ( v2 )
    (*(void (__fastcall **)(BSTR))(*(_QWORD *)v2 + 8LL))(v2);
  SysFreeString(this[8]);
  *this = (BSTR)&CMILRefCountBase::`vftable';
}

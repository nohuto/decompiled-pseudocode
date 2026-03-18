/*
 * XREFs of ??1CEffectCompilationTask@@UEAA@XZ @ 0x1800F8264
 * Callers:
 *     ??_ECEffectCompilationTask@@UEAAPEAXI@Z @ 0x1800F82D0 (--_ECEffectCompilationTask@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Cancel@CEffectCompilationTask@@QEAAXXZ @ 0x1800F8328 (-Cancel@CEffectCompilationTask@@QEAAXXZ.c)
 */

void __fastcall CEffectCompilationTask::~CEffectCompilationTask(BSTR *this)
{
  BSTR v2; // rsi

  *this = (BSTR)&CEffectCompilationTask::`vftable';
  CEffectCompilationTask::Cancel((CEffectCompilationTask *)this);
  v2 = this[7];
  if ( v2 )
    (*(void (__fastcall **)(BSTR))(*(_QWORD *)v2 + 8LL))(this[7]);
  SysFreeString(this[8]);
  *this = (BSTR)&CMILRefCountBase::`vftable';
}

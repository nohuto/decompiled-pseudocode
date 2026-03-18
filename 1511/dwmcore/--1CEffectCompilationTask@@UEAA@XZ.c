/*
 * XREFs of ??1CEffectCompilationTask@@UEAA@XZ @ 0x1801125E4
 * Callers:
 *     ??_ECEffectCompilationTask@@UEAAPEAXI@Z @ 0x180112650 (--_ECEffectCompilationTask@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Cancel@CEffectCompilationTask@@QEAAXXZ @ 0x1801126A8 (-Cancel@CEffectCompilationTask@@QEAAXXZ.c)
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

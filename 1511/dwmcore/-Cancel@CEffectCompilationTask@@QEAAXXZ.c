/*
 * XREFs of ?Cancel@CEffectCompilationTask@@QEAAXXZ @ 0x1801126A8
 * Callers:
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x180105640 (--1CEffectCompilationService@@UEAA@XZ.c)
 *     ??1CEffectCompilationTask@@UEAA@XZ @ 0x1801125E4 (--1CEffectCompilationTask@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CEffectCompilationTask::Cancel(CEffectCompilationTask *this)
{
  struct _TP_WORK *v2; // rcx
  CEffectCompilationService *v3; // rcx

  v2 = (struct _TP_WORK *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    WaitForThreadpoolWorkCallbacks(v2, 1);
    CloseThreadpoolWork(*((PTP_WORK *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  v3 = (CEffectCompilationService *)*((_QWORD *)this + 2);
  *((_DWORD *)this + 12) = 1;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v3, this, 1);
}

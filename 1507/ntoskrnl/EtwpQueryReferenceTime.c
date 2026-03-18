/*
 * XREFs of EtwpQueryReferenceTime @ 0x1406E2A94
 * Callers:
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpQueryReferenceTime(unsigned int a1, _OWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  unsigned int v5; // ebx
  struct _KTHREAD *v6; // rdx
  __int16 v7; // ax

  if ( a1 == 0xFFFF )
    a1 = (unsigned __int16)EtwpSystemLogger[0];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = EtwpAcquireLoggerContextByLoggerId(a1, 0);
  if ( v4 )
  {
    *a2 = *(_OWORD *)(v4 + 320);
    EtwpReleaseLoggerContext((unsigned int *)v4, 0);
    v5 = 0;
  }
  else
  {
    v5 = -1073741162;
  }
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}

/*
 * XREFs of EtwpQueryReferenceTime @ 0x1406A079C
 * Callers:
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 */

__int64 __fastcall EtwpQueryReferenceTime(__int64 a1, unsigned int a2, _OWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx

  if ( a2 == 0xFFFF )
    a2 = (unsigned __int16)EtwpSystemLogger[0];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v9 = 0;
  if ( v5 )
  {
    *a3 = *(_OWORD *)(v5 + 304);
    EtwpReleaseLoggerContext((unsigned int *)v5, 0);
  }
  else
  {
    v9 = -1073741162;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  return v9;
}

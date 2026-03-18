/*
 * XREFs of EtwpQueryReferenceTime @ 0x1406606E0
 * Callers:
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwpReleaseLoggerContext @ 0x14046D1BC (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpQueryReferenceTime(unsigned int a1, _OWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v4; // rax
  unsigned int v5; // ebx

  if ( a1 == 0xFFFF )
    a1 = (unsigned __int16)EtwpSystemLogger[0];
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = EtwpAcquireLoggerContextByLoggerId(0LL, a1, 0);
  v5 = 0;
  if ( v4 )
  {
    *a2 = *((_OWORD *)v4 + 20);
    EtwpReleaseLoggerContext(0LL, v4, 0);
  }
  else
  {
    v5 = -1073741162;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}

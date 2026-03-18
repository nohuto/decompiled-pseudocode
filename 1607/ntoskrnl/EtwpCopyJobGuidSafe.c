/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1406A1FCC
 * Callers:
 *     PspSendReliableJobNotification @ 0x14047310C (PspSendReliableJobNotification.c)
 *     EtwTraceJob @ 0x1406A179C (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1406A1848 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSetQuery @ 0x1406A1970 (EtwTraceJobSetQuery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCopyJobGuidSafe(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    *(_OWORD *)a1 = *(_OWORD *)(a2 + 1240);
  }
  else
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}

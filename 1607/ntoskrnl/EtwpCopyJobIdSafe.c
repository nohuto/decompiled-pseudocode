/*
 * XREFs of EtwpCopyJobIdSafe @ 0x1406A1FE8
 * Callers:
 *     PspSendReliableJobNotification @ 0x14047310C (PspSendReliableJobNotification.c)
 *     EtwTraceJob @ 0x1406A179C (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1406A1848 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x1406A18DC (EtwTraceJobRemoveProcess.c)
 *     EtwTraceJobSetQuery @ 0x1406A1970 (EtwTraceJobSetQuery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCopyJobIdSafe(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = *(unsigned int *)(a2 + 1236);
    *a1 = result;
  }
  else
  {
    *a1 = 0;
  }
  return result;
}

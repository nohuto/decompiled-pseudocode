/*
 * XREFs of EtwpCopyJobIdSafe @ 0x1406A2120
 * Callers:
 *     PspSendReliableJobNotification @ 0x140471FDC (PspSendReliableJobNotification.c)
 *     EtwTraceJob @ 0x1406A18D4 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1406A1980 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x1406A1A14 (EtwTraceJobRemoveProcess.c)
 *     EtwTraceJobSetQuery @ 0x1406A1AA8 (EtwTraceJobSetQuery.c)
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

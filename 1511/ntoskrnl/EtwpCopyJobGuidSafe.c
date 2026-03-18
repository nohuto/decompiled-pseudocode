/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1406612BC
 * Callers:
 *     EtwTraceJob @ 0x140660A24 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x140660AD0 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x140660B5C (EtwTraceJobRemoveProcess.c)
 *     EtwTraceJobSendNotification @ 0x140660BF0 (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x140660C64 (EtwTraceJobSetQuery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCopyJobGuidSafe(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    *(_OWORD *)a1 = *(_OWORD *)(a2 + 1232);
  }
  else
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}

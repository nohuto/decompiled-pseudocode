/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1406E42F4
 * Callers:
 *     EtwTraceJob @ 0x1406E3A0C (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1406E3AB8 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x1406E3B44 (EtwTraceJobRemoveProcess.c)
 *     EtwTraceJobSendNotification @ 0x1406E3BD8 (EtwTraceJobSendNotification.c)
 *     EtwTraceJobSetQuery @ 0x1406E3C4C (EtwTraceJobSetQuery.c)
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

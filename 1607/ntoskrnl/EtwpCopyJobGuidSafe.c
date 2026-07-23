/*
 * XREFs of EtwpCopyJobGuidSafe @ 0x1406A2104
 * Callers:
 *     PspSendReliableJobNotification @ 0x140471FDC (PspSendReliableJobNotification.c)
 *     EtwTraceJob @ 0x1406A18D4 (EtwTraceJob.c)
 *     EtwTraceJobAssignProcess @ 0x1406A1980 (EtwTraceJobAssignProcess.c)
 *     EtwTraceJobSetQuery @ 0x1406A1AA8 (EtwTraceJobSetQuery.c)
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

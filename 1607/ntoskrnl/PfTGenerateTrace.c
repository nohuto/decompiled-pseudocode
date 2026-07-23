/*
 * XREFs of PfTGenerateTrace @ 0x1403E7030
 * Callers:
 *     PfTLoggingWorker @ 0x14055B69C (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     PfTCreateTraceDump @ 0x1403E7070 (PfTCreateTraceDump.c)
 *     PfTTraceListAdd @ 0x1403E8368 (PfTTraceListAdd.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140328370;
    qword_140328100 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}

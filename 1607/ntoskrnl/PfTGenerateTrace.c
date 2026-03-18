/*
 * XREFs of PfTGenerateTrace @ 0x1403E5A04
 * Callers:
 *     PfTLoggingWorker @ 0x14055B15C (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1400F02D4 (KiQueryUnbiasedInterruptTime.c)
 *     PfTCreateTraceDump @ 0x1403E5A40 (PfTCreateTraceDump.c)
 *     PfTTraceListAdd @ 0x1403E6D38 (PfTTraceListAdd.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140328330;
    qword_1403280C0 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}

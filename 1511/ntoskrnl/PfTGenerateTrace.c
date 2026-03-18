/*
 * XREFs of PfTGenerateTrace @ 0x140483914
 * Callers:
 *     PfTLoggingWorker @ 0x14054BCF4 (PfTLoggingWorker.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     PfTTraceListAdd @ 0x1403E725C (PfTTraceListAdd.c)
 *     PfTCreateTraceDump @ 0x140483950 (PfTCreateTraceDump.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  unsigned int *v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_1403027B0;
    qword_140302540 = KiQueryUnbiasedInterruptTime();
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}

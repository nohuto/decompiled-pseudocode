/*
 * XREFs of PfTGenerateTrace @ 0x1404F8758
 * Callers:
 *     PfTLoggingWorker @ 0x1405C2D20 (PfTLoggingWorker.c)
 * Callees:
 *     PfTCreateTraceDump @ 0x1404F87C0 (PfTCreateTraceDump.c)
 *     PfTTraceListAdd @ 0x1404F8FF0 (PfTTraceListAdd.c)
 */

__int64 PfTGenerateTrace()
{
  int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = PfTCreateTraceDump(&v2);
  if ( v0 >= 0 )
  {
    ++dword_140350530;
    qword_1403502C0 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    PfTTraceListAdd(v2);
  }
  return (unsigned int)v0;
}

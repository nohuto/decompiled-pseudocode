/*
 * XREFs of PsWaitForAllProcesses @ 0x140641720
 * Callers:
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     PsGetNextProcess @ 0x14044B810 (PsGetNextProcess.c)
 */

char PsWaitForAllProcesses()
{
  unsigned int v0; // ebp
  LARGE_INTEGER v1; // rbx
  _QWORD *i; // rcx
  unsigned __int64 NextProcess; // rax
  void *v4; // rsi
  NTSTATUS v6; // edi
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -100000LL;
  v0 = 0;
  v1.QuadPart = -100000LL;
  while ( 1 )
  {
    for ( i = 0LL; ; i = (_QWORD *)NextProcess )
    {
      NextProcess = PsGetNextProcess(i);
      v4 = (void *)NextProcess;
      if ( !NextProcess )
        return 1;
      if ( (PEPROCESS)NextProcess != PsInitialSystemProcess
        && (PVOID)NextProcess != PsIdleProcess
        && (*(_DWORD *)(NextProcess + 772) & 4) != 0
        && *(_QWORD *)(NextProcess + 1048) )
      {
        break;
      }
    }
    ObfReferenceObject((PVOID)NextProcess);
    ObfDereferenceObjectWithTag(v4, 0x6E457350u);
    v6 = KeWaitForSingleObject(v4, Executive, 0, 0, &Timeout);
    ObfDereferenceObject(v4);
    if ( v6 == 258 )
    {
      v1.QuadPart *= 2LL;
      ++v0;
      Timeout = v1;
      if ( v0 > 0xD )
        break;
    }
  }
  return 0;
}

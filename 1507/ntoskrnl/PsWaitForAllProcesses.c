/*
 * XREFs of PsWaitForAllProcesses @ 0x1406C3C40
 * Callers:
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 */

char __fastcall PsWaitForAllProcesses(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  LARGE_INTEGER v5; // rbx
  _QWORD *i; // rcx
  unsigned __int64 NextProcess; // rax
  void *v8; // rsi
  NTSTATUS v10; // edi
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -100000LL;
  v4 = 0;
  v5.QuadPart = -100000LL;
  while ( 1 )
  {
    for ( i = 0LL; ; i = (_QWORD *)NextProcess )
    {
      NextProcess = PsGetNextProcess(i, a2, a3, a4);
      v8 = (void *)NextProcess;
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
    ObfDereferenceObjectWithTag(v8, 0x6E457350u);
    v10 = KeWaitForSingleObject(v8, Executive, 0, 0, &Timeout);
    ObfDereferenceObject(v8);
    if ( v10 == 258 )
    {
      v5.QuadPart *= 2LL;
      ++v4;
      Timeout = v5;
      if ( v4 > 0xD )
        break;
    }
  }
  return 0;
}

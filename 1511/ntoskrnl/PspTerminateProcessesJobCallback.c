/*
 * XREFs of PspTerminateProcessesJobCallback @ 0x1404BD074
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     PspGetNextJobProcess @ 0x1403E8CB8 (PspGetNextJobProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 *     PspBeginServerSiloShutdown @ 0x14063FDC0 (PspBeginServerSiloShutdown.c)
 */

__int64 __fastcall PspTerminateProcessesJobCallback(volatile signed __int32 *Object, unsigned int *a2)
{
  __int64 v4; // rax
  char v5; // si
  unsigned int v6; // r14d
  struct _KTHREAD *CurrentThread; // r15
  struct _KPROCESS *i; // r9
  struct _KPROCESS *NextJobProcess; // rax
  struct _KPROCESS *v10; // rbp
  char v12; // al
  char *ServerSiloGlobals; // rax
  __int64 v14[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( !_interlockedbittestandset(Object + 324, 7u) )
  {
    v4 = *((_QWORD *)Object + 156);
    if ( v4 && *(_QWORD *)(v4 + 136) )
    {
      v12 = PspBeginServerSiloShutdown(Object, *a2);
      _interlockedbittestandset(Object + 324, 0x1Du);
      v5 = v12;
    }
    else
    {
      v5 = 0;
    }
    v6 = 6;
    CurrentThread = KeGetCurrentThread();
    if ( (a2[1] & 1) != 0 )
      v6 = 14;
    for ( i = 0LL; ; i = v10 )
    {
      NextJobProcess = (struct _KPROCESS *)PspGetNextJobProcess((__int64)Object, (__int64)CurrentThread, v14, i);
      v10 = NextJobProcess;
      if ( !NextJobProcess )
        break;
      if ( (NextJobProcess[1].DirectoryTableBase & 0x800) == 0 )
        *((_BYTE *)a2 + 4) |= 2u;
      PspRemoveProcessFromJobChain(NextJobProcess, 0LL, v6, *a2);
    }
    if ( v5 )
    {
      ObfReferenceObject((PVOID)Object);
      ServerSiloGlobals = (char *)PsGetServerSiloGlobals(Object);
      *((_QWORD *)ServerSiloGlobals + 10) = 0LL;
      *((_QWORD *)ServerSiloGlobals + 12) = PspCompleteServerSiloShutdownDeferred;
      *((_QWORD *)ServerSiloGlobals + 13) = Object;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(ServerSiloGlobals + 80), DelayedWorkQueue);
    }
  }
  return 0LL;
}

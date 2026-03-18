/*
 * XREFs of PsStartMonitorServerSilo @ 0x14059391C
 * Callers:
 *     SepInitializationPhase1 @ 0x1405931F0 (SepInitializationPhase1.c)
 *     ExpWnfInitServerSilo @ 0x1405934AC (ExpWnfInitServerSilo.c)
 *     SeRmInitPhase1 @ 0x1407BC118 (SeRmInitPhase1.c)
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PsIsSystemProcess @ 0x140020228 (PsIsSystemProcess.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     PspStartMonitorDeferred @ 0x1405939AC (PspStartMonitorDeferred.c)
 *     PspReferenceMonitorServerSilo @ 0x140593A94 (PspReferenceMonitorServerSilo.c)
 */

__int64 __fastcall PsStartMonitorServerSilo(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  unsigned __int64 v4; // rtt
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF
  __int64 (__fastcall *v7)(_QWORD); // [rsp+68h] [rbp-20h]
  __int64 v8; // [rsp+70h] [rbp-18h]
  int v9; // [rsp+78h] [rbp-10h]

  result = PspReferenceMonitorServerSilo(a1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 36) & 1) != 0 )
    {
      v3 = -1073741811;
    }
    else
    {
      *(_DWORD *)(a1 + 36) |= 1u;
      if ( *(_QWORD *)(a1 + 56) )
      {
        if ( PsIsSystemProcess(KeGetCurrentThread()->ApcState.Process) )
        {
          PspStartMonitorDeferred(a1);
        }
        else
        {
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v9 = 0;
          WorkItem.List.Flink = 0LL;
          v7 = PspStartMonitorDeferred;
          v8 = a1;
          WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspDeferredWorkerRoutine;
          WorkItem.Parameter = &Event;
          ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
          KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
      }
      else
      {
        v3 = 0;
      }
    }
    _m_prefetchw((const void *)(a1 + 48));
    v4 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v4 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v4 - 2, v4) )
      ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 48));
    return v3;
  }
  return result;
}

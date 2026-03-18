/*
 * XREFs of PsUnregisterMonitorServerSilo @ 0x1406C16A8
 * Callers:
 *     ExpWnfInitServerSilo @ 0x1405934AC (ExpWnfInitServerSilo.c)
 *     SeRmInitPhase1 @ 0x1407BC118 (SeRmInitPhase1.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PsIsSystemProcess @ 0x140020228 (PsIsSystemProcess.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     PspPointerDereferenceMonitorServerSilo @ 0x1406C2640 (PspPointerDereferenceMonitorServerSilo.c)
 *     PspUnregisterMonitorDeferred @ 0x1406C2E94 (PspUnregisterMonitorDeferred.c)
 */

void __fastcall PsUnregisterMonitorServerSilo(struct _EX_RUNDOWN_REF *P)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  unsigned __int64 v3; // rtt
  volatile signed __int64 *v4; // rdi
  unsigned __int64 v5; // rtt
  unsigned __int64 v6; // rax
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF
  __int64 (__fastcall *v9)(_QWORD); // [rsp+68h] [rbp-20h]
  struct _EX_RUNDOWN_REF *v10; // [rsp+70h] [rbp-18h]
  int v11; // [rsp+78h] [rbp-10h]

  _m_prefetchw((char *)&P[4].Ptr + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)&P[4].Ptr + 1, 2u) & 2) != 0 )
  {
    v2 = P + 6;
    _m_prefetchw(v2);
    v3 = v2->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v3 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v3 - 2, v3) )
      ExfReleaseRundownProtection(v2);
  }
  else
  {
    if ( PsIsSystemProcess(KeGetCurrentThread()->ApcState.Process) )
    {
      PspUnregisterMonitorDeferred(P);
    }
    else
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v11 = 0;
      WorkItem.List.Flink = 0LL;
      v9 = PspUnregisterMonitorDeferred;
      v10 = P;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspDeferredWorkerRoutine;
      WorkItem.Parameter = &Event;
      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
      KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
    }
    v4 = (volatile signed __int64 *)&P[6];
    _m_prefetchw(&P[6]);
    v5 = P[6].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)&P[6], v5 - 2, v5) )
      ExfReleaseRundownProtection(P + 6);
    v6 = _InterlockedCompareExchange64(v4, 1LL, 0LL);
    if ( v6 >= 2 )
      ExfWaitForRundownProtectionRelease((volatile signed __int64 *)&P[6], v6);
    if ( BYTE4(P[15].Ptr) )
      ObfDereferenceObject(P[14].Ptr);
    HIDWORD(P[4].Ptr) |= 4u;
    _InterlockedExchange64(v4, 1LL);
    PspPointerDereferenceMonitorServerSilo(P);
  }
}

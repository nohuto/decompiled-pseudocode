/*
 * XREFs of PfSnInitializePrefetcher @ 0x14076A66C
 * Callers:
 *     PfInitializeSuperfetch @ 0x14076A3E8 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x140541460 (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x14054149C (PfpCreateEvent.c)
 */

__int64 PfSnInitializePrefetcher()
{
  struct _KDPC *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  FastMutex.Count = 1;
  qword_1403058D0 = 0LL;
  qword_1403058C8 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  FastMutex.Owner = 0LL;
  qword_1403058E0 = &qword_1403058D8;
  qword_1403058D8 = &qword_1403058D8;
  FastMutex.Event.Header.WaitListHead.Blink = &FastMutex.Event.Header.WaitListHead;
  FastMutex.Event.Header.WaitListHead.Flink = &FastMutex.Event.Header.WaitListHead;
  FastMutex.Contention = 0;
  LOWORD(FastMutex.Event.Header.Lock) = 1;
  FastMutex.Event.Header.Size = 6;
  FastMutex.Event.Header.SignalState = 0;
  dword_140305924 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)&qword_140305928);
  PfSnPrefetchCacheCtxInitialize(qword_140305938);
  RegHandle = 0LL;
  PoolWithTag = (struct _KDPC *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x66506343u);
  if ( PoolWithTag )
  {
    *(_QWORD *)&PoolWithTag->TargetInfoAsUlong = 0LL;
    PoolWithTag->Type = 8;
    PoolWithTag->ProcessorHistory = (KAFFINITY)&PoolWithTag->DpcListEntry;
    PoolWithTag->DpcListEntry.Next = &PoolWithTag->DpcListEntry;
    PoolWithTag->DeferredRoutine = 0LL;
    PoolWithTag->DpcData = 0LL;
    PoolWithTag[1].DeferredRoutine = (PKDEFERRED_ROUTINE)PfSnTracingStateDpcRoutine;
    PoolWithTag[1].TargetInfoAsUlong = 275;
    PoolWithTag[1].DeferredContext = PoolWithTag;
    PoolWithTag[1].DpcData = 0LL;
    PoolWithTag[1].ProcessorHistory = 0LL;
    PoolWithTag[2].ProcessorHistory = (KAFFINITY)PfSnTracingStateExWorkerRoutine;
    PoolWithTag[2].DeferredRoutine = (PKDEFERRED_ROUTINE)PoolWithTag;
    *(_QWORD *)&PoolWithTag[2].TargetInfoAsUlong = 0LL;
    KeSetTimer((PKTIMER)PoolWithTag, (LARGE_INTEGER)-6000000000LL, PoolWithTag + 1);
  }
  return 0LL;
}

/*
 * XREFs of PfSnInitializePrefetcher @ 0x1407B3DC8
 * Callers:
 *     PfInitializeSuperfetch @ 0x1407B3B44 (PfInitializeSuperfetch.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x140572824 (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x140572860 (PfpCreateEvent.c)
 */

__int64 PfSnInitializePrefetcher()
{
  _QWORD *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  FastMutex.Count = 1;
  qword_1403286D0 = 0LL;
  qword_1403286C8 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  FastMutex.Owner = 0LL;
  qword_1403286E0 = &qword_1403286D8;
  qword_1403286D8 = &qword_1403286D8;
  FastMutex.Event.Header.WaitListHead.Blink = &FastMutex.Event.Header.WaitListHead;
  FastMutex.Event.Header.WaitListHead.Flink = &FastMutex.Event.Header.WaitListHead;
  FastMutex.Contention = 0;
  LOWORD(FastMutex.Event.Header.Lock) = 1;
  FastMutex.Event.Header.Size = 6;
  FastMutex.Event.Header.SignalState = 0;
  dword_140328724 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)&qword_140328728);
  PfSnPrefetchCacheCtxInitialize(qword_140328738);
  RegHandle = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x66506343u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    *(_BYTE *)PoolWithTag = 8;
    PoolWithTag[2] = PoolWithTag + 1;
    PoolWithTag[1] = PoolWithTag + 1;
    PoolWithTag[3] = 0LL;
    PoolWithTag[7] = 0LL;
    PoolWithTag[11] = PfSnTracingStateDpcRoutine;
    *((_DWORD *)PoolWithTag + 16) = 275;
    PoolWithTag[12] = PoolWithTag;
    PoolWithTag[15] = 0LL;
    PoolWithTag[10] = 0LL;
    PoolWithTag[18] = PfSnTracingStateExWorkerRoutine;
    PoolWithTag[19] = PoolWithTag;
    PoolWithTag[16] = 0LL;
    KiSetTimerEx((__int64)PoolWithTag, -6000000000LL, 0, 0, (__int64)(PoolWithTag + 8));
  }
  return 0LL;
}

/*
 * XREFs of PfSnInitializePrefetcher @ 0x1407DF0C8
 * Callers:
 *     PfInitializeSuperfetch @ 0x1407DEE3C (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1405B7224 (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x1405B7260 (PfpCreateEvent.c)
 */

__int64 PfSnInitializePrefetcher()
{
  _QWORD *PoolWithTag; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(dword_140353658) = 1;
  qword_140353640 = 0LL;
  qword_140353638 = (__int64)&PfSnGlobals;
  PfSnGlobals = (__int64)&PfSnGlobals;
  qword_140353660 = 0LL;
  qword_140353650 = &qword_140353648;
  qword_140353648 = &qword_140353648;
  qword_140353680 = (__int64)&qword_140353678;
  qword_140353678 = (__int64)&qword_140353678;
  dword_140353668 = 0;
  word_140353670 = 1;
  byte_140353672 = 6;
  dword_140353674 = 0;
  dword_140353694 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)&qword_140353698);
  PfSnPrefetchCacheCtxInitialize(qword_1403536A8);
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

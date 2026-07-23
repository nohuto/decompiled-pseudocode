/*
 * XREFs of ExpInitSystemPhase0 @ 0x1407B58A0
 * Callers:
 *     ExInitSystem @ 0x1407B5704 (ExInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     ExGetSuiteMask @ 0x140576034 (ExGetSuiteMask.c)
 */

char ExpInitSystemPhase0()
{
  bool v0; // cl
  unsigned __int64 v1; // rbx
  __int64 v2; // rcx
  char result; // al

  ExpTimeout = -40000000LL;
  ExpEnvironmentLock.Count = 1;
  qword_1402FB5E8 = (__int64)&ExpSystemResourcesList;
  ExpSystemResourcesList = (__int64)&ExpSystemResourcesList;
  ExpEnvironmentLock.Event.Header.WaitListHead.Blink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  ExpEnvironmentLock.Event.Header.WaitListHead.Flink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  qword_1402FB5B8 = (__int64)&ExNPagedLookasideListHead;
  ExNPagedLookasideListHead = (__int64)&ExNPagedLookasideListHead;
  qword_1402FB598 = (__int64)&ExPagedLookasideListHead;
  ExPagedLookasideListHead = (__int64)&ExPagedLookasideListHead;
  qword_1402FD0D8 = (__int64)&ExpFirmwareTableProviderListHead;
  ExpFirmwareTableProviderListHead = (__int64)&ExpFirmwareTableProviderListHead;
  ExpEnvironmentLock.Owner = 0LL;
  ExpEnvironmentLock.Contention = 0;
  LOWORD(ExpEnvironmentLock.Event.Header.Lock) = 1;
  ExpEnvironmentLock.Event.Header.Size = 6;
  ExpEnvironmentLock.Event.Header.SignalState = 0;
  ExNPagedLookasideLock = 0LL;
  ExPagedLookasideLock = 0LL;
  ExInitializeResourceLite(&ExpFirmwareTableResource);
  v0 = (*(_DWORD *)(KeLoaderBlock_0 + 264) & 4) != 0;
  ExpConDrvLoadLock = 0LL;
  ExpFirmwarePageProtectionSupported = v0;
  qword_140747B20 = 0LL;
  qword_140747BF0 = 0LL;
  if ( CmSuiteBufferType == 7 )
    MEMORY[0xFFFFF780000002D0] = ExGetSuiteMask((__int64)CmSuiteBuffer, ExpMultiUserTS);
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  v2 = (unsigned int)ExGenRandom(1);
  result = 1;
  RtlpHeapKey = v1 | v2;
  return result;
}

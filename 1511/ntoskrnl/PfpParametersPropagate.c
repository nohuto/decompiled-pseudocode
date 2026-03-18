/*
 * XREFs of PfpParametersPropagate @ 0x140631C58
 * Callers:
 *     PfpParametersWatcher @ 0x140631D64 (PfpParametersWatcher.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
 *     PfTInitialize @ 0x14054089C (PfTInitialize.c)
 *     PfTStart @ 0x14054CD4C (PfTStart.c)
 *     PfTCleanup @ 0x14063154C (PfTCleanup.c)
 *     PfpRpShutdown @ 0x140631828 (PfpRpShutdown.c)
 */

__int64 __fastcall PfpParametersPropagate(_DWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  void *v5; // rdx

  v2 = 0;
  PfLockExclusiveAcquire(&PfTGlobals);
  if ( (dword_140302488 & 1) != 0 )
    v2 = a1[20] != dword_14030269C;
  if ( (dword_140302488 & 2) != 0 && a1[19] != dword_1403026A4 )
    v2 |= 2u;
  if ( (dword_140302488 & 3) != 0 && (a1[17] & 1) == 0 || v2 )
  {
    PfTCleanup((__int64)&PfTGlobals, v3);
    PfTInitialize((__int64)&PfTGlobals, v4, 1);
    PfTStart((__int64)&PfTGlobals, v5, v2);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140305870 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140305860, 0LL);
      dword_140305870 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_1403057D8);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}

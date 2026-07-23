/*
 * XREFs of PfpParametersPropagate @ 0x140669EB0
 * Callers:
 *     PfpParametersWatcher @ 0x140669FB8 (PfpParametersWatcher.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B208 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     PfTInitialize @ 0x140571E44 (PfTInitialize.c)
 *     PfTStart @ 0x1405729E0 (PfTStart.c)
 *     PfTCleanup @ 0x140669854 (PfTCleanup.c)
 *     PfpRpShutdown @ 0x140669A8C (PfpRpShutdown.c)
 */

void __fastcall PfpParametersPropagate(_DWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rdx
  void *v5; // rdx

  v2 = 0;
  FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&PfTGlobals);
  if ( (dword_140328048 & 1) != 0 )
    v2 = a1[20] != dword_14032825C;
  if ( (dword_140328048 & 2) != 0 && a1[19] != dword_140328264 )
    v2 |= 2u;
  if ( (dword_140328048 & 3) != 0 && (a1[17] & 1) == 0 || v2 )
  {
    PfTCleanup((__int64)&PfTGlobals, v3);
    PfTInitialize((__int64)&PfTGlobals, v4, 1);
    PfTStart((__int64)&PfTGlobals, v5, v2);
  }
  if ( ((a1[17] & 2) != 0) != (dword_1403286B0 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_1403286A0, 0LL);
      dword_1403286B0 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_140328618);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}

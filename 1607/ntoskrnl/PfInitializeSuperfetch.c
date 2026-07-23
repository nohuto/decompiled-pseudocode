/*
 * XREFs of PfInitializeSuperfetch @ 0x1407B3B44
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x14015C330 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x140571E44 (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x140572D34 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x140572F4C (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x1407B3C34 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x1407B3DC8 (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x1407B3FFC (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_140328618);
  PfpScenCtxInitialize(qword_1403285A0);
  PfpScenCtxStart((__int64)qword_1403285A0);
  RunRef.Count = 0LL;
  ExWaitForRundownProtectionRelease(&RunRef);
  _InterlockedExchange64((volatile __int64 *)&RunRef, 1LL);
  qword_1403286C8 = 0LL;
  qword_1403286D0 = 0LL;
  dword_1403286E8 |= 1u;
  qword_1403286E0 = (__int64)&qword_1403286D8;
  qword_1403286D8 = (__int64)&qword_1403286D8;
  PfSnInitializePrefetcher();
  PfTInitialize((__int64)&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_1403283C0, 4u, 1u);
  return 0LL;
}

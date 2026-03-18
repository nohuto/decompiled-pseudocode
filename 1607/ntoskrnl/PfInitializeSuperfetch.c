/*
 * XREFs of PfInitializeSuperfetch @ 0x1407B3B44
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x14015BDC0 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x140571904 (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x1405727F4 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x140572A0C (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x1407B3C34 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x1407B3DC8 (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x1407B3FFC (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_1403285D8);
  PfpScenCtxInitialize(qword_140328560);
  PfpScenCtxStart((__int64)qword_140328560);
  RunRef.Count = 0LL;
  ExWaitForRundownProtectionRelease(&RunRef);
  _InterlockedExchange64((volatile __int64 *)&RunRef, 1LL);
  qword_140328688 = 0LL;
  qword_140328690 = 0LL;
  dword_1403286A8 |= 1u;
  qword_1403286A0 = (__int64)&qword_140328698;
  qword_140328698 = (__int64)&qword_140328698;
  PfSnInitializePrefetcher();
  PfTInitialize((__int64)&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140328380, 4u, 1u);
  return 0LL;
}

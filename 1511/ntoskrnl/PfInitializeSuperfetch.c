/*
 * XREFs of PfInitializeSuperfetch @ 0x14076A3E8
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x140152720 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x14054089C (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x140541430 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x140541648 (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x14076A4D8 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x14076A66C (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x14076A894 (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_1403057D8);
  PfpScenCtxInitialize(qword_140305760);
  PfpScenCtxStart((__int64)qword_140305760);
  stru_140305880.Count = 0LL;
  ExWaitForRundownProtectionRelease(&stru_140305880);
  _InterlockedExchange64((volatile __int64 *)&stru_140305880, 1LL);
  qword_140305888 = 0LL;
  qword_140305890 = 0LL;
  dword_1403058A8 |= 1u;
  qword_1403058A0 = (__int64)&qword_140305898;
  qword_140305898 = (__int64)&qword_140305898;
  PfSnInitializePrefetcher();
  PfTInitialize((__int64)&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_140305580, 4u, 1u);
  return 0LL;
}

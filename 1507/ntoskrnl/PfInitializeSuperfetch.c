/*
 * XREFs of PfInitializeSuperfetch @ 0x1407DEE3C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     ZwNotifyChangeKey @ 0x140181090 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x1405B64DC (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x1405B71F4 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x1405B740C (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x1407DEF34 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x1407DF0C8 (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x1407DF2FC (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  unsigned __int64 v0; // rax
  __int64 v1; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_140353548);
  PfpScenCtxInitialize(qword_1403534D0);
  PfpScenCtxStart((__int64)qword_1403534D0);
  stru_1403535F0.Count = 0LL;
  v0 = _InterlockedCompareExchange64((volatile signed __int64 *)&stru_1403535F0, 1LL, 0LL);
  if ( v0 >= 2 )
    ExfWaitForRundownProtectionRelease((volatile signed __int64 *)&stru_1403535F0, v0);
  _InterlockedExchange64((volatile __int64 *)&stru_1403535F0, 1LL);
  qword_1403535F8 = 0LL;
  qword_140353600 = 0LL;
  dword_140353618 |= 1u;
  qword_140353610 = (__int64)&qword_140353608;
  qword_140353608 = (__int64)&qword_140353608;
  PfSnInitializePrefetcher();
  PfTInitialize((__int64)&PfTGlobals, v1, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_1403532F0, 4u, 1u);
  return 0LL;
}

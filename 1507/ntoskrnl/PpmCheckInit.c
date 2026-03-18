/*
 * XREFs of PpmCheckInit @ 0x1407E5D74
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (*PpmCheckInit())()
{
  __int64 (*result)(); // rax

  PpmCheckCurrentPipelineId = 6;
  PpmCheckDpc = 787;
  qword_14032D678 = (__int64)PpmCheckRun;
  qword_14032D6B8 = (__int64)PpmCheckPeriodicStart;
  result = PpmIdleDurationExpiration;
  qword_14032D718 = (__int64)PpmIdleDurationExpiration;
  qword_14032D680 = 0LL;
  qword_14032D698 = 0LL;
  qword_14032D670 = 0LL;
  PpmCheckStartDpc = 787;
  qword_14032D6C0 = 0LL;
  qword_14032D6D8 = 0LL;
  qword_14032D6B0 = 0LL;
  PpmCheckIdleExpirationDpc = 787;
  qword_14032D720 = 0LL;
  qword_14032D738 = 0LL;
  qword_14032D710 = 0LL;
  return result;
}

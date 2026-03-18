/*
 * XREFs of PpmCheckInit @ 0x140771348
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (*PpmCheckInit())()
{
  __int64 (*result)(); // rax

  PpmCheckCurrentPipelineId = 6;
  LODWORD(PpmCheckDpc) = 787;
  qword_1402DD318 = (__int64)PpmCheckRun;
  qword_1402DD2B8 = (__int64)PpmCheckPeriodicStart;
  result = PpmIdleDurationExpiration;
  qword_1402DD358 = (__int64)PpmIdleDurationExpiration;
  qword_1402DD320 = 0LL;
  qword_1402DD338 = 0LL;
  qword_1402DD310 = 0LL;
  LODWORD(PpmCheckStartDpc) = 787;
  qword_1402DD2C0 = 0LL;
  qword_1402DD2D8 = 0LL;
  qword_1402DD2B0 = 0LL;
  LODWORD(PpmCheckIdleExpirationDpc) = 787;
  qword_1402DD360 = 0LL;
  qword_1402DD378 = 0LL;
  qword_1402DD350 = 0LL;
  return result;
}

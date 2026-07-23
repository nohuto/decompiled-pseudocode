/*
 * XREFs of PpmCheckInit @ 0x1407BBF8C
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 (*PpmCheckInit())()
{
  __int64 (*result)(); // rax

  PpmCheckCurrentPipelineId = 6;
  LODWORD(PpmCheckDpc) = 787;
  qword_140302898 = (__int64)PpmCheckRun;
  qword_1403028D8 = (__int64)PpmCheckPeriodicStart;
  result = PpmIdleDurationExpiration;
  qword_140302938 = (__int64)PpmIdleDurationExpiration;
  qword_1403028A0 = 0LL;
  qword_1403028B8 = 0LL;
  qword_140302890 = 0LL;
  LODWORD(PpmCheckStartDpc) = 787;
  qword_1403028E0 = 0LL;
  qword_1403028F8 = 0LL;
  qword_1403028D0 = 0LL;
  LODWORD(PpmCheckIdleExpirationDpc) = 787;
  qword_140302940 = 0LL;
  qword_140302958 = 0LL;
  qword_140302930 = 0LL;
  return result;
}

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
  qword_140302858 = (__int64)PpmCheckRun;
  qword_140302898 = (__int64)PpmCheckPeriodicStart;
  result = PpmIdleDurationExpiration;
  qword_1403028F8 = (__int64)PpmIdleDurationExpiration;
  qword_140302860 = 0LL;
  qword_140302878 = 0LL;
  qword_140302850 = 0LL;
  LODWORD(PpmCheckStartDpc) = 787;
  qword_1403028A0 = 0LL;
  qword_1403028B8 = 0LL;
  qword_140302890 = 0LL;
  LODWORD(PpmCheckIdleExpirationDpc) = 787;
  qword_140302900 = 0LL;
  qword_140302918 = 0LL;
  qword_1403028F0 = 0LL;
  return result;
}

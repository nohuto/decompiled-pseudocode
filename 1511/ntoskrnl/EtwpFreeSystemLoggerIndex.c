/*
 * XREFs of EtwpFreeSystemLoggerIndex @ 0x14050CFA8
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14049D5B0 (EtwpFreeLoggerContext.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 */

LONG __fastcall EtwpFreeSystemLoggerIndex(unsigned int a1)
{
  __int64 v1; // rbx
  LONG result; // eax

  v1 = a1;
  KeWaitForSingleObject(&EtwpStartTraceMutex, Executive, 0, 0, 0LL);
  --EtwpTimeStampStatus[2 * (unsigned __int16)word_1402D84E2[2 * v1]];
  result = KeReleaseMutex(&EtwpStartTraceMutex, 0);
  _interlockedbittestandreset(&EtwpActiveSystemLoggers, v1);
  return result;
}

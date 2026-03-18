/*
 * XREFs of EtwpFreeSystemLoggerIndex @ 0x14052489C
 * Callers:
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

LONG __fastcall EtwpFreeSystemLoggerIndex(unsigned int a1)
{
  __int64 v1; // rbx
  LONG result; // eax

  v1 = a1;
  KeWaitForSingleObject(&EtwpStartTraceMutex, Executive, 0, 0, 0LL);
  --EtwpTimeStampStatus[2 * (unsigned __int16)word_140327822[2 * v1]];
  result = KeReleaseMutex(&EtwpStartTraceMutex, 0);
  _interlockedbittestandreset(&EtwpActiveSystemLoggers, v1);
  return result;
}

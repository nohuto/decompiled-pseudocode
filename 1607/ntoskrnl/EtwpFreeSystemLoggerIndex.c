/*
 * XREFs of EtwpFreeSystemLoggerIndex @ 0x140495AAC
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

LONG __fastcall EtwpFreeSystemLoggerIndex(unsigned int a1)
{
  __int64 v1; // rbx
  LONG result; // eax

  v1 = a1;
  KeWaitForSingleObject(&EtwpStartTraceMutex, Executive, 0, 0, 0LL);
  --EtwpTimeStampStatus[2 * (unsigned __int16)word_1402FD342[2 * v1]];
  result = KeReleaseMutex(&EtwpStartTraceMutex, 0);
  _interlockedbittestandreset(&EtwpActiveSystemLoggers, v1);
  return result;
}

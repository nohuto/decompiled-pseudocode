/*
 * XREFs of EtwpFreeSystemLoggerIndex @ 0x14049501C
 * Callers:
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x140493844 (EtwpFreeLoggerContext.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 */

LONG __fastcall EtwpFreeSystemLoggerIndex(unsigned int a1)
{
  __int64 v1; // rbx
  LONG result; // eax

  v1 = a1;
  KeWaitForSingleObject(&EtwpStartTraceMutex, Executive, 0, 0, 0LL);
  --EtwpTimeStampStatus[2 * (unsigned __int16)word_1402FD362[2 * v1]];
  result = KeReleaseMutex(&EtwpStartTraceMutex, 0);
  _interlockedbittestandreset(&EtwpActiveSystemLoggers, v1);
  return result;
}

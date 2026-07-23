/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x1404B9890
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1404F3420 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1406A6848 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 12); (_DWORD)result; result = *(unsigned int *)(a1 + 12) )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&EtwpShortTime);
  return result;
}

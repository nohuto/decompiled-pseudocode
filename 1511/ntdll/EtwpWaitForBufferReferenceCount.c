/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x18005C284
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x18005BE98 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1800F3EE4 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ZwDelayExecution @ 0x1800A5740 (ZwDelayExecution.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 12);
  v3 = -2500000LL;
  while ( (_DWORD)result )
  {
    ZwDelayExecution(0LL, &v3);
    result = *(unsigned int *)(a1 + 12);
  }
  return result;
}

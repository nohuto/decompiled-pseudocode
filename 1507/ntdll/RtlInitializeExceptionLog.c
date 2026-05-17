/*
 * XREFs of RtlInitializeExceptionLog @ 0x1800E3F18
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     memset @ 0x180098540 (memset.c)
 */

void *RtlInitializeExceptionLog()
{
  void *result; // rax

  result = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 71200LL);
  RtlpExceptionLog2 = (__int64)result;
  if ( result )
  {
    result = memset(result, 0, 0x11620uLL);
    RtlpExceptionLogSize = 50;
  }
  RtlpExceptionLog = 0LL;
  return result;
}

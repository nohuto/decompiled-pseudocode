/*
 * XREFs of RtlInitializeExceptionLog @ 0x1800E8A74
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     memset @ 0x1800AB900 (memset.c)
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

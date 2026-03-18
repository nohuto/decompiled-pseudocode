/*
 * XREFs of RtlInitializeExceptionLog @ 0x14078505C
 * Callers:
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

PVOID RtlInitializeExceptionLog()
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11620uLL, 0x67626445u);
  RtlpExceptionLog2 = (__int64)result;
  if ( result )
  {
    result = memset(result, 0, 0x11620uLL);
    RtlpExceptionLogSize = 50;
  }
  RtlpExceptionLog = 0LL;
  return result;
}

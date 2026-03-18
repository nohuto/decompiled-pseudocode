/*
 * XREFs of RtlInitializeExceptionLog @ 0x1407FB9C0
 * Callers:
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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

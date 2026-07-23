/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x1800E3070
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x1800227B0 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180073600 (RtlpHpReAllocWithExceptionProtection.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1800EC2D0 (RtlpHeapExceptionFilter.c)
 */

__int64 RtlpHeapFatalExceptionFilter()
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter();
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}

/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x1800E2FB0
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x1800227C0 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F90 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180073610 (RtlpHpReAllocWithExceptionProtection.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1800EC210 (RtlpHeapExceptionFilter.c)
 */

__int64 RtlpHeapFatalExceptionFilter()
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter();
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}

/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x140211D40
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x140211D58 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x140211DA0 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x14021360C (RtlpHeapExceptionFilter.c)
 */

__int64 RtlpHeapFatalExceptionFilter()
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter();
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}

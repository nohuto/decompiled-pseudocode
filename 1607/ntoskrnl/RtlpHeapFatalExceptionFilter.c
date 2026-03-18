/*
 * XREFs of RtlpHeapFatalExceptionFilter @ 0x140211F14
 * Callers:
 *     RtlpHpAllocWithExceptionProtection @ 0x140211F2C (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x140211F74 (RtlpHpFreeWithExceptionProtection.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1402137E0 (RtlpHeapExceptionFilter.c)
 */

__int64 RtlpHeapFatalExceptionFilter()
{
  __int64 result; // rax

  result = RtlpHeapExceptionFilter();
  if ( (_DWORD)result == 1 )
    __fastfail(0x23u);
  return result;
}

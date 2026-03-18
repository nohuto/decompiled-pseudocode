/*
 * XREFs of KeQueryErrataCodePage @ 0x1401CA5E8
 * Callers:
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *KeQueryErrataCodePage())()
{
  __int64 (__fastcall *result)(); // rax

  result = 0LL;
  if ( KiSanitizeFpuProcedure != KiSanitizeFpu )
    return KiSanitizeFpuProcedure;
  return result;
}

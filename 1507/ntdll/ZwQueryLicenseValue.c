/*
 * XREFs of ZwQueryLicenseValue @ 0x180094CA0
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180045940 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlGetProductInfo @ 0x180072DB0 (RtlGetProductInfo.c)
 *     RtlpGetWindowsPolicy @ 0x1800E6350 (RtlpGetWindowsPolicy.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryLicenseValue()
{
  __int64 result; // rax

  result = 314LL;
  __asm { syscall; Low latency system call }
  return result;
}

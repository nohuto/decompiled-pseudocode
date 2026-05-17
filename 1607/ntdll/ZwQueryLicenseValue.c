/*
 * XREFs of ZwQueryLicenseValue @ 0x1800A8C10
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18007A760 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlGetProductInfo @ 0x180084840 (RtlGetProductInfo.c)
 *     RtlpGetWindowsPolicy @ 0x1800F3BB0 (RtlpGetWindowsPolicy.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryLicenseValue()
{
  __int64 result; // rax

  result = 320LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}

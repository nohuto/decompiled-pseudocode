/*
 * XREFs of HviGetDebugDeviceOptions @ 0x140268380
 * Callers:
 *     <none>
 * Callees:
 *     HviIsHypervisorVendorMicrosoft @ 0x140268530 (HviIsHypervisorVendorMicrosoft.c)
 */

__int64 __fastcall HviGetDebugDeviceOptions(__int64 *a1)
{
  __int64 result; // rax

  result = HviIsHypervisorVendorMicrosoft();
  if ( (_BYTE)result )
  {
    result = __readmsr(0x400000FFu);
    *a1 = result;
  }
  else
  {
    *a1 = 0LL;
  }
  return result;
}

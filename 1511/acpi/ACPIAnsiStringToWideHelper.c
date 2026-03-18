/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x1C0004184
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0003B88 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0003E60 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C001DFC8 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C001E3F4 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C001E568 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C001E84C (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C001EC10 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C003BF84 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C003C06C (ACPIGetConvertToStringWideWithPrepend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIAnsiStringToWideHelper(_WORD *a1, unsigned __int64 a2)
{
  unsigned __int64 i; // rdx
  __int64 result; // rax

  if ( a1 && a2 > 2 )
  {
    for ( i = a2 >> 1; --i; a1[i] = *((char *)a1 + i) )
      ;
    result = (unsigned int)*(char *)a1;
    *a1 = *(char *)a1;
  }
  return result;
}

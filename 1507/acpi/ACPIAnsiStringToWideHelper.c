/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x1C0004154
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0003B58 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C0003E30 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C001D13C (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C001D568 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C001D6DC (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C001D9C0 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C001DD84 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C003BBF4 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C003BCDC (ACPIGetConvertToStringWideWithPrepend.c)
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

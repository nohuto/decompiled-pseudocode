/*
 * XREFs of ACPIAnsiStringToWideHelper @ 0x1C00039F4
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C0003718 (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C00236A4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0023AD0 (ACPIGetConvertToPnpIDWide.c)
 *     ACPIGetConvertToDeviceIDWide @ 0x1C0023C48 (ACPIGetConvertToDeviceIDWide.c)
 *     ACPIGetConvertToInstanceIDWide @ 0x1C0023F30 (ACPIGetConvertToInstanceIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C00242F8 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToStringWide @ 0x1C004EEF4 (ACPIGetConvertToStringWide.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C004EFDC (ACPIGetConvertToStringWideWithPrepend.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C004F360 (ACPIDeviceIdMutiStringMatchCallback.c)
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

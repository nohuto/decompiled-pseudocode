/*
 * XREFs of EtwTracePointerDeviceInRangeMessageStart @ 0x1C00ABF80
 * Callers:
 *     ApiSetPostPointerDeviceArrival @ 0x1C00CE878 (ApiSetPostPointerDeviceArrival.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePointerDeviceInRangeMessageStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceInRangeMessageStart, &W32kControlGuid);
  return result;
}

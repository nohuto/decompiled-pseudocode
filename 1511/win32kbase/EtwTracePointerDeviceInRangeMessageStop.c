/*
 * XREFs of EtwTracePointerDeviceInRangeMessageStop @ 0x1C00ABFB0
 * Callers:
 *     ApiSetPostPointerDeviceArrival @ 0x1C00CE878 (ApiSetPostPointerDeviceArrival.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePointerDeviceInRangeMessageStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceInRangeMessageStop, &W32kControlGuid);
  return result;
}

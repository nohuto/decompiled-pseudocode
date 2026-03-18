/*
 * XREFs of EtwTracePointerDeviceInRangeMessageStop @ 0x1C00A7A40
 * Callers:
 *     ApiSetPostPointerDeviceArrival @ 0x1C00CD53C (ApiSetPostPointerDeviceArrival.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePointerDeviceInRangeMessageStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceInRangeMessageStop, &W32kControlGuid);
  return result;
}

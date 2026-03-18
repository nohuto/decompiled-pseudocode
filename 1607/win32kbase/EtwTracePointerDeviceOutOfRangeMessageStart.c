/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C00B5740
 * Callers:
 *     RIMRemoveFromActiveDevices @ 0x1C0006A98 (RIMRemoveFromActiveDevices.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePointerDeviceOutOfRangeMessageStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceOutOfRangeMessageStart, &W32kControlGuid);
  return result;
}

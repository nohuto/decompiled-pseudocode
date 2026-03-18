/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C00AC010
 * Callers:
 *     RIMRemoveContactFromActiveList @ 0x1C00D3A74 (RIMRemoveContactFromActiveList.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePointerDeviceOutOfRangeMessageStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceOutOfRangeMessageStop, &W32kControlGuid);
  return result;
}

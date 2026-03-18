/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C00A7A70
 * Callers:
 *     RIMRemoveContactFromActiveList @ 0x1C00D1C4C (RIMRemoveContactFromActiveList.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePointerDeviceOutOfRangeMessageStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceOutOfRangeMessageStart, &W32kControlGuid);
  return result;
}

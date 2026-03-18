/*
 * XREFs of EtwTracePointerDeviceContactTimerStart @ 0x1C00A79B0
 * Callers:
 *     RIMAssessPointerContactState @ 0x1C00C9EAC (RIMAssessPointerContactState.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePointerDeviceContactTimerStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceContactTimerStart, &W32kControlGuid);
  return result;
}

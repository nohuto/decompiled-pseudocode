/*
 * XREFs of EtwTracePointerDeviceContactTimerStart @ 0x1C00ABF20
 * Callers:
 *     RIMAssessPointerContactState @ 0x1C00CAF80 (RIMAssessPointerContactState.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePointerDeviceContactTimerStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceContactTimerStart, &W32kControlGuid);
  return result;
}

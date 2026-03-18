/*
 * XREFs of EtwTraceTouchTargetingSpeedHitTestStop @ 0x1C00A8430
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceTouchTargetingSpeedHitTestStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &TouchTargetingSpeedHitTestStop, &W32kControlGuid);
  return result;
}

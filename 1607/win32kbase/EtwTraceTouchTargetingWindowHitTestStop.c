/*
 * XREFs of EtwTraceTouchTargetingWindowHitTestStop @ 0x1C00B6160
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceTouchTargetingWindowHitTestStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &TouchTargetingWindowHitTestStop, &W32kControlGuid);
  return result;
}

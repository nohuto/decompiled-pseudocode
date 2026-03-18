/*
 * XREFs of EtwTraceTouchpadStopInertiaQueued @ 0x1C00ACA70
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceTouchpadStopInertiaQueued(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return TemplateEventDescriptor(a1, &TouchpadStopInertiaQueued, &W32kControlGuid);
  return result;
}

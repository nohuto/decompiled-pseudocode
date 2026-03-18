/*
 * XREFs of EtwTraceTouchpadInertiaContact @ 0x1C00ACA40
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceTouchpadInertiaContact(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return TemplateEventDescriptor(a1, &TouchpadInertiaContact, &W32kControlGuid);
  return result;
}

/*
 * XREFs of EtwTraceTouchpadEndInertiaQueued @ 0x1C00AC9E0
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceTouchpadEndInertiaQueued(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return TemplateEventDescriptor(a1, &TouchpadEndInertiaQueued, &W32kControlGuid);
  return result;
}

/*
 * XREFs of EtwTraceTouchPadEnabledStatusChangeStart @ 0x1C00B5D60
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceTouchPadEnabledStatusChangeStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return TemplateEventDescriptor(a1, &TouchPadEnabledStatusChangeStart, &W32kControlGuid);
  return result;
}

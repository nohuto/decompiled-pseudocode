/*
 * XREFs of EtwTraceTouchPadHIDProcessingStart @ 0x1C00B5DC0
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceTouchPadHIDProcessingStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &TouchPadHIDProcessingStart, &W32kControlGuid);
  return result;
}

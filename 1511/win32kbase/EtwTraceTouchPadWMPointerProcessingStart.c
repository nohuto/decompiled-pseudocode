/*
 * XREFs of EtwTraceTouchPadWMPointerProcessingStart @ 0x1C00AC770
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceTouchPadWMPointerProcessingStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &TouchPadWMPointerProcessingStart, &W32kControlGuid);
  return result;
}

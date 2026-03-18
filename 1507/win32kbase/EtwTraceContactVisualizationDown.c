/*
 * XREFs of EtwTraceContactVisualizationDown @ 0x1C00A7330
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceContactVisualizationDown(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000) != 0 )
    return TemplateEventDescriptor(a1, &ContactVisualizationDown, &W32kControlGuid);
  return result;
}

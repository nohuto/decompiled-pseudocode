/*
 * XREFs of EtwTraceContactVisualizationUp @ 0x1C00AB900
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceContactVisualizationUp(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20000) != 0 )
    return TemplateEventDescriptor(a1, &ContactVisualizationUp, &W32kControlGuid);
  return result;
}

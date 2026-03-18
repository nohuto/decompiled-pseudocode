/*
 * XREFs of EtwTracePTPElasticDragModeStop @ 0x1C00A78E0
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePTPElasticDragModeStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return TemplateEventDescriptor(a1, &PTPElasticDragModeStop, &W32kControlGuid);
  return result;
}

/*
 * XREFs of EtwTracePTPElasticDragModeStart @ 0x1C00B5520
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePTPElasticDragModeStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return TemplateEventDescriptor(a1, &PTPElasticDragModeStart, &W32kControlGuid);
  return result;
}

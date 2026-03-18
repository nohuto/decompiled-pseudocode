/*
 * XREFs of EtwTraceEdgyDetectionStart @ 0x1C00A75A0
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceEdgyDetectionStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    return TemplateEventDescriptor(a1, &EdgyDetectionStart, &W32kControlGuid);
  return result;
}

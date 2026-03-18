/*
 * XREFs of EtwTraceForegroundWindowFullScreenStop @ 0x1C00B5490
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceForegroundWindowFullScreenStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return TemplateEventDescriptor(a1, &ForegroundWindowFullScreenStop, a1);
  return result;
}

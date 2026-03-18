/*
 * XREFs of EtwTraceForegroundWindowFullScreenStart @ 0x1C00ABD60
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceForegroundWindowFullScreenStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
    return TemplateEventDescriptor(a1, &ForegroundWindowFullScreenStart, a1);
  return result;
}

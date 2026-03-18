/*
 * XREFs of EtwTraceDitMmcssWorkStart @ 0x1C0081110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceDitMmcssWorkStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return TemplateEventDescriptor(a1, &DitMmcssWorkStart, &W32kControlGuid);
  return result;
}

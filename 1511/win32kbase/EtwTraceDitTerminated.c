/*
 * XREFs of EtwTraceDitTerminated @ 0x1C007F960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceDitTerminated(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return TemplateEventDescriptor(a1, &DitTerminated, &W32kControlGuid);
  return result;
}

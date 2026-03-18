/*
 * XREFs of EtwTraceRitReEngaged @ 0x1C0082E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceRitReEngaged(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return TemplateEventDescriptor(a1, &RitReEngaged, &W32kControlGuid);
  return result;
}

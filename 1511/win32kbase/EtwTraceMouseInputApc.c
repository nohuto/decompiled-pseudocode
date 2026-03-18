/*
 * XREFs of EtwTraceMouseInputApc @ 0x1C0087C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceMouseInputApc(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return TemplateEventDescriptor(a1, &MouseInputApc, &W32kControlGuid);
  return result;
}

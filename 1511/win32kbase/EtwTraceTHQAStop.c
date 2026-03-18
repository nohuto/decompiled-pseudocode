/*
 * XREFs of EtwTraceTHQAStop @ 0x1C007F510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceTHQAStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &THQAStop, &W32kControlGuid);
  return result;
}

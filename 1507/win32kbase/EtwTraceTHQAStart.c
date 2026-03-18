/*
 * XREFs of EtwTraceTHQAStart @ 0x1C00849B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceTHQAStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &THQAStart, &W32kControlGuid);
  return result;
}

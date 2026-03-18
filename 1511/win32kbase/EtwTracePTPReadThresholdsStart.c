/*
 * XREFs of EtwTracePTPReadThresholdsStart @ 0x1C007F8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTracePTPReadThresholdsStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return TemplateEventDescriptor(a1, &PTPReadThresholdsStart, &W32kControlGuid);
  return result;
}

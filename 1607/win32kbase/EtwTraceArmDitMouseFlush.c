/*
 * XREFs of EtwTraceArmDitMouseFlush @ 0x1C00B4D50
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceArmDitMouseFlush(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return TemplateEventDescriptor(a1, &ArmDitMouseFlush, &W32kControlGuid);
  return result;
}

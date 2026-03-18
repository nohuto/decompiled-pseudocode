/*
 * XREFs of EtwTraceLegacyTouchPadDetectionStop @ 0x1C0082580
 * Callers:
 *     RIMCreateDev @ 0x1C000E2BC (RIMCreateDev.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceLegacyTouchPadDetectionStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return TemplateEventDescriptor(a1, &LegacyTouchPadDetectionStop, &W32kControlGuid);
  return result;
}

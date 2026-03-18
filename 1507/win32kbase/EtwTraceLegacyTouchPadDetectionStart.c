/*
 * XREFs of EtwTraceLegacyTouchPadDetectionStart @ 0x1C00780F0
 * Callers:
 *     RIMCreateDev @ 0x1C0076274 (RIMCreateDev.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceLegacyTouchPadDetectionStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return TemplateEventDescriptor(a1, &LegacyTouchPadDetectionStart, &W32kControlGuid);
  return result;
}

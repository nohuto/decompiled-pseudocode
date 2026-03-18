/*
 * XREFs of EtwTraceLegacyTouchPadDetectionStart @ 0x1C007EA10
 * Callers:
 *     RIMCreateDev @ 0x1C0011060 (RIMCreateDev.c)
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

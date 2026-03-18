/*
 * XREFs of EtwTraceLatencyModeSwitchStop @ 0x1C0086F20
 * Callers:
 *     RIMSendLatencyMgtRequest @ 0x1C0086B00 (RIMSendLatencyMgtRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceLatencyModeSwitchStop(__int64 a1)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000000LL) != 0 )
    return TemplateEventDescriptor(a1, &LatencyModeSwitchStop, &W32kControlGuid);
  return result;
}

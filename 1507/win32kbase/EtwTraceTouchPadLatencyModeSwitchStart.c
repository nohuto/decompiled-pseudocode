/*
 * XREFs of EtwTraceTouchPadLatencyModeSwitchStart @ 0x1C0070AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceTouchPadLatencyModeSwitchStart(__int64 a1)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000000LL) != 0 )
    return TemplateEventDescriptor(a1, &TouchPadLatencyModeSwitchStart, &W32kControlGuid);
  return result;
}

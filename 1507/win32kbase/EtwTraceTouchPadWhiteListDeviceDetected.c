/*
 * XREFs of EtwTraceTouchPadWhiteListDeviceDetected @ 0x1C00A82B0
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceTouchPadWhiteListDeviceDetected(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    return TemplateEventDescriptor(a1, &TouchPadWhiteListDeviceDetected, &W32kControlGuid);
  return result;
}

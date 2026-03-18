/*
 * XREFs of EtwTraceTouchPadHIDProcessingStop @ 0x1C00A8120
 * Callers:
 *     rimProcessPTPDeviceInput @ 0x1C00CC708 (rimProcessPTPDeviceInput.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceTouchPadHIDProcessingStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &TouchPadHIDProcessingStop, &W32kControlGuid);
  return result;
}

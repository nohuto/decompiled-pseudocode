/*
 * XREFs of EtwTracePointerDeviceReadStop @ 0x1C00A7B00
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePointerDeviceReadStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceReadStop, &W32kControlGuid);
  return result;
}

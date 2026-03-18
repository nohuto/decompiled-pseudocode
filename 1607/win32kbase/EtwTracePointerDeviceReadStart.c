/*
 * XREFs of EtwTracePointerDeviceReadStart @ 0x1C00B57A0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00B64B8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTracePointerDeviceReadStart(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceReadStart, &W32kControlGuid);
  return result;
}

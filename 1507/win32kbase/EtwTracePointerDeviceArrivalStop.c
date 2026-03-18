/*
 * XREFs of EtwTracePointerDeviceArrivalStop @ 0x1C0084130
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0077398 (RIMAllocateHidDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTracePointerDeviceArrivalStop(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return TemplateEventDescriptor(a1, &PointerDeviceArrivalStop, &W32kControlGuid);
  return result;
}

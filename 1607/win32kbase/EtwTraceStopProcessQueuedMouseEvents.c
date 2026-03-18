/*
 * XREFs of EtwTraceStopProcessQueuedMouseEvents @ 0x1C007D5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwTraceStopProcessQueuedMouseEvents(__int64 a1)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return TemplateEventDescriptor(a1, &StopProcessQueuedMouseEvents, &W32kControlGuid);
  return result;
}

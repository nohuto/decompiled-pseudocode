/*
 * XREFs of KdSetOwedBreakpoints @ 0x1401C2C34
 * Callers:
 *     KiPageFault @ 0x140162040 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x1406ADCE0 (KdpSetOwedBreakpoints.c)
 */

__int64 KdSetOwedBreakpoints()
{
  __int64 result; // rax

  if ( !KdPitchDebugger )
  {
    if ( KdpOweBreakpoint )
      return KdpSetOwedBreakpoints();
  }
  return result;
}

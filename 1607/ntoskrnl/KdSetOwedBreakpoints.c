/*
 * XREFs of KdSetOwedBreakpoints @ 0x1401D1B14
 * Callers:
 *     KiPageFault @ 0x14016C840 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x1406F640C (KdpSetOwedBreakpoints.c)
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

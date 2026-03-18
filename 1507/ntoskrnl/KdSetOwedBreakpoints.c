/*
 * XREFs of KdSetOwedBreakpoints @ 0x1401FE994
 * Callers:
 *     KiPageFault @ 0x140190E00 (KiPageFault.c)
 * Callees:
 *     KdpSetOwedBreakpoints @ 0x14072DD2C (KdpSetOwedBreakpoints.c)
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

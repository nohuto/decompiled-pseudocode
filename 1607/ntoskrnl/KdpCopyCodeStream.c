/*
 * XREFs of KdpCopyCodeStream @ 0x1406F5FA4
 * Callers:
 *     KdpAddBreakpoint @ 0x1406F602C (KdpAddBreakpoint.c)
 *     KdpInsertBreakpoint @ 0x1406F61AC (KdpInsertBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x1406F620C (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x1406F62A4 (KdpLowWriteContent.c)
 *     KdpRemoveBreakpoint @ 0x1406F635C (KdpRemoveBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x1406F640C (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCopyCodeStream(char *a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 result; // rax

  result = KdpCopyMemoryChunks(a1, a2, a3, a3, a4, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  KdpOweBreakpoint = 1;
  if ( (a4 & 5) == 5 )
  {
    result = KdpCopyMemoryChunks(a1, a2, a3, a3, a4 | 0x40u, 0LL);
    if ( (int)result >= 0 )
      return 259LL;
  }
  return result;
}

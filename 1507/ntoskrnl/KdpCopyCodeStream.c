/*
 * XREFs of KdpCopyCodeStream @ 0x14072D560
 * Callers:
 *     KdpAddBreakpoint @ 0x14072D86C (KdpAddBreakpoint.c)
 *     KdpInsertBreakpoint @ 0x14072DAC4 (KdpInsertBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x14072DB24 (KdpLowRestoreBreakpoint.c)
 *     KdpLowWriteContent @ 0x14072DBBC (KdpLowWriteContent.c)
 *     KdpRemoveBreakpoint @ 0x14072DC74 (KdpRemoveBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x14072DD2C (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpCopyMemoryChunks @ 0x14072D658 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCopyCodeStream(PVOID BaseAddress, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  result = KdpCopyMemoryChunks(BaseAddress, a4, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  KdpOweBreakpoint = 1;
  if ( (a4 & 5) == 5 )
  {
    result = KdpCopyMemoryChunks(BaseAddress, a4 | 0x40u, 0LL);
    if ( (int)result >= 0 )
      return 259LL;
  }
  return result;
}

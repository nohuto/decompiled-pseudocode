/*
 * XREFs of KdpSuspendAllBreakpoints @ 0x1406F6584
 * Callers:
 *     KdDisableDebuggerWithLock @ 0x1401D1384 (KdDisableDebuggerWithLock.c)
 * Callees:
 *     KdpLowWriteContent @ 0x1406F62A4 (KdpLowWriteContent.c)
 */

char KdpSuspendAllBreakpoints()
{
  unsigned int i; // ebx
  __int64 v1; // rcx
  char result; // al

  for ( i = 1; i <= 0x20; ++i )
  {
    v1 = i - 1;
    result = *((_DWORD *)&KdpBreakpointTable + 10 * v1 + 8) & 5;
    if ( result == 1 )
    {
      *((_DWORD *)&KdpBreakpointTable + 10 * v1 + 8) |= 4u;
      result = KdpLowWriteContent(v1);
    }
  }
  return result;
}

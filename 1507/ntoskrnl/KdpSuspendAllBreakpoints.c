/*
 * XREFs of KdpSuspendAllBreakpoints @ 0x14072DEAC
 * Callers:
 *     KdDisableDebuggerWithLock @ 0x14017069C (KdDisableDebuggerWithLock.c)
 * Callees:
 *     KdpLowWriteContent @ 0x14072DBBC (KdpLowWriteContent.c)
 */

char KdpSuspendAllBreakpoints()
{
  _DWORD *v0; // rdi
  unsigned int i; // ebx
  char result; // al

  BreakpointsSuspended = 1;
  v0 = &unk_14033A5E0;
  for ( i = 1; i <= 0x20; ++i )
  {
    result = *v0 & 5;
    if ( result == 1 )
    {
      *v0 |= 4u;
      result = KdpLowWriteContent(i - 1);
    }
    v0 += 10;
  }
  return result;
}

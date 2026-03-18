/*
 * XREFs of KdpSuspendAllBreakpoints @ 0x1406ADE60
 * Callers:
 *     KdDisableDebuggerWithLock @ 0x140142878 (KdDisableDebuggerWithLock.c)
 * Callees:
 *     KdpLowWriteContent @ 0x1406ADB70 (KdpLowWriteContent.c)
 */

char KdpSuspendAllBreakpoints()
{
  _DWORD *v0; // rdi
  unsigned int i; // ebx
  char result; // al

  BreakpointsSuspended = 1;
  v0 = &unk_1402EA160;
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

/*
 * XREFs of KdpPollBreakInWithPortLock @ 0x140084C18
 * Callers:
 *     KdpPrintString @ 0x1406F2F8C (KdpPrintString.c)
 * Callees:
 *     <none>
 */

bool KdpPollBreakInWithPortLock()
{
  char v0; // bl

  v0 = 0;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( BYTE4(KdpContext) )
    {
      v0 = 1;
      BYTE4(KdpContext) = 0;
    }
    else
    {
      return (unsigned int)KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL) == 0;
    }
  }
  return v0;
}

/*
 * XREFs of FsRtlIsEcpAcknowledged @ 0x1405F3148
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsEcpAcknowledged(PVOID EcpContext)
{
  return (*((char *)EcpContext - 24) & 8) != 0;
}

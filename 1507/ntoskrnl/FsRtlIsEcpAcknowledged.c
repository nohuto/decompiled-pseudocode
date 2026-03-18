/*
 * XREFs of FsRtlIsEcpAcknowledged @ 0x14058E028
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsEcpAcknowledged(PVOID EcpContext)
{
  return (*((char *)EcpContext - 24) & 8) != 0;
}

/*
 * XREFs of FsRtlIsEcpAcknowledged @ 0x14061D46C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsEcpAcknowledged(PVOID EcpContext)
{
  return (*((char *)EcpContext - 24) & 8) != 0;
}

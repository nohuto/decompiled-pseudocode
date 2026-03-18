/*
 * XREFs of FsRtlIsEcpFromUserMode @ 0x1404CC2E0
 * Callers:
 *     IopCreateFile @ 0x14045B980 (IopCreateFile.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsEcpFromUserMode(PVOID EcpContext)
{
  return (*((char *)EcpContext - 24) & 0x10) != 0;
}

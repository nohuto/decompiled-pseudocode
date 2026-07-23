/*
 * XREFs of FsRtlIsEcpFromUserMode @ 0x1404B1D0C
 * Callers:
 *     IopCreateFile @ 0x14045A850 (IopCreateFile.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsEcpFromUserMode(PVOID EcpContext)
{
  return (*((char *)EcpContext - 24) & 0x10) != 0;
}

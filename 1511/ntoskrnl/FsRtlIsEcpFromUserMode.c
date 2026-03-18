/*
 * XREFs of FsRtlIsEcpFromUserMode @ 0x1404A9594
 * Callers:
 *     IopCreateFile @ 0x140439640 (IopCreateFile.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsEcpFromUserMode(PVOID EcpContext)
{
  return (*((char *)EcpContext - 24) & 0x10) != 0;
}

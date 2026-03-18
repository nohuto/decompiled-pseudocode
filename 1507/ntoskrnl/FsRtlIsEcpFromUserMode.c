/*
 * XREFs of FsRtlIsEcpFromUserMode @ 0x140531C00
 * Callers:
 *     IopCreateFile @ 0x14050A2E0 (IopCreateFile.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsEcpFromUserMode(PVOID EcpContext)
{
  return (*((char *)EcpContext - 24) & 0x10) != 0;
}

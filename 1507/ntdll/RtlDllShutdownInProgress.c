/*
 * XREFs of RtlDllShutdownInProgress @ 0x180038BA0
 * Callers:
 *     RtlResetNtUserPfn @ 0x180083F00 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_180146208 != 0;
}

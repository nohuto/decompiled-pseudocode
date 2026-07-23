/*
 * XREFs of RtlDllShutdownInProgress @ 0x18002A630
 * Callers:
 *     RtlResetNtUserPfn @ 0x180096AA0 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlDllShutdownInProgress(void)
{
  return byte_180152408 != 0;
}

/*
 * XREFs of RtlDllShutdownInProgress @ 0x180054530
 * Callers:
 *     RtlResetNtUserPfn @ 0x1800956B0 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

_BOOL8 RtlDllShutdownInProgress()
{
  return byte_180145248 != 0;
}

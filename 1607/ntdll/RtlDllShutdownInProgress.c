/*
 * XREFs of RtlDllShutdownInProgress @ 0x18002A640
 * Callers:
 *     RtlResetNtUserPfn @ 0x180096AB0 (RtlResetNtUserPfn.c)
 * Callees:
 *     <none>
 */

_BOOL8 RtlDllShutdownInProgress()
{
  return byte_180152408 != 0;
}

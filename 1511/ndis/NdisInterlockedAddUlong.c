/*
 * XREFs of NdisInterlockedAddUlong @ 0x1C00551A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall NdisInterlockedAddUlong(PULONG Addend, ULONG Increment, PKSPIN_LOCK Lock)
{
  return ExInterlockedAddUlong(Addend, Increment, Lock);
}

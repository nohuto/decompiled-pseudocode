/*
 * XREFs of IopLiveDumpLockPages @ 0x1405FD660
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1403AEA00 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     <none>
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}

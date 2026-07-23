/*
 * XREFs of IopLiveDumpLockPages @ 0x140627388
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1403DAA8C (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     <none>
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}

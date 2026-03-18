/*
 * XREFs of IopLiveDumpLockPages @ 0x1406272D4
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1403DAA8C (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     <none>
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}

/*
 * XREFs of IopLiveDumpLockPages @ 0x140677FA8
 * Callers:
 *     IopLiveDumpCorralProcessors @ 0x1403FEDD4 (IopLiveDumpCorralProcessors.c)
 * Callees:
 *     <none>
 */

void IopLiveDumpLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
}

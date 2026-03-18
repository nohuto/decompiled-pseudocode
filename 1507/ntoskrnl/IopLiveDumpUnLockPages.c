/*
 * XREFs of IopLiveDumpUnLockPages @ 0x1401F8D50
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1403FFE28 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     <none>
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}

/*
 * XREFs of IopLiveDumpUnLockPages @ 0x1401BD4C4
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1403AF83C (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     <none>
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}

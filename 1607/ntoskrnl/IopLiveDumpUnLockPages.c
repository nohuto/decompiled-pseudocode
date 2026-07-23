/*
 * XREFs of IopLiveDumpUnLockPages @ 0x1401CB380
 * Callers:
 *     IopLiveDumpUncorralProcessors @ 0x1403DB958 (IopLiveDumpUncorralProcessors.c)
 * Callees:
 *     <none>
 */

void IopLiveDumpUnLockPages()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
}

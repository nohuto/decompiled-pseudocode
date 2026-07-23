/*
 * XREFs of ZwThawTransactions @ 0x14015D7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwThawTransactions(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}

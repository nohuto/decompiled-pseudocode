/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1401E1A58
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14066AD98 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}

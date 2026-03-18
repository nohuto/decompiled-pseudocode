/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1401ABF18
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x1405F206C (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}

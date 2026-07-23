/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1401B7CA8
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14061C380 (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}

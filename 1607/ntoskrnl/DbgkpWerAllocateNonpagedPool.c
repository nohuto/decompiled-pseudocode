/*
 * XREFs of DbgkpWerAllocateNonpagedPool @ 0x1401B7DC4
 * Callers:
 *     DbgkpWerInitializeDeferredLiveDump @ 0x14061C2CC (DbgkpWerInitializeDeferredLiveDump.c)
 * Callees:
 *     <none>
 */

PVOID DbgkpWerAllocateNonpagedPool()
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x57676244u);
}

/*
 * XREFs of MmTrimPagedPool @ 0x14065A268
 * Callers:
 *     CmpTrimHive @ 0x1404A1058 (CmpTrimHive.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001D05C (MiGetAnyMultiplexedVm.c)
 */

char MmTrimPagedPool()
{
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r10

  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  return MiDeprioritizeVirtualAddresses(v2, v1 >> 12, (ULONG_PTR)AnyMultiplexedVm, 40);
}

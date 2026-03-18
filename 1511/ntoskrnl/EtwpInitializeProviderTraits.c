/*
 * XREFs of EtwpInitializeProviderTraits @ 0x1405244A8
 * Callers:
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140093730 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  EtwpProviderTraitsUmTree = 0LL;
}

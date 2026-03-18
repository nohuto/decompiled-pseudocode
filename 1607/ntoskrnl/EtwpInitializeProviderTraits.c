/*
 * XREFs of EtwpInitializeProviderTraits @ 0x1405814DC
 * Callers:
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14007D100 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex(&EtwpProviderTraitsUmMutex);
  EtwpProviderTraitsUmTree = 0LL;
}

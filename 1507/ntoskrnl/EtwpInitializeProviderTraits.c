/*
 * XREFs of EtwpInitializeProviderTraits @ 0x1405C2B50
 * Callers:
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14002B748 (KeInitializeGuardedMutex.c)
 */

void EtwpInitializeProviderTraits()
{
  KeInitializeGuardedMutex(&EtwpProviderTraitsKmMutex);
  EtwpProviderTraitsKmTree = 0LL;
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&EtwpProviderTraitsUmMutex);
  EtwpProviderTraitsUmTree = 0LL;
}

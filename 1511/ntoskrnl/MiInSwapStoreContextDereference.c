/*
 * XREFs of MiInSwapStoreContextDereference @ 0x1403B5B2C
 * Callers:
 *     MiInSwapStore @ 0x1403B59C8 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1403B5A9C (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}

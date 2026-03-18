/*
 * XREFs of MiInSwapStoreContextDereference @ 0x14055D4E4
 * Callers:
 *     MiInSwapStore @ 0x14055D380 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x14055D454 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}

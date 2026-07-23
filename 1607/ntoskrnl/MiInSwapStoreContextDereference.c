/*
 * XREFs of MiInSwapStoreContextDereference @ 0x1404D3A28
 * Callers:
 *     MiInSwapStore @ 0x1404D38C4 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x1404D3998 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}

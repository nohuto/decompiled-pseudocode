/*
 * XREFs of EthDeleteFilter @ 0x1C00CD984
 * Callers:
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C0098D8C (ndisMCleanupMiniportBlockOnStop.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C0010D20 (NdisFreeRWLock.c)
 */

void __fastcall EthDeleteFilter(__int64 a1)
{
  struct _NDIS_RW_LOCK_EX *v2; // rcx

  if ( *(_DWORD *)(a1 + 344) )
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 376), 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 392), 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 352), 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 360), 0);
  }
  v2 = *(struct _NDIS_RW_LOCK_EX **)(a1 + 288);
  if ( v2 )
    NdisFreeRWLock(v2);
  ExFreePoolWithTag((PVOID)a1, 0);
}

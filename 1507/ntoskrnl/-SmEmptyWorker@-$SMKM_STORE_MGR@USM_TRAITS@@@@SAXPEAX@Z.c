/*
 * XREFs of ?SmEmptyWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140251974
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmEmptyWorker(__int64 a1)
{
  SMKM_STORE_MGR<SM_TRAITS>::SmEmptyQueueToStore(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 40));
}

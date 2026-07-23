/*
 * XREFs of MmStoreAsyncWriteComplete @ 0x14011B3BC
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14011B110 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiStoreModifiedWriteDereference @ 0x14011B430 (MiStoreModifiedWriteDereference.c)
 *     MiStoreLogWriteCompleteFailure @ 0x1401F4884 (MiStoreLogWriteCompleteFailure.c)
 */

__int64 __fastcall MmStoreAsyncWriteComplete(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  unsigned __int8 v5; // al

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 192LL);
  if ( *(int *)(a1 + 16) < 0 )
  {
    MiStoreLogWriteCompleteFailure();
    v4 = 48LL * *(_QWORD *)(a1 + 112) - 0x58000000000LL;
    v5 = MiLockPageInline(v4);
    *(_BYTE *)(v4 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v5);
    *(_DWORD *)(v2 + 1076) = 32;
  }
  MiStoreModifiedWriteDereference(*(_QWORD *)(a1 + 56));
  return MiStoreFreeWriteSupport(a1, MiSystemPartition);
}

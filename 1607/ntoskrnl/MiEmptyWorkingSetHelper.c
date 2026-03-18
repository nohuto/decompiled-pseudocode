/*
 * XREFs of MiEmptyWorkingSetHelper @ 0x1400160F8
 * Callers:
 *     MiEmptyWorkingSet @ 0x140015ED4 (MiEmptyWorkingSet.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x140133238 (MiEmptyWsPrivatePagesCallback.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401EA524 (MmUpdateOldWorkingSetPages.c)
 * Callees:
 *     MI_WSLE_LOG_ACCESS @ 0x140016E5C (MI_WSLE_LOG_ACCESS.c)
 *     MiGetSharedWorkingSetList @ 0x140047070 (MiGetSharedWorkingSetList.c)
 *     MiPartitionIdToPointer @ 0x1400680A0 (MiPartitionIdToPointer.c)
 *     MiFreeWsleList @ 0x1400E3AD0 (MiFreeWsleList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F2550 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiDemoteCombinedPte @ 0x1401F97B0 (MiDemoteCombinedPte.c)
 */

__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 SharedWorkingSetList; // r14
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r8

  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  v12 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v9) - 0x58000000000LL;
  if ( *(_WORD *)(v12 + 32) > 1u && (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    v14 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v12 + 40)) >> 8) & 0x3FF, v10, v11, v12);
    v17 = MiPartitionIdToPointer(*(unsigned __int16 *)(a1 + 164), v15, v14, v16);
    if ( v17 != v18 )
      return 0LL;
  }
  v19 = *(_QWORD *)(v12 + 8);
  if ( v19 >= 0 )
    MiDemoteCombinedPte(a1, a2, v19 | 0x8000000000000000uLL);
  if ( dword_140327188 )
    MI_WSLE_LOG_ACCESS(
      a1,
      *(_QWORD *)(SharedWorkingSetList + 80) + a3 * *(unsigned int *)(SharedWorkingSetList + 32),
      a2);
  *(_QWORD *)&a4[2 * (*a4)++ + 2] = a3;
  if ( *a4 == 19 )
  {
    MiFreeWsleList(a1, a4, 0LL);
    *a4 = 0;
  }
  return 1LL;
}

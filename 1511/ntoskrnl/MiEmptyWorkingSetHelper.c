/*
 * XREFs of MiEmptyWorkingSetHelper @ 0x14001F788
 * Callers:
 *     MiEmptyWorkingSet @ 0x14001F584 (MiEmptyWorkingSet.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x14012BE8C (MiEmptyWsPrivatePagesCallback.c)
 *     MmUpdateOldWorkingSetPages @ 0x1401D8810 (MmUpdateOldWorkingSetPages.c)
 * Callees:
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400B82C4 (MI_WSLE_LOG_ACCESS.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiEmptyWorkingSetHelper(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v10; // rdx

  v8 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(a2) - 0x58000000000LL;
  if ( *(_WORD *)(v8 + 32) > 1u && (*(_BYTE *)(a1 + 216) & 7) != 0 )
    return 0LL;
  v10 = *(_QWORD *)(v8 + 8);
  if ( v10 >= 0 )
    MiDemoteCombinedPte(a2, v10 | 0x8000000000000000uLL);
  if ( dword_1402FED88 )
    MI_WSLE_LOG_ACCESS(
      a1,
      *(_QWORD *)(*(_QWORD *)(a1 + 184) + 496LL) + a3 * *(unsigned int *)(*(_QWORD *)(a1 + 184) + 64LL),
      a2);
  *(_QWORD *)&a4[2 * (*a4)++ + 2] = a3;
  if ( *a4 == 19 )
  {
    MiFreeWsleList(a1, a4, 0LL);
    *a4 = 0;
  }
  return 1LL;
}

/*
 * XREFs of MiDecrementCombinedPte @ 0x1401F9558
 * Callers:
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x14004B220 (MiDeleteValidSystemPage.c)
 *     MiDeletePteRun @ 0x140064CC0 (MiDeletePteRun.c)
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiDereferenceCombineBlock @ 0x1401F9960 (MiDereferenceCombineBlock.c)
 *     MiDereferenceCombineCrc @ 0x140663E7C (MiDereferenceCombineCrc.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x1400B6CA0 (MiDeleteMergedPte.c)
 *     MiFreeCombineBlock @ 0x1401F9A50 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x1401F9D2C (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDecrementCombinedPte(unsigned __int64 a1)
{
  __int64 v2; // rcx
  unsigned int v4; // edi

  v2 = *(_QWORD *)(((a1 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 384), 0xFFFFFFFF);
  if ( _InterlockedDecrement64((volatile signed __int64 *)(a1 - 16)) )
    return 2LL;
  v4 = 0;
  if ( *(_QWORD *)(a1 - 24) )
  {
    v4 = MiDeleteMergedPte(*(struct _KEVENT **)v2, a1);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(a1);
  }
  MiFreeCombineBlock(a1 - 48);
  return v4;
}

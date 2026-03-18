/*
 * XREFs of MiDecrementCombinedPte @ 0x1401F972C
 * Callers:
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045C00 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x14004B6A0 (MiDeleteValidSystemPage.c)
 *     MiDeletePteRun @ 0x140065140 (MiDeletePteRun.c)
 *     MiDeletePteList @ 0x1400DFAC0 (MiDeletePteList.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiDereferenceCombineBlock @ 0x1401F9B34 (MiDereferenceCombineBlock.c)
 *     MiDereferenceCombineCrc @ 0x140663D98 (MiDereferenceCombineCrc.c)
 *     MiProcessCrcList @ 0x140663DC8 (MiProcessCrcList.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x1400B8E10 (MiDeleteMergedPte.c)
 *     MiFreeCombineBlock @ 0x1401F9C24 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x1401F9F00 (MiLogCombinedPteDelete.c)
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

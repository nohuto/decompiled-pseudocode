/*
 * XREFs of MiDecrementCombinedPte @ 0x14022A0F0
 * Callers:
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x1400AFDF0 (MiDeleteSystemPagableVm.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MiDereferenceCombineCrc @ 0x1406A8B8C (MiDereferenceCombineCrc.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x140005510 (MiDeleteMergedPte.c)
 *     MiFreeCombineBlock @ 0x14022A730 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x14022AAC8 (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDecrementCombinedPte(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned int v4; // edi

  v2 = *(_QWORD *)(((unsigned __int64)(a1 - 6) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 384), 0xFFFFFFFF);
  if ( _InterlockedDecrement64(a1 - 2) )
    return 2LL;
  v4 = 0;
  if ( *(a1 - 3) )
  {
    v4 = MiDeleteMergedPte(*(_QWORD *)v2, a1);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(a1);
  }
  MiFreeCombineBlock(a1 - 6);
  return v4;
}

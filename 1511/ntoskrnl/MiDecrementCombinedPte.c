/*
 * XREFs of MiDecrementCombinedPte @ 0x14012B580
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     MiProcessCrcList @ 0x14050E300 (MiProcessCrcList.c)
 *     MiDereferenceCombineCrc @ 0x14062ACC8 (MiDereferenceCombineCrc.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x14000E9A8 (MiDeleteMergedPte.c)
 *     MiFreeCombineBlock @ 0x14012B6C8 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x1401E1364 (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDecrementCombinedPte(ULONG_PTR a1)
{
  __int64 v2; // rcx
  unsigned int v4; // edi

  v2 = *(_QWORD *)(((a1 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 384), 0xFFFFFFFF);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 16), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
    return 2LL;
  v4 = 0;
  if ( *(_QWORD *)(a1 - 24) )
  {
    v4 = MiDeleteMergedPte(*(_QWORD *)v2, a1);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(a1);
  }
  MiFreeCombineBlock(a1 - 48);
  return v4;
}

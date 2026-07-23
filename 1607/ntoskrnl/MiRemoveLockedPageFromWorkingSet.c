/*
 * XREFs of MiRemoveLockedPageFromWorkingSet @ 0x1400B899C
 * Callers:
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiUnlockVa @ 0x1400B88A0 (MiUnlockVa.c)
 *     MiTerminateWsle @ 0x1400E0160 (MiTerminateWsle.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiSwapWslEntries @ 0x1400499F0 (MiSwapWslEntries.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiUnlockPageTableCharges @ 0x1400B8AD8 (MiUnlockPageTableCharges.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiRemoveLockedPageFromWorkingSet(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  ULONG_PTR *SharedWorkingSetList; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  ULONG_PTR *v11; // rsi
  int *v12; // rbx
  ULONG_PTR v13; // rcx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  v10 = *(_QWORD *)(v9 + 40);
  v11 = SharedWorkingSetList;
  if ( (v10 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v9 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
  {
    v12 = MiPartitionIdToPointer((HIDWORD(v10) >> 8) & 0x3FF);
    MiReturnCommit((__int64)v12, 1uLL);
    _InterlockedDecrement64((volatile signed __int64 *)v12 + 920);
  }
  v13 = v11[1] - 1;
  if ( a3 != v13 )
    MiSwapWslEntries(v13, a3, a1);
  --v11[1];
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v15 = *(_QWORD *)(a4 + 40);
    if ( (v15 & 0x200000000000000LL) != 0 )
      MiUnlockPageTableCharges(48 * (v15 & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v16 = MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return MiUnlockPageTableCharges(48 * v16 - 0x58000000000LL);
  }
  return result;
}

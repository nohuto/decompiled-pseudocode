/*
 * XREFs of MiRemoveLockedPageFromWorkingSet @ 0x140021840
 * Callers:
 *     MiUnlockVa @ 0x140021744 (MiUnlockVa.c)
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MiTerminateWsle @ 0x1400B7650 (MiTerminateWsle.c)
 * Callees:
 *     MiUnlockPageTableCharges @ 0x140021978 (MiUnlockPageTableCharges.c)
 *     MiSwapWslEntries @ 0x140057020 (MiSwapWslEntries.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiRemoveLockedPageFromWorkingSet(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v4 = *(_QWORD *)(a1 + 184);
  v6 = *(_QWORD *)(a4 + 40);
  if ( (v6 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a4 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 216) & 7) == 0 )
  {
    v10 = v6 >> 40;
    LOWORD(v10) = v10 & 0x3FF;
    v11 = MiPartitionIdToPointer(v10);
    MiReturnCommit(v11, 1LL);
    _InterlockedDecrement64((volatile signed __int64 *)(v11 + 6144));
  }
  v12 = *(_QWORD *)(v4 + 8) - 1LL;
  if ( a3 != v12 )
    MiSwapWslEntries(v12, a3, a1);
  --*(_QWORD *)(v4 + 8);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v14 = *(_QWORD *)(a4 + 40);
    if ( (v14 & 0x200000000000000LL) != 0 )
      MiUnlockPageTableCharges(48 * (v14 & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v15 = MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    return MiUnlockPageTableCharges(48 * v15 - 0x58000000000LL);
  }
  return result;
}

/*
 * XREFs of MiRemoveLockedPageFromWorkingSet @ 0x14007CAB4
 * Callers:
 *     MiUnlockVa @ 0x14007C98C (MiUnlockVa.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiTerminateWsle @ 0x1400AE090 (MiTerminateWsle.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiUnlockPageTableCharges @ 0x14007CC10 (MiUnlockPageTableCharges.c)
 *     MiSwapWslEntries @ 0x140097790 (MiSwapWslEntries.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiRemoveLockedPageFromWorkingSet(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int16 *v10; // rbx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rax
  unsigned __int64 *v14; // rdi
  unsigned __int64 PteShadow; // rax

  v4 = *(_QWORD *)(a1 + 184);
  v6 = *(_QWORD *)(a4 + 40);
  if ( (v6 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a4 + 16) & 0x400LL) != 0 && (*(_BYTE *)(a1 + 216) & 7) == 0 )
  {
    v10 = MiPartitionIdToPointer((HIDWORD(v6) >> 8) & 0x3FF);
    MiReturnCommit(v10, 1LL);
    _InterlockedDecrement64((volatile signed __int64 *)v10 + 720);
  }
  v11 = *(_QWORD *)(v4 + 8) - 1LL;
  if ( a3 != v11 )
    MiSwapWslEntries(v11, a3, a1);
  --*(_QWORD *)(v4 + 8);
  result = 0xFFFF800000000000uLL;
  if ( a2 < 0xFFFF800000000000uLL )
  {
    v13 = *(_QWORD *)(a4 + 40);
    if ( (v13 & 0x200000000000000LL) != 0 )
      MiUnlockPageTableCharges(48 * (v13 & 0xFFFFFFFFFLL) - 0x58000000000LL);
    v14 = (unsigned __int64 *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    PteShadow = *v14;
    if ( (unsigned __int64)(v14 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v14, *v14);
    return MiUnlockPageTableCharges(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  return result;
}

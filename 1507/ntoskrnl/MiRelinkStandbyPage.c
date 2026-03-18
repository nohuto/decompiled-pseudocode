/*
 * XREFs of MiRelinkStandbyPage @ 0x140012270
 * Callers:
 *     MmSetPfnListPriorities @ 0x140011DA0 (MmSetPfnListPriorities.c)
 *     MiEmptyDecayClusterTimers @ 0x140011F70 (MiEmptyDecayClusterTimers.c)
 *     MiUpdatePfnPriorityByPte @ 0x140054C90 (MiUpdatePfnPriorityByPte.c)
 *     MiUpdatePfnPriority @ 0x140080A64 (MiUpdatePfnPriority.c)
 *     MiReturnPartitionPagesToParent @ 0x14021D9D8 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR a1, int a2, unsigned __int16 a3)
{
  __int64 v6; // rax
  char v7; // al
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx

  if ( *(_WORD *)(a1 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
    return 1LL;
  }
  if ( (unsigned int)MiUnlinkPageFromList(a1) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
    if ( a3 == 1022 )
      goto LABEL_16;
    v9 = 0LL;
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    {
      v9 = MiCaptureDirtyBitToPfn(a1);
      if ( v9 )
      {
        v10 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
        MiReleasePageFileInfo(v10, v9, 1LL);
      }
    }
    v11 = 8LL;
    *(_QWORD *)(a1 + 40) ^= (*(_QWORD *)(a1 + 40) ^ ((unsigned __int64)a3 << 40)) & 0x3FF0000000000LL;
    if ( !v9 )
LABEL_16:
      v11 = 4LL;
    MiInsertPageInList(a1, v11);
    return 1LL;
  }
  MiRestoreTransitionPte(a1, 1LL);
  v6 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedDecrement64(&qword_14034F400);
  else
    _InterlockedDecrement64((volatile signed __int64 *)(v6 + 4160));
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  v7 = *(_BYTE *)(a1 + 34) & 0xC5;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 34) = v7 | 5;
  *(_QWORD *)(a1 + 16) = MiMakeDemandZeroPte(4LL);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48);
  return 0LL;
}

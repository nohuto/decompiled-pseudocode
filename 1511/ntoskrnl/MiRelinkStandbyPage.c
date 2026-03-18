/*
 * XREFs of MiRelinkStandbyPage @ 0x140014990
 * Callers:
 *     MmSetPfnListPriorities @ 0x1400145D0 (MmSetPfnListPriorities.c)
 *     MiEmptyDecayClusterTimers @ 0x140014790 (MiEmptyDecayClusterTimers.c)
 *     MiUpdatePfnPriorityByPte @ 0x14007C6B0 (MiUpdatePfnPriorityByPte.c)
 *     MiUpdatePfnPriority @ 0x1400B9884 (MiUpdatePfnPriority.c)
 *     MiReturnPartitionPagesToParent @ 0x1401D98E4 (MiReturnPartitionPagesToParent.c)
 * Callees:
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR a1, int a2, unsigned __int16 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rbx
  __int64 v13; // rax

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
      goto LABEL_6;
    v12 = 0LL;
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    {
      v12 = MiCaptureDirtyBitToPfn(a1);
      if ( v12 )
      {
        v13 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
        MiReleasePageFileInfo(v13, v12, 1LL);
      }
    }
    v8 = 8LL;
    *(_QWORD *)(a1 + 40) ^= (*(_QWORD *)(a1 + 40) ^ ((unsigned __int64)a3 << 40)) & 0x3FF0000000000LL;
    if ( !v12 )
LABEL_6:
      v8 = 4LL;
    MiInsertPageInList(a1, v8, v6, v7);
    return 1LL;
  }
  MiRestoreTransitionPte(a1, 1LL);
  v10 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedDecrement64(&qword_1402FEF40);
  else
    _InterlockedDecrement64((volatile signed __int64 *)(v10 + 4352));
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  v11 = *(_BYTE *)(a1 + 34) & 0xC5;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 128LL;
  *(_BYTE *)(a1 + 34) = v11 | 5;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48);
  return 0LL;
}

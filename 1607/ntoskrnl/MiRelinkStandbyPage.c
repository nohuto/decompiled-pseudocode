/*
 * XREFs of MiRelinkStandbyPage @ 0x1400BC3A4
 * Callers:
 *     MiUpdatePfnPriorityByPte @ 0x14002E230 (MiUpdatePfnPriorityByPte.c)
 *     MiUpdatePfnPriority @ 0x1400BBB70 (MiUpdatePfnPriority.c)
 *     MmSetPfnListPriorities @ 0x1400BC000 (MmSetPfnListPriorities.c)
 *     MiEmptyDecayClusterTimers @ 0x1400BC1A0 (MiEmptyDecayClusterTimers.c)
 *     MiTransferPartitionPageRun @ 0x1401F1E84 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiRelinkStandbyPage(ULONG_PTR a1, int a2, unsigned __int16 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // al
  unsigned __int64 v14; // rbx
  struct _KEVENT *v15; // rax
  unsigned int v16; // edx

  if ( *(_WORD *)(a1 + 32) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
    return 1LL;
  }
  if ( (unsigned int)MiUnlinkPageFromList(a1, 0) )
  {
    if ( a2 != 0xFFFFFF )
      *(_BYTE *)(a1 + 35) ^= (a2 ^ *(_BYTE *)(a1 + 35)) & 7;
    if ( a3 == 1022 )
      goto LABEL_16;
    v14 = 0LL;
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    {
      v14 = MiCaptureDirtyBitToPfn(a1);
      if ( v14 )
      {
        v15 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
        MiReleasePageFileInfo(v15, v14, 1);
      }
    }
    v16 = 8;
    *(_QWORD *)(a1 + 40) ^= (*(_QWORD *)(a1 + 40) ^ ((unsigned __int64)a3 << 40)) & 0x3FF0000000000LL;
    if ( !v14 )
LABEL_16:
      v16 = 4;
    MiInsertPageInList(a1, v16);
    return 1LL;
  }
  MiRestoreTransitionPte(a1, 1LL, v6, v7);
  v8 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
    _InterlockedDecrement64(&qword_140327380);
  else
    _InterlockedDecrement64((volatile signed __int64 *)v8 + 560);
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  v12 = *(_BYTE *)(a1 + 34) & 0xFD;
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 34) = v12 | 5;
  *(_QWORD *)(a1 + 16) = MiMakeDemandZeroPte(4LL, v9, v10, v11);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48, 2);
  return 0LL;
}

/*
 * XREFs of MiWriteCompletePfn @ 0x1400673F0
 * Callers:
 *     MiBuildMappedCluster @ 0x14002F79C (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiUnlockMdlWritePages @ 0x1400661D0 (MiUnlockMdlWritePages.c)
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 *     MiUnlockStoreLockedPages @ 0x140113C98 (MiUnlockStoreLockedPages.c)
 * Callees:
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_IS_PFN_COMMIT_NOT_CHARGED @ 0x1400AA2E4 (MI_IS_PFN_COMMIT_NOT_CHARGED.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400E2724 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiWriteCompletePfn(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char v5; // bl
  char v7; // cl
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ebp
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // [rsp+58h] [rbp+10h]

  v19 = a2;
  v4 = 0LL;
  v5 = a2;
  if ( (a2 & 1) != 0 )
  {
    v10 = *(_DWORD *)(a1 + 16);
    v11 = a1 + 16;
    if ( (v10 & 0x400) == 0 )
      v4 = MiCapturePageFileInfoInline(v11, 1LL, 0LL);
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v14 = MI_IS_PTE_IN_WS_SWAP_SET(a1 + 16, a2, a3, a4);
    if ( !v14 && (*(_DWORD *)(a1 + 16) & 0x1000LL) != 0 )
      v14 = ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 2;
    v4 = MiCapturePageFileInfoInline(a1 + 16, 1LL, v14);
    if ( v14 )
      *(_QWORD *)(a1 + 16) &= ~0x1000uLL;
  }
  v7 = *(_BYTE *)(a1 + 34) & 0xF7;
  *(_BYTE *)(a1 + 34) = v7;
  if ( (v7 & 0x20) != 0 )
  {
    a2 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
    if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0
      || a2 + 0x400000000000LL > 0xF7FFFFFFFFFLL
      && (!qword_1402FE8F0
       || a2 < qword_1402FE8F0
       || a2 >= qword_1402FE8F0 + (qword_1402FE8D0 << 21)
       || (v18 = (*(_QWORD *)(((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL,
           a2 = 0xFFFFFA8000000026uLL,
           (*(_BYTE *)(48 * v18 - 0x57FFFFFFFDALL) & 0xF0) != 0x70)) )
    {
      *(_BYTE *)(a1 + 34) = v7 & 0xDF;
    }
  }
  if ( (*(_WORD *)(a1 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)MI_IS_PFN_COMMIT_NOT_CHARGED(a1, a2) )
    {
      v12 = *(_QWORD *)(a1 + 40) >> 40;
      LOWORD(v12) = v12 & 0x3FF;
      v13 = MiPartitionIdToPointer(v12);
      MiReturnCommit(v13, 1uLL);
      v5 = v19;
    }
    if ( (v5 & 4) != 0 )
    {
      MiRestoreTransitionPte(a1, 2LL);
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2uLL);
    }
    else
    {
      if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
        KeBugCheckEx(0x4Eu, 7uLL, (a1 + 0x58000000000LL) / 48, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
      if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      {
        v15 = *(_BYTE *)(a1 + 35);
        if ( (v15 & 0x10) != 0 )
          *(_BYTE *)(a1 + 35) = v15 & 0xEF;
        v16 = *(_QWORD *)(a1 + 40) >> 40;
        LOWORD(v16) = v16 & 0x3FF;
        v17 = MiPartitionIdToPointer(v16);
        MiReleasePageFileSpace(v17, *(_QWORD *)(a1 + 16), 1LL);
        MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2uLL);
      }
      else if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
      {
        MiInsertPageInList(a1, 8u);
      }
      else
      {
        MiInsertPageInList(a1, *(_DWORD *)(a1 + 24) + 4);
      }
    }
  }
  return v4;
}

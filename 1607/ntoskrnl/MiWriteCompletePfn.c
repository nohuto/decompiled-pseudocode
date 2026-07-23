/*
 * XREFs of MiWriteCompletePfn @ 0x14004E120
 * Callers:
 *     MiBuildMappedCluster @ 0x14001F140 (MiBuildMappedCluster.c)
 *     MiUnlockMdlWritePages @ 0x14004D030 (MiUnlockMdlWritePages.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 *     MiUnlockStoreLockedPages @ 0x140122F8C (MiUnlockStoreLockedPages.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiIsPfnCommitNotCharged @ 0x14004ECC0 (MiIsPfnCommitNotCharged.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14009DBAC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiWriteCompletePfn(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  char v6; // cl
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebp
  unsigned __int64 v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  char v17; // al
  __int64 v18; // rcx
  struct _KEVENT *v19; // rax
  char v20; // [rsp+48h] [rbp+10h]

  v20 = a2;
  v4 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 16);
    v10 = a1 + 16;
    if ( (v9 & 0x400) == 0 )
      v4 = MiCapturePageFileInfoInline(v10, 1LL, 0LL);
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v11 = MI_IS_PTE_IN_WS_SWAP_SET(a1 + 16, a2, a3, a4);
    if ( !v11 && (*(_DWORD *)(a1 + 16) & 2) != 0 )
      v11 = ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 2;
    v4 = MiCapturePageFileInfoInline(a1 + 16, 1LL, v11);
    if ( v11 )
      *(_QWORD *)(a1 + 16) &= ~2uLL;
  }
  *(_BYTE *)(a1 + 34) &= ~8u;
  v6 = *(_BYTE *)(a1 + 34);
  if ( (v6 & 0x20) != 0 )
  {
    a3 = 0x200000000000000LL;
    v12 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
    if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0
      || (v12 < qword_140327F70 || (a3 = 0xF8000000000LL, v12 >= qword_140327F70 + 0xF8000000000LL))
      && ((a3 = qword_140326C70) == 0
       || v12 < qword_140326C70
       || v12 >= qword_140326C70 + (qword_140326C50 << 21)
       || (*(_BYTE *)(48 * ((*(_QWORD *)(((v12 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                    - 0x57FFFFFFFDALL) & 0xF0) != 0x70) )
    {
      *(_BYTE *)(a1 + 34) = v6 & 0xDF;
    }
  }
  if ( (*(_WORD *)(a1 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)MiIsPfnCommitNotCharged(a1) )
    {
      v15 = *(_QWORD *)(a1 + 40) >> 40;
      LOWORD(v15) = v15 & 0x3FF;
      v16 = MiPartitionIdToPointer(v15, v14, a3, a4);
      MiReturnCommit(v16, 1uLL);
    }
    if ( (v20 & 4) != 0 )
    {
      MiRestoreTransitionPte(a1, 2LL, a3, a4);
    }
    else
    {
      if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
        KeBugCheckEx(0x4Eu, 7uLL, (a1 + 0x58000000000LL) / 48, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
      if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 )
      {
        if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
          MiInsertPageInList(a1, 8LL);
        else
          MiInsertPageInList(a1, (unsigned int)(*(_DWORD *)(a1 + 24) + 4));
        return v4;
      }
      v17 = *(_BYTE *)(a1 + 35);
      if ( (v17 & 0x10) != 0 )
        *(_BYTE *)(a1 + 35) = v17 & 0xEF;
      v18 = *(_QWORD *)(a1 + 40) >> 40;
      LOWORD(v18) = v18 & 0x3FF;
      v19 = (struct _KEVENT *)MiPartitionIdToPointer(
                                v18,
                                (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                                a3,
                                0LL);
      MiReleasePageFileSpace(v19, *(_QWORD *)(a1 + 16), 1LL);
    }
    MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48);
  }
  return v4;
}

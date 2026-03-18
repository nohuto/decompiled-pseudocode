/*
 * XREFs of MiWriteCompletePfn @ 0x1400B51B0
 * Callers:
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiUnlockMdlWritePages @ 0x1400B55B0 (MiUnlockMdlWritePages.c)
 *     MiBuildMappedCluster @ 0x1400E4A80 (MiBuildMappedCluster.c)
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 *     MiUnlockStoreLockedPages @ 0x14014744C (MiUnlockStoreLockedPages.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

unsigned __int64 __fastcall MiWriteCompletePfn(__int64 a1, char a2)
{
  unsigned __int64 PteShadow; // rbx
  char v3; // r9
  __int64 *v5; // r10
  __int64 v6; // r11
  __int64 v7; // rbx
  _DWORD *v8; // r10
  __int64 v9; // rcx
  __int16 v10; // dx
  BOOL v11; // r11d
  __int64 v12; // rsi
  char v13; // al
  unsigned __int64 v14; // rcx
  char v15; // dl
  unsigned __int64 v17; // rcx
  __int16 *v18; // rax
  char v19; // al
  __int16 *v20; // rax

  PteShadow = 0LL;
  v3 = a2;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_26;
    v8 = (_DWORD *)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 16);
    v10 = *(_WORD *)(qword_1403551E0[(unsigned __int16)v9 >> 12] + 164LL);
    if ( (v10 & 0x10) != 0 || (v10 & 0x20) != 0 && (v9 & 2) != 0 )
    {
      v11 = 1;
    }
    else
    {
      v11 = 0;
      if ( (*v8 & 2) != 0 )
        v11 = ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 2;
    }
    v12 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 4) != 0 )
    {
      PteShadow = *(_QWORD *)v8;
      if ( (unsigned __int64)(v8 + 0x24120904C00LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow(v8, v12);
      *(_QWORD *)v8 = v12 & 0xFFFFFFFFFFFFFFFBuLL;
      if ( v11 )
        goto LABEL_25;
      PteShadow &= ~2uLL;
    }
    else
    {
      if ( !v11 )
        goto LABEL_26;
      if ( (v12 & 2) != 0 )
      {
        PteShadow = *(_QWORD *)v8;
        if ( (unsigned __int64)(v8 + 0x24120904C00LL) <= 0x7F8 )
          PteShadow = MiReadPteShadow(v8, v12);
      }
    }
    if ( !v11 )
      goto LABEL_26;
LABEL_25:
    *(_QWORD *)v8 &= ~2uLL;
    goto LABEL_26;
  }
  v5 = (__int64 *)(a1 + 16);
  if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
  {
    v6 = *v5;
    if ( (*v5 & 4) != 0 )
    {
      v7 = *v5;
      if ( (unsigned __int64)(a1 + 0x90482413010LL) <= 0x7F8 )
        v7 = MiReadPteShadow(a1 + 16, v6);
      *v5 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
      PteShadow = v7 & 0xFFFFFFFFFFFFFFFDuLL;
    }
  }
  *(_BYTE *)(a1 + 34) |= 0x10u;
LABEL_26:
  v13 = *(_BYTE *)(a1 + 34) & 0xF7;
  *(_BYTE *)(a1 + 34) = v13;
  if ( (v13 & 0x20) != 0 )
  {
    v14 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
    if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0
      || v14 + 0x400000000000LL > 0xF7FFFFFFFFFLL
      && (!qword_14034EDB0
       || v14 < qword_14034EDB0
       || v14 >= qword_14034EDB0 + (qword_14034ED90 << 21)
       || (*(_BYTE *)(48 * ((*(_QWORD *)(((v14 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                    - 0x57FFFFFFFDALL) & 0xF0) != 0x70) )
    {
      if ( (MiFlags & 0x80000) == 0 )
      {
        v15 = 6;
        if ( ((*(_DWORD *)(a1 + 16) >> 5) & 4) != 0 && ((*(_DWORD *)(a1 + 16) >> 5) & 5) != 5 )
          v15 = 7;
        MiMarkPfnVerified(a1, v15);
        v3 = a2;
      }
      *(_BYTE *)(a1 + 34) &= ~0x20u;
    }
  }
  if ( (*(_WORD *)(a1 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
      if ( v17 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        || v17 < 0xFFFFF68000000000uLL
        || ((*(unsigned __int8 *)(a1 + 35) >> 5) & 1) == 0 )
      {
        v18 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
        MiReturnCommit(v18, 1LL);
        v3 = a2;
      }
    }
    if ( (v3 & 4) != 0 )
    {
      MiRestoreTransitionPte(a1, 2LL);
LABEL_56:
      MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48);
      return PteShadow;
    }
    if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(0x4Eu, 7uLL, (a1 + 0x58000000000LL) / 48, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      v19 = *(_BYTE *)(a1 + 35);
      if ( (v19 & 0x10) != 0 )
        *(_BYTE *)(a1 + 35) = v19 & 0xEF;
      v20 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
      MiReleasePageFileSpace(v20, *(_QWORD *)(a1 + 16), 1LL);
      goto LABEL_56;
    }
    if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
      MiInsertPageInList(a1, 8LL);
    else
      MiInsertPageInList(a1, 4LL);
  }
  return PteShadow;
}

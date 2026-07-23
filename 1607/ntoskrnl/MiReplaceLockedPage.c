/*
 * XREFs of MiReplaceLockedPage @ 0x1401EAFB8
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     MiCanPageMove @ 0x1401051DC (MiCanPageMove.c)
 *     MiTradeActivePage @ 0x140108F04 (MiTradeActivePage.c)
 *     MiSetFreshPfnFromFreeList @ 0x1401F2DD8 (MiSetFreshPfnFromFreeList.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rdi
  int *v9; // rax
  __int64 Page; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned __int8 v15; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( *(_WORD *)(a2 + 32) != 1 )
    return 0LL;
  if ( !MiCanPageMove(a2) )
    return 0LL;
  v15 = 17;
  v8 = (*(_QWORD *)(a2 + 40) >> 36) & 3LL;
  LODWORD(v8) = ((unsigned int)MiPageToNode((a2 + 0x58000000000LL) / 48, 0) << byte_140326A09) | ((a2 + 0x58000000000LL)
                                                                                                / 48) & dword_140326A38 | ((_DWORD)v8 << byte_140326A18);
  v9 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a2 + 40)) >> 8) & 0x3FF);
  Page = MiGetPage((__int64)v9, v8, 0);
  if ( Page == -1 )
    return 0LL;
  v11 = 48 * Page - 0x58000000000LL;
  v12 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, &v15);
  if ( !v12 )
  {
LABEL_8:
    MiReleaseFreshPage(v11);
    return 0LL;
  }
  v13 = MiTbFlushType(a1);
  if ( !(unsigned int)MiTradeActivePage(a2, v11, a3, v13, a4) )
  {
    MiUnlockProtoPoolPage(v12, v15);
    goto LABEL_8;
  }
  MiUnlockProtoPoolPage(v12, v15);
  *(_QWORD *)(a2 + 16) = 0LL;
  MiSetFreshPfnFromFreeList(a2);
  MiReleaseFreshPage(a2);
  return 1LL;
}

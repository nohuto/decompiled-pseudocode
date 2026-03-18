/*
 * XREFs of MiReplaceLockedPage @ 0x140007BB8
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiTradeActivePage @ 0x140007470 (MiTradeActivePage.c)
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiCanPageMove @ 0x1400712E0 (MiCanPageMove.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  unsigned int v9; // r9d
  __int64 Page; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // eax
  int active; // eax
  __int64 v15; // rdx
  char v17; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( *(_WORD *)(a2 + 32) != 1 )
    return 0LL;
  if ( !(unsigned int)MiCanPageMove(a2) )
    return 0LL;
  v17 = 17;
  MiPageToNode((a2 + 0x58000000000LL) / 48, 0LL);
  v8 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a2 + 40)) >> 8) & 0x3FF);
  Page = MiGetPage(v8, v9, 0LL);
  if ( Page == -1 )
    return 0LL;
  v11 = 48 * Page - 0x58000000000LL;
  v12 = MiLockProtoPoolPage(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL, &v17);
  if ( !v12 )
  {
LABEL_8:
    MiReleaseFreshPage(v11);
    return 0LL;
  }
  v13 = MiTbFlushType(a1);
  active = MiTradeActivePage(a2, v11, a3, v13, a4);
  LOBYTE(v15) = v17;
  if ( !active )
  {
    MiUnlockProtoPoolPage(v12, v15);
    goto LABEL_8;
  }
  MiUnlockProtoPoolPage(v12, v15);
  *(_QWORD *)(a2 + 16) = 128LL;
  MiReleaseFreshPage(a2);
  return 1LL;
}

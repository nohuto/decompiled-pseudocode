/*
 * XREFs of MiReplaceLockedPage @ 0x1400FC0AC
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 * Callees:
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x1400FCE2C (MiTradeActivePage.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiReplaceLockedPage(__int64 a1, __int64 a2, int a3, int a4)
{
  __int16 *v8; // rax
  unsigned int v9; // r9d
  __int64 Page; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  int v13; // eax
  unsigned __int8 v15; // [rsp+68h] [rbp+10h] BYREF

  if ( (*(_QWORD *)(a2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    return 0LL;
  if ( *(_WORD *)(a2 + 32) != 1 )
    return 0LL;
  if ( !MiCanPageMove(a2) )
    return 0LL;
  v15 = 17;
  MiPageToNode((a2 + 0x58000000000LL) / 48, 0);
  v8 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a2 + 40)) >> 8) & 0x3FF);
  Page = MiGetPage((__int64)v8, v9, 0);
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
  *(_QWORD *)(a2 + 16) = MiMakeDemandZeroPte(4LL);
  MiReleaseFreshPage(a2);
  return 1LL;
}

/*
 * XREFs of MiChangePageAttribute @ 0x14001CC08
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiSetPfnOwnedAndActive @ 0x14001B1C0 (MiSetPfnOwnedAndActive.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiCreateSharedZeroPages @ 0x140038C30 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x14003B270 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x14003D000 (MiGetPageChain.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400BD440 (MiBuildMdlForMappedFileFault.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1400E39D0 (MiInitializeReadInProgressPfn.c)
 *     MiFindNonPagedPoolPages @ 0x1400E4F00 (MiFindNonPagedPoolPages.c)
 *     MiInitializePfn @ 0x1400E5120 (MiInitializePfn.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140104D48 (MiPageAttributeBatchChangeNeeded.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiBuildForkPageTable @ 0x140108830 (MiBuildForkPageTable.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiAddExpansionNonPagedPool @ 0x1401436D4 (MiAddExpansionNonPagedPool.c)
 *     MiCopySinglePage @ 0x1401E4828 (MiCopySinglePage.c)
 *     MiFillCombinePage @ 0x1401F9994 (MiFillCombinePage.c)
 *     MiComputeOptimalZeroPath @ 0x1407A6288 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiAbortCombineScan @ 0x14001D390 (MiAbortCombineScan.c)
 *     MiFlushCacheForAttributeChange @ 0x14001D474 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001D918 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 */

char __fastcall MiChangePageAttribute(__int64 a1, unsigned int a2, char a3)
{
  char v3; // bl
  unsigned __int8 v6; // si
  int v7; // r14d
  unsigned int v8; // eax
  char v9; // cl
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v12[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a3;
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140327098 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( dword_140326E44 )
  {
    MiAbortCombineScan(a1);
    v3 = v3 & 0xF9 | 2;
  }
  LOBYTE(v8) = (_BYTE)a2 << 6;
  *(_BYTE *)(a1 + 34) = ((_BYTE)a2 << 6) | *(_BYTE *)(a1 + 34) & 0x3F;
  if ( v7 != 3 && (v3 & 4) == 0 )
  {
    if ( (v3 & 2) != 0
      || (v9 = *(_BYTE *)(a1 + 31) & 0xF, _InterlockedOr(v12, 0), v8 = ((_BYTE)KiTbFlushTimeStamp - v9) & 0xF, v8 <= 2)
      && ((v9 & 1) != 0 || v8 < 2) )
    {
      LOBYTE(v8) = MiFlushEntireTbDueToAttributeChange();
    }
    if ( a2 != 1 && v7 == 1 )
    {
      ++dword_140326A50;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      MiFlushCacheForAttributeChange((a1 + 0x58000000000LL) / 48, 1LL, a2);
      LOBYTE(v8) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v8) = v6;
    __writecr8(v6);
  }
  return v8;
}

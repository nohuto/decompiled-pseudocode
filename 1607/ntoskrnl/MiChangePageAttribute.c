/*
 * XREFs of MiChangePageAttribute @ 0x14001D088
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x14000155C (MiDuplicateCloneLeaf.c)
 *     MiSetPfnOwnedAndActive @ 0x14001B640 (MiSetPfnOwnedAndActive.c)
 *     MiFinalizePageAttribute @ 0x14002375C (MiFinalizePageAttribute.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiCreateSharedZeroPages @ 0x1400390B0 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x14003B6F0 (MiCompletePrivateZeroFault.c)
 *     MiGetPageChain @ 0x14003D480 (MiGetPageChain.c)
 *     MiGetPage @ 0x14003DA50 (MiGetPage.c)
 *     MiCoalesceFreePages @ 0x140067870 (MiCoalesceFreePages.c)
 *     MiBuildMdlForMappedFileFault @ 0x1400BF5B0 (MiBuildMdlForMappedFileFault.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiCopyPage @ 0x1400E3260 (MiCopyPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1400E5B30 (MiInitializeReadInProgressPfn.c)
 *     MiFindNonPagedPoolPages @ 0x1400E7060 (MiFindNonPagedPoolPages.c)
 *     MiInitializePfn @ 0x1400E7280 (MiInitializePfn.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140106FC8 (MiPageAttributeBatchChangeNeeded.c)
 *     MiZeroPhysicalPage @ 0x14010A488 (MiZeroPhysicalPage.c)
 *     MiBuildForkPageTable @ 0x14010AAB0 (MiBuildForkPageTable.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     MiAddExpansionNonPagedPool @ 0x140143164 (MiAddExpansionNonPagedPool.c)
 *     MiCopySinglePage @ 0x1401E49FC (MiCopySinglePage.c)
 *     MiFillCombinePage @ 0x1401F9B68 (MiFillCombinePage.c)
 *     MiComputeOptimalZeroPath @ 0x1407A6288 (MiComputeOptimalZeroPath.c)
 * Callees:
 *     MiAbortCombineScan @ 0x14001D810 (MiAbortCombineScan.c)
 *     MiFlushCacheForAttributeChange @ 0x14001D8F4 (MiFlushCacheForAttributeChange.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001DD98 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
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
  if ( (a3 & 1) != 0 || (struct _KTHREAD *)qword_140327058 == KeGetCurrentThread() )
    v6 = 17;
  else
    v6 = MiLockPageInline(a1);
  v7 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( dword_140326E04 )
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
      ++dword_140326A10;
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

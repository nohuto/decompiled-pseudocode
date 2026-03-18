/*
 * XREFs of MiIsAddressValid @ 0x140037540
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000CE40 (MiSetReadOnlyOnSectionView.c)
 *     MiMakeSystemAddressValid @ 0x140015DAC (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x1400251B0 (MiWaitForInPageComplete.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiIncreaseUsedPtesCount @ 0x1400374B0 (MiIncreaseUsedPtesCount.c)
 *     MiDispatchFault @ 0x1400403C0 (MiDispatchFault.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140044D50 (MiDecommitPages.c)
 *     MiTryLocateWsle @ 0x140046B90 (MiTryLocateWsle.c)
 *     MiDbgCopyMemory @ 0x1400836B8 (MiDbgCopyMemory.c)
 *     MiConvertAndFlushWsleVas @ 0x1400907F8 (MiConvertAndFlushWsleVas.c)
 *     MmIsSpecialPoolAddress @ 0x1400EB24C (MmIsSpecialPoolAddress.c)
 *     MiMakeSystemAddressValidSystemWs @ 0x14010C248 (MiMakeSystemAddressValidSystemWs.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140110334 (MiDeprioritizeVirtualAddresses.c)
 *     MiDbgWriteCheck @ 0x14012C5DC (MiDbgWriteCheck.c)
 *     MiFreeUnusedPfnPages @ 0x14013E234 (MiFreeUnusedPfnPages.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146848 (MiInsertViewOfPhysicalSection.c)
 *     IopIsAddressRangeValid @ 0x14014B4B0 (IopIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x1401C5F50 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1401C6354 (IoSetDumpRange.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401C6F5C (IopAddRunTimeTriageDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1401C74E4 (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidSectionSize @ 0x1401C7558 (IopGetMaxValidSectionSize.c)
 *     IopGetMaxValidSectionSizeDown @ 0x1401C7598 (IopGetMaxValidSectionSizeDown.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1401D4ECC (KeValidateBugCheckCallbackRecord.c)
 *     KiDumpParameterImages @ 0x1401D5490 (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x1401D56A0 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1401D5888 (KiScanBugCheckCallbackList.c)
 *     MmIsAddressValid @ 0x1401E6948 (MmIsAddressValid.c)
 *     MiRecheckVaVm @ 0x1401FA2EC (MiRecheckVaVm.c)
 *     ViFreeTrackedPool @ 0x140702440 (ViFreeTrackedPool.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 */

bool __fastcall MiIsAddressValid(__int64 a1)
{
  int v1; // r9d
  char v2; // al
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r11
  unsigned __int64 v6; // [rsp+20h] [rbp-38h]
  unsigned __int64 v7; // [rsp+28h] [rbp-30h]
  unsigned __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+38h] [rbp-20h]

  if ( a1 >> 47 == -1 || a1 >> 47 == 0 )
  {
    v6 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v1 = 4;
    v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      v2 = MI_READ_PTE_LOCK_FREE(*(&v6 + (unsigned int)(v1 - 1)));
      if ( (v2 & 1) == 0 )
        break;
      if ( v2 < 0 )
        return v3 < v4 || v3 > 0xFFFFF6FFFFFFFFFFuLL;
      if ( !v1 )
        return 1;
    }
  }
  return 0;
}

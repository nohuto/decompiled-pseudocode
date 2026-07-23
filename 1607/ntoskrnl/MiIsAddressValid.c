/*
 * XREFs of MiIsAddressValid @ 0x1400370C0
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000C9C0 (MiSetReadOnlyOnSectionView.c)
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiTryLocateWsle @ 0x140046710 (MiTryLocateWsle.c)
 *     MiDbgCopyMemory @ 0x140084338 (MiDbgCopyMemory.c)
 *     MiConvertAndFlushWsleVas @ 0x14008FF58 (MiConvertAndFlushWsleVas.c)
 *     MmIsSpecialPoolAddress @ 0x1400E90BC (MmIsSpecialPoolAddress.c)
 *     MiMakeSystemAddressValidSystemWs @ 0x140109FC8 (MiMakeSystemAddressValidSystemWs.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140110898 (MiDeprioritizeVirtualAddresses.c)
 *     MiDbgWriteCheck @ 0x14012CB4C (MiDbgWriteCheck.c)
 *     MiFreeUnusedPfnPages @ 0x14013E7A4 (MiFreeUnusedPfnPages.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146DB8 (MiInsertViewOfPhysicalSection.c)
 *     IopIsAddressRangeValid @ 0x14014BA20 (IopIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x1401C5DF0 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1401C61F4 (IoSetDumpRange.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401C6DFC (IopAddRunTimeTriageDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1401C7384 (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidSectionSize @ 0x1401C73F8 (IopGetMaxValidSectionSize.c)
 *     IopGetMaxValidSectionSizeDown @ 0x1401C7438 (IopGetMaxValidSectionSizeDown.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1401D4CF8 (KeValidateBugCheckCallbackRecord.c)
 *     KiDumpParameterImages @ 0x1401D52BC (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x1401D54CC (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1401D56B4 (KiScanBugCheckCallbackList.c)
 *     MmIsAddressValid @ 0x1401E6774 (MmIsAddressValid.c)
 *     MiRecheckVaVm @ 0x1401FA118 (MiRecheckVaVm.c)
 *     ViFreeTrackedPool @ 0x140702470 (ViFreeTrackedPool.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
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

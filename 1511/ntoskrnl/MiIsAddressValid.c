/*
 * XREFs of MiIsAddressValid @ 0x1400795B0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiTryLocateWsle @ 0x140058C40 (MiTryLocateWsle.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MmIsSpecialPoolAddress @ 0x140079508 (MmIsSpecialPoolAddress.c)
 *     MiLockPagedAddress @ 0x14009A36C (MiLockPagedAddress.c)
 *     MiConvertAndFlushWsleVas @ 0x1400D05B4 (MiConvertAndFlushWsleVas.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140103E00 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiRecheckVaVm @ 0x140129974 (MiRecheckVaVm.c)
 *     MiFreeUnusedPfnPages @ 0x1401322A8 (MiFreeUnusedPfnPages.c)
 *     IopIsAddressRangeValid @ 0x1401418A4 (IopIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x1401B819C (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1401B8568 (IoSetDumpRange.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401B9170 (IopAddRunTimeTriageDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1401B96FC (IopGetMaxValidMemorySize.c)
 *     sub_1401B9758 @ 0x1401B9758 (sub_1401B9758.c)
 *     KeCapturePersistentThreadState @ 0x1401BA414 (KeCapturePersistentThreadState.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1401C5D88 (KeValidateBugCheckCallbackRecord.c)
 *     KiDumpParameterImages @ 0x1401C633C (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x1401C6550 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x1401C6728 (KiScanBugCheckCallbackList.c)
 *     MiDeprioritizeVARange @ 0x1401D257C (MiDeprioritizeVARange.c)
 *     MmIsAddressValid @ 0x1401D5648 (MmIsAddressValid.c)
 *     MiDbgCopyMemory @ 0x1401DD808 (MiDbgCopyMemory.c)
 *     MiDbgWriteCheck @ 0x1401DE0F4 (MiDbgWriteCheck.c)
 *     ViFreeTrackedPool @ 0x1406B65E0 (ViFreeTrackedPool.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

bool __fastcall MiIsAddressValid(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v4; // [rsp+0h] [rbp-38h]
  unsigned __int64 v5; // [rsp+8h] [rbp-30h]
  unsigned __int64 v6; // [rsp+10h] [rbp-28h]
  __int64 v7; // [rsp+18h] [rbp-20h]

  if ( a1 >> 47 == -1 || a1 >> 47 == 0 )
  {
    v4 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    LODWORD(v1) = 4;
    v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      v1 = (unsigned int)(v1 - 1);
      v2 = *(_QWORD *)*(&v4 + v1);
      if ( (v2 & 1) == 0 )
        break;
      if ( (unsigned int)v1 <= 1 && (v2 & 0x80u) != 0LL )
        return (_DWORD)v1 != 0;
      if ( !(_DWORD)v1 )
        return 1;
    }
  }
  return 0;
}

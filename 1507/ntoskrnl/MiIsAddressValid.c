/*
 * XREFs of MiIsAddressValid @ 0x14005E8E0
 * Callers:
 *     MiMakeSystemAddressValidSystemWs @ 0x1400052D8 (MiMakeSystemAddressValidSystemWs.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MmIsSpecialPoolAddress @ 0x14005ED6C (MmIsSpecialPoolAddress.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiTryLocateWsle @ 0x140095390 (MiTryLocateWsle.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiConvertAndFlushWsleVas @ 0x1401076E8 (MiConvertAndFlushWsleVas.c)
 *     MiDeprioritizeVARange @ 0x140126B74 (MiDeprioritizeVARange.c)
 *     IopIsAddressRangeValid @ 0x14016F880 (IopIsAddressRangeValid.c)
 *     IoFreeDumpRange @ 0x1401F3568 (IoFreeDumpRange.c)
 *     IoSetDumpRange @ 0x1401F3904 (IoSetDumpRange.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401F4458 (IopAddRunTimeTriageDataBlocks.c)
 *     IopGetMaxValidMemorySize @ 0x1401F49E4 (IopGetMaxValidMemorySize.c)
 *     sub_1401F4A40 @ 0x1401F4A40 (sub_1401F4A40.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1402028D0 (KeValidateBugCheckCallbackRecord.c)
 *     KiDumpParameterImages @ 0x140202E84 (KiDumpParameterImages.c)
 *     KiPcToFileHeader @ 0x140203098 (KiPcToFileHeader.c)
 *     KiScanBugCheckCallbackList @ 0x140203270 (KiScanBugCheckCallbackList.c)
 *     MmIsAddressValid @ 0x1402175B0 (MmIsAddressValid.c)
 *     MiDbgCopyMemory @ 0x140222AD0 (MiDbgCopyMemory.c)
 *     MiDbgWriteCheck @ 0x1402236C0 (MiDbgWriteCheck.c)
 *     MiCrcStillIntact @ 0x140229DF8 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     ViFreeTrackedPool @ 0x1407368D0 (ViFreeTrackedPool.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
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

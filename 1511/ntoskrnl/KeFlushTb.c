/*
 * XREFs of KeFlushTb @ 0x1400078BC
 * Callers:
 *     MiAttachSession @ 0x140007380 (MiAttachSession.c)
 *     MiValidateInPage @ 0x1400390F0 (MiValidateInPage.c)
 *     MiInsertCachedPte @ 0x140068430 (MiInsertCachedPte.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiChangePageAttributeBatch @ 0x1400A9630 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     MiReplaceUltraBit @ 0x1400E4CDC (MiReplaceUltraBit.c)
 *     MiCombiningInProgress @ 0x140127954 (MiCombiningInProgress.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140141B8C (MiGetWsAndMakePageTablesNx.c)
 *     MmProtectSystemCacheView @ 0x1401D57E4 (MmProtectSystemCacheView.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 *     NtFreeUserPhysicalPages @ 0x140627AE0 (NtFreeUserPhysicalPages.c)
 *     MiSwitchToPfns @ 0x140746514 (MiSwitchToPfns.c)
 *     MiInitializeTbFlushing @ 0x14074C190 (MiInitializeTbFlushing.c)
 *     MiInitializeCacheFlushing @ 0x14074DBEC (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiFlushViaHypervisor @ 0x1400079D0 (KiFlushViaHypervisor.c)
 *     KiIsSecureProcessFlush @ 0x1400079EC (KiIsSecureProcessFlush.c)
 *     KxFlushEntireTb @ 0x140007A1C (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x14007C310 (KxFlushNonGlobalTb.c)
 *     KiFlushAddressSpaceTb @ 0x1401C7210 (KiFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x1401C7288 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x14020C224 (VmFlushTb.c)
 *     ExFlushTb @ 0x140214D10 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushTb(unsigned int a1, unsigned int a2)
{
  char IsSecureProcessFlush; // si
  int v5; // r8d
  int v6; // r9d
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  char v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  IsSecureProcessFlush = KiIsSecureProcessFlush(0LL, a1);
  if ( (unsigned int)KiFlushViaHypervisor() )
  {
    KiPrepareFlushParameters(a1, &v10, &v9);
    v5 = 1;
    LOBYTE(v6) = IsSecureProcessFlush;
    LOBYTE(v5) = v9;
    result = KiFlushAddressSpaceTb(v10, a1 - 1 > 1, v5, v6, a1 - 1 > 1);
    goto LABEL_7;
  }
  if ( KiKvaShadow )
  {
    if ( a1 && a1 != 2 )
    {
LABEL_6:
      result = KxFlushEntireTb(a2);
      goto LABEL_7;
    }
  }
  else if ( !a1 || (int)a1 > 2 )
  {
    goto LABEL_6;
  }
  result = KxFlushNonGlobalTb(a2);
LABEL_7:
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(0LL, 0LL, a1);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

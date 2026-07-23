/*
 * XREFs of KeFlushTb @ 0x14001D96C
 * Callers:
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14001D918 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiInsertCachedPte @ 0x140052170 (MiInsertCachedPte.c)
 *     MiAttachSession @ 0x1400A37AC (MiAttachSession.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiGetUltraMapping @ 0x14013FD54 (MiGetUltraMapping.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14014BBB8 (MiGetWsAndMakePageTablesNx.c)
 *     NtFreeUserPhysicalPages @ 0x14065D304 (NtFreeUserPhysicalPages.c)
 *     MiSwitchToPfns @ 0x1407965E0 (MiSwitchToPfns.c)
 *     MiInitializeTbFlushing @ 0x1407A6B10 (MiInitializeTbFlushing.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x14001DA4C (KiIsSecureProcessFlush.c)
 *     KxFlushNonGlobalTb @ 0x140030810 (KxFlushNonGlobalTb.c)
 *     KiFlushViaHypervisor @ 0x1400DEEC0 (KiFlushViaHypervisor.c)
 *     KxFlushEntireTb @ 0x14013D56C (KxFlushEntireTb.c)
 *     VslFlushSecureAddressSpace @ 0x1401C28B8 (VslFlushSecureAddressSpace.c)
 *     KiFlushAddressSpaceTb @ 0x1401D6000 (KiFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x1401D6060 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x140223B0C (VmFlushTb.c)
 *     ExFlushTb @ 0x14022E938 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushTb(unsigned int a1, unsigned int a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  char v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  if ( (unsigned int)KiFlushViaHypervisor() )
  {
    KiPrepareFlushParameters(a1, &v9, &v8, v4);
    LOBYTE(v5) = v8;
    KiFlushAddressSpaceTb(v9, 1LL, v5, a1 - 1 > 1);
    goto LABEL_7;
  }
  if ( KiKvaShadow )
  {
    if ( a1 && a1 != 2 )
    {
LABEL_6:
      KxFlushEntireTb(a2);
      goto LABEL_7;
    }
  }
  else if ( !a1 || (int)a1 > 2 )
  {
    goto LABEL_6;
  }
  KxFlushNonGlobalTb(a2);
LABEL_7:
  result = KiIsSecureProcessFlush(0LL, a1);
  if ( (_BYTE)result )
    result = VslFlushSecureAddressSpace();
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

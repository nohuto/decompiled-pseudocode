/*
 * XREFs of KeFlushMultipleRangeTb @ 0x1401C70D4
 * Callers:
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiObtainSystemCacheView @ 0x1400B1590 (MiObtainSystemCacheView.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     MmProtectSystemCacheView @ 0x1401D57E4 (MmProtectSystemCacheView.c)
 * Callees:
 *     KiFlushViaHypervisor @ 0x1400079D0 (KiFlushViaHypervisor.c)
 *     KiIsSecureProcessFlush @ 0x1400079EC (KiIsSecureProcessFlush.c)
 *     KxFlushMultipleTb @ 0x140102D90 (KxFlushMultipleTb.c)
 *     KiPrepareFlushParameters @ 0x1401C7288 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x14020C224 (VmFlushTb.c)
 *     ExFlushTb @ 0x140214D10 (ExFlushTb.c)
 *     HvlFlushRangeListTb @ 0x1402214A4 (HvlFlushRangeListTb.c)
 */

__int64 __fastcall KeFlushMultipleRangeTb(unsigned int a1, __int64 a2, unsigned int a3, int a4)
{
  bool IsSecureProcessFlush; // r14
  __int64 result; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  volatile _KAFFINITY_EX *p_ActiveProcessors; // rdx
  unsigned __int8 CurrentIrql; // bl
  _BYTE v14[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h] BYREF

  IsSecureProcessFlush = KiIsSecureProcessFlush(0LL, a3);
  if ( IsSecureProcessFlush || KiFlushViaHypervisor() )
  {
    KiPrepareFlushParameters(a3, &v15, v14);
    if ( a4 )
      p_ActiveProcessors = 0LL;
    else
      p_ActiveProcessors = &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
    LOBYTE(v10) = v14[0];
    LOBYTE(v11) = IsSecureProcessFlush;
    result = HvlFlushRangeListTb(v15, p_ActiveProcessors, v10, v11, a1, a2);
  }
  else
  {
    result = KxFlushMultipleTb(a1, a2, a3, a4);
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb(a1, a2);
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(a1, a2, a3);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

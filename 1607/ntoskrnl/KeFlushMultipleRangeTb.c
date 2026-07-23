/*
 * XREFs of KeFlushMultipleRangeTb @ 0x1400B3B64
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400185A0 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1400196F0 (MiObtainSystemCacheView.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x14001DA4C (KiIsSecureProcessFlush.c)
 *     KxFlushMultipleTb @ 0x1400B3BF0 (KxFlushMultipleTb.c)
 *     KiFlushViaHypervisor @ 0x1400DEEC0 (KiFlushViaHypervisor.c)
 *     HvlFlushRangeListTb @ 0x1401C13D4 (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x1401D6060 (KiPrepareFlushParameters.c)
 *     VmFlushTb @ 0x140223B0C (VmFlushTb.c)
 *     ExFlushTb @ 0x14022E938 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushMultipleRangeTb(unsigned int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // r9
  bool IsSecureProcessFlush; // r14
  __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  volatile _KAFFINITY_EX *p_ActiveProcessors; // rdx
  unsigned __int8 CurrentIrql; // bl
  _BYTE v15[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF

  IsSecureProcessFlush = KiIsSecureProcessFlush(0LL, a3);
  if ( IsSecureProcessFlush || (unsigned int)KiFlushViaHypervisor() )
  {
    KiPrepareFlushParameters(a3, &v16, v15, v8);
    if ( a4 )
      p_ActiveProcessors = 0LL;
    else
      p_ActiveProcessors = &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
    LOBYTE(v11) = v15[0];
    LOBYTE(v12) = IsSecureProcessFlush;
    result = HvlFlushRangeListTb(v16, p_ActiveProcessors, v11, v12, a1, a2);
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

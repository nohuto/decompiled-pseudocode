/*
 * XREFs of PfSnLogPageFault @ 0x1400A7010
 * Callers:
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400A5070 (MiMakeSystemCacheRangeValid.c)
 *     MiLogRelocationRva @ 0x1403C71B0 (MiLogRelocationRva.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     PfSnCheckLoggingForThread @ 0x140077A24 (PfSnCheckLoggingForThread.c)
 *     PfSnLogPageFaultCommon @ 0x140079800 (PfSnLogPageFaultCommon.c)
 *     PfSnReferenceProcessTrace @ 0x1400FAFB0 (PfSnReferenceProcessTrace.c)
 */

void __fastcall PfSnLogPageFault(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx

  if ( (a3 & 4) == 0 || !*(_QWORD *)(a1 + 32) )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
    v8 = (struct _EX_RUNDOWN_REF *)v7;
    if ( v7 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread((__int64)CurrentThread, v7, a3) )
        PfSnLogPageFaultCommon((__int64)v8, a1, *(_QWORD *)(a1 + 24), a2, a3);
      ExReleaseRundownProtection_0(v8 + 45);
    }
  }
}

/*
 * XREFs of PfSnLogPageFault @ 0x1400FBBA0
 * Callers:
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiLogRelocationRva @ 0x140508C50 (MiLogRelocationRva.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     PfSnCheckLoggingForThread @ 0x1400E9B50 (PfSnCheckLoggingForThread.c)
 *     PfSnLogPageFaultCommon @ 0x1400ED3E0 (PfSnLogPageFaultCommon.c)
 *     PfSnReferenceProcessTrace @ 0x1400EE760 (PfSnReferenceProcessTrace.c)
 */

void __fastcall PfSnLogPageFault(_QWORD *a1, unsigned __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx

  if ( (a3 & 4) == 0 || !a1[4] )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
    v8 = v7;
    if ( v7 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread((__int64)CurrentThread, (__int64)v7, a3) )
        PfSnLogPageFaultCommon((__int64)v8, a1, a1[3], a2, a3);
      ExReleaseRundownProtection(v8 + 45);
    }
  }
}

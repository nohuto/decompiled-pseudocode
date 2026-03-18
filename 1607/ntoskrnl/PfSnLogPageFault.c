/*
 * XREFs of PfSnLogPageFault @ 0x1400FDE20
 * Callers:
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MiLogRelocationRva @ 0x140525BF0 (MiLogRelocationRva.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     PfSnCheckLoggingForThread @ 0x1400EBCE0 (PfSnCheckLoggingForThread.c)
 *     PfSnLogPageFaultCommon @ 0x1400EF560 (PfSnLogPageFaultCommon.c)
 *     PfSnReferenceProcessTrace @ 0x1400F0910 (PfSnReferenceProcessTrace.c)
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

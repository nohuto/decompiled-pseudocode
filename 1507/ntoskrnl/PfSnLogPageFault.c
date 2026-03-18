/*
 * XREFs of PfSnLogPageFault @ 0x14001A174
 * Callers:
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiLogRelocationRva @ 0x1404431EC (MiLogRelocationRva.c)
 * Callees:
 *     PfSnLogPageFaultCommon @ 0x14001A220 (PfSnLogPageFaultCommon.c)
 *     PfSnReferenceProcessTrace @ 0x14001A540 (PfSnReferenceProcessTrace.c)
 *     PfSnCheckLoggingForThread @ 0x14001A72C (PfSnCheckLoggingForThread.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 */

void __fastcall PfSnLogPageFault(__int64 a1, int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rdi
  unsigned __int64 v9; // rtt

  if ( (a3 & 4) == 0 || !*(_QWORD *)(a1 + 32) )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
    v8 = (struct _EX_RUNDOWN_REF *)v7;
    if ( v7 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v7, a3) )
        PfSnLogPageFaultCommon((_DWORD)v8, a1, *(_QWORD *)(a1 + 24), a2, a3);
      _m_prefetchw(&v8[45]);
      v9 = v8[45].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&v8[45], v9 - 2, v9) )
        ExfReleaseRundownProtection(v8 + 45);
    }
  }
}

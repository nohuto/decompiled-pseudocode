/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x1401D7670
 * Callers:
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x1400F00F4 (KiGetThreadCpuSetMaskPointer.c)
 *     KiValidateCpuSetMasks @ 0x1401116FC (KiValidateCpuSetMasks.c)
 *     KiUpdateThreadCpuSets @ 0x1401D7938 (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x1401D79E0 (KiWriteCpuSetMasks.c)
 *     KiAcquireProcessLockShared @ 0x1401DAD7C (KiAcquireProcessLockShared.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 ThreadCpuSetMaskPointer; // r14
  __int64 updated; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  int v14; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-24h] BYREF
  _QWORD v16[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int8 v17; // [rsp+68h] [rbp+20h] BYREF

  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 544);
    v16[0] = 0LL;
    ThreadCpuSetMaskPointer = KiGetThreadCpuSetMaskPointer(a1, &v15);
    KiAcquireProcessLockShared(v7, &v17);
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v14);
      while ( *(_QWORD *)(a1 + 64) );
    }
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, v15, a3, a2);
    updated = KiUpdateThreadCpuSets(a1, v16);
    *(_QWORD *)(a1 + 64) = 0LL;
    v10 = updated;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    if ( v10 )
    {
      LODWORD(v11) = KeGetPcr()->Prcb.Number;
      v12 = *(unsigned int *)(v10 + 36);
      if ( (_DWORD)v11 != (_DWORD)v12 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(v11) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v12, v11);
      }
    }
    KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), (__int64)v16, v17);
    return 0LL;
  }
  return result;
}

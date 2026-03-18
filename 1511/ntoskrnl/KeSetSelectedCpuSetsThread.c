/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x1401C8784
 * Callers:
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x140028764 (KiAcquireProcessLockShared.c)
 *     KiGetThreadCpuSetMaskPointer @ 0x14002D674 (KiGetThreadCpuSetMaskPointer.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiValidateCpuSetMasks @ 0x140107034 (KiValidateCpuSetMasks.c)
 *     KiUpdateThreadCpuSets @ 0x1401C8A4C (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x1401C8AF4 (KiWriteCpuSetMasks.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  __int64 v7; // rbp
  __int64 ThreadCpuSetMaskPointer; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 updated; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  int v16; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+24h] [rbp-24h] BYREF
  _QWORD v18[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned __int8 v19; // [rsp+68h] [rbp+20h] BYREF

  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 544);
    v18[0] = 0LL;
    ThreadCpuSetMaskPointer = KiGetThreadCpuSetMaskPointer(a1, &v17);
    KiAcquireProcessLockShared(v7, &v19);
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v16, v9, v10);
      while ( *(_QWORD *)(a1 + 64) );
    }
    KiWriteCpuSetMasks(ThreadCpuSetMaskPointer, v17, a3, a2);
    updated = KiUpdateThreadCpuSets(a1, v18);
    *(_QWORD *)(a1 + 64) = 0LL;
    v12 = updated;
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    if ( v12 )
    {
      LODWORD(v13) = KeGetPcr()->Prcb.Number;
      v14 = *(unsigned int *)(v12 + 36);
      if ( (_DWORD)v13 != (_DWORD)v14 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LOBYTE(v13) = 2;
        ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(v14, v13);
      }
    }
    KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), (__int64)v18, v19);
    return 0LL;
  }
  return result;
}

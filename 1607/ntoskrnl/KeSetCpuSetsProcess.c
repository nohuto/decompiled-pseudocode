/*
 * XREFs of KeSetCpuSetsProcess @ 0x1401D754C
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiAcquireProcessLockExclusive @ 0x1400F0DA0 (KiAcquireProcessLockExclusive.c)
 *     KiValidateCpuSetMasks @ 0x1401116FC (KiValidateCpuSetMasks.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x1401D78F0 (KiGetProcessCpuSetMaskPointer.c)
 *     KiUpdateThreadCpuSets @ 0x1401D7938 (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x1401D79E0 (KiWriteCpuSetMasks.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 ProcessCpuSetMaskPointer; // rbx
  __int64 v9; // rcx
  _QWORD *i; // rdi
  volatile signed __int32 *v11; // rbx
  __int64 updated; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 v16[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+24h] [rbp-24h] BYREF
  int v18; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v19[3]; // [rsp+30h] [rbp-18h] BYREF

  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &v17);
    KiAcquireProcessLockExclusive(v9, v16);
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v17, a3, a2);
    v19[0] = 0LL;
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      v18 = 0;
      v11 = (volatile signed __int32 *)(i - 95);
      while ( _interlockedbittestandset64(v11 + 16, 0LL) )
      {
        do
          KeYieldProcessorEx(&v18);
        while ( *((_QWORD *)v11 + 8) );
      }
      updated = KiUpdateThreadCpuSets(i - 95, v19);
      *((_QWORD *)v11 + 8) = 0LL;
      if ( updated )
      {
        LODWORD(v13) = KeGetPcr()->Prcb.Number;
        v14 = *(unsigned int *)(updated + 36);
        if ( (_DWORD)v13 != (_DWORD)v14 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          LOBYTE(v13) = 2;
          ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
          HalSendSoftwareInterrupt(v14, v13);
        }
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), (__int64)v19, v16[0]);
    return 0LL;
  }
  return result;
}

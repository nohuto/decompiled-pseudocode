/*
 * XREFs of KeSetCpuSetsProcess @ 0x1401C8660
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x14002AB2C (KiAcquireProcessLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiValidateCpuSetMasks @ 0x140107034 (KiValidateCpuSetMasks.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x1401C8A04 (KiGetProcessCpuSetMaskPointer.c)
 *     KiUpdateThreadCpuSets @ 0x1401C8A4C (KiUpdateThreadCpuSets.c)
 *     KiWriteCpuSetMasks @ 0x1401C8AF4 (KiWriteCpuSetMasks.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 ProcessCpuSetMaskPointer; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD *i; // rdi
  volatile signed __int32 *v13; // rbx
  __int64 updated; // rax
  __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int8 v17[4]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-24h] BYREF
  int v19; // [rsp+28h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF

  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    ProcessCpuSetMaskPointer = KiGetProcessCpuSetMaskPointer(a1, v7, &v18);
    KiAcquireProcessLockExclusive(v9, v17);
    KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v18, a3, a2);
    v20[0] = 0LL;
    for ( i = *(_QWORD **)(a1 + 48); i != (_QWORD *)(a1 + 48); i = (_QWORD *)*i )
    {
      v19 = 0;
      v13 = (volatile signed __int32 *)(i - 95);
      while ( _interlockedbittestandset64(v13 + 16, 0LL) )
      {
        do
          KeYieldProcessorEx(&v19, v10, v11);
        while ( *((_QWORD *)v13 + 8) );
      }
      updated = KiUpdateThreadCpuSets(i - 95, v20);
      *((_QWORD *)v13 + 8) = 0LL;
      if ( updated )
      {
        LODWORD(v10) = KeGetPcr()->Prcb.Number;
        v15 = *(unsigned int *)(updated + 36);
        if ( (_DWORD)v10 != (_DWORD)v15 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          LOBYTE(v10) = 2;
          ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
          HalSendSoftwareInterrupt(v15, v10);
        }
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), (__int64)v20, v17[0]);
    return 0LL;
  }
  return result;
}

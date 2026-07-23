/*
 * XREFs of MiQueryAddressSpan @ 0x140042840
 * Callers:
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiQueryAddressState @ 0x140042B80 (MiQueryAddressState.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     EtwTraceShouldYieldProcessor @ 0x140225FE8 (EtwTraceShouldYieldProcessor.c)
 */

unsigned __int64 __fastcall MiQueryAddressSpan(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  int v6; // r15d
  _KPROCESS *Process; // r13
  __int64 v8; // r12
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  KIRQL v11; // bp
  __int64 v12; // rbx
  unsigned __int64 v13; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // ebp
  volatile int DpcRequestSummary; // r9d
  unsigned int DpcTimeCount; // edi
  int v18; // edx
  unsigned int v19; // ebx
  _KTHREAD *NextThread; // rax
  LONG *v21; // rax
  LONG *v22; // rbx
  LONG *v23; // rax
  int v25; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-60h] BYREF
  __int64 v27; // [rsp+60h] [rbp-58h] BYREF
  _KPROCESS *v28; // [rsp+68h] [rbp-50h]
  KIRQL v30; // [rsp+C8h] [rbp+10h]
  int v31; // [rsp+D0h] [rbp+18h] BYREF
  char v32; // [rsp+D8h] [rbp+20h] BYREF

  v3 = 0;
  v27 = 0LL;
  v6 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v28 = Process;
  v8 = (__int64)&Process[1].IdealNode[12];
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v10 = ExAcquireSpinLockShared(SharedVm);
  v11 = v10;
  v30 = v10;
  if ( SharedVm[1] )
    _InterlockedExchange(SharedVm + 1, 0);
  v12 = a1;
  *(_DWORD *)(a1 + 32) = MiQueryAddressState(a2, v10, a3, Process, 0, &v27, &v31, &v26, &v32);
  if ( v31 )
    *(_DWORD *)(a1 + 36) = MmProtectToValue[v31];
  else
    *(_DWORD *)(a1 + 36) = 0;
  v13 = v26;
  if ( v26 >> 12 <= (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) )
  {
    while ( 1 )
    {
      if ( (unsigned int)MiQueryAddressState(v26, v11, a3, v28, 0, &v27, &v25, &v26, &v32) != *(_DWORD *)(v12 + 32)
        || v25 != v31 )
      {
        v6 = 0;
        goto LABEL_39;
      }
      v13 = v26;
      if ( (++v3 & 0x1F) != 0 || !(unsigned int)MiWorkingSetIsContended(v8) )
        break;
LABEL_32:
      v21 = MiGetSharedVm(v8);
      ExReleaseSpinLockShared(v21, v11);
      v22 = MiGetSharedVm(v8);
      v11 = ExAcquireSpinLockShared(v22);
      v30 = v11;
      if ( v22[1] )
        _InterlockedExchange(v22 + 1, 0);
LABEL_34:
      v12 = a1;
LABEL_35:
      if ( v26 >> 12 > (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) )
        goto LABEL_39;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
    DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
    DpcTimeCount = CurrentPrcb->DpcTimeCount;
    if ( (DpcRequestSummary & 1) != 0 )
    {
      v18 = 1;
      if ( DpcTimeCount > 7 )
      {
        if ( CurrentPrcb->QuantumEnd )
        {
          v19 = 1;
          goto LABEL_29;
        }
LABEL_24:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v19 = 5;
          goto LABEL_29;
        }
        if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
        {
          v19 = 6;
          goto LABEL_29;
        }
LABEL_28:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        KiResetGlobalDpcWatchdogProfiler();
        _enable();
        v19 = 0;
LABEL_29:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v19, DpcWatchdogCount, DpcTimeCount);
        v11 = v30;
        if ( !v19 )
          goto LABEL_34;
        goto LABEL_32;
      }
    }
    else
    {
      v18 = 0;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v19 = 2;
        goto LABEL_29;
      }
      if ( CurrentPrcb->QuantumEnd )
      {
        v19 = 3;
        goto LABEL_29;
      }
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v19 = 4;
        goto LABEL_29;
      }
    }
    if ( DpcWatchdogCount <= 7 )
    {
      v11 = v30;
      goto LABEL_35;
    }
    if ( !v18 )
      goto LABEL_28;
    goto LABEL_24;
  }
LABEL_39:
  v23 = MiGetSharedVm(v8);
  ExReleaseSpinLockSharedFromDpcLevel(v23);
  __writecr8(v11);
  if ( v6 == 1 )
    return ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) + 4096;
  else
    return v13;
}

/*
 * XREFs of MiQueryAddressSpan @ 0x14005E760
 * Callers:
 *     MmQueryVirtualMemory @ 0x140418260 (MmQueryVirtualMemory.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     EtwTraceShouldYieldProcessor @ 0x14020E308 (EtwTraceShouldYieldProcessor.c)
 */

unsigned __int64 __fastcall MiQueryAddressSpan(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edi
  _KPROCESS *Process; // r13
  int v8; // r12d
  __int64 v9; // r14
  int v10; // eax
  __int64 v11; // rbx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rbp
  struct _KPRCB *CurrentPrcb; // rax
  __int64 DpcWatchdogCount; // r9
  unsigned int DpcTimeCount; // r11d
  volatile int DpcRequestSummary; // edx
  int v18; // r10d
  _KTHREAD *NextThread; // rcx
  volatile LONG *v21; // rbx
  unsigned int v22; // ebx
  __int64 v23; // [rsp+40h] [rbp-58h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+48h] [rbp-50h]
  unsigned int v25; // [rsp+A0h] [rbp+8h] BYREF
  char v26; // [rsp+A8h] [rbp+10h] BYREF
  int v27; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v28; // [rsp+B8h] [rbp+20h] BYREF

  v23 = 0LL;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = 1;
  SpinLock = (PEX_SPIN_LOCK)&Process[1].IdealNode[12];
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  v10 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _KPROCESS *, __int64 *, unsigned int *, unsigned __int64 *, char *))MiQueryAddressState)(
          a2,
          v9,
          a3,
          Process,
          &v23,
          &v25,
          &v28,
          &v26);
  v11 = v25;
  *(_DWORD *)(a1 + 32) = v10;
  if ( (_DWORD)v11 )
    *(_DWORD *)(a1 + 36) = MmProtectToValue[v11];
  else
    *(_DWORD *)(a1 + 36) = 0;
  v12 = v28;
  v13 = v28;
  if ( v28 >> 12 > (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) )
    goto LABEL_15;
  while ( (unsigned int)((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _KPROCESS *, __int64 *, int *, unsigned __int64 *, char *))MiQueryAddressState)(
                          v12,
                          (unsigned __int8)v9,
                          a3,
                          Process,
                          &v23,
                          &v27,
                          &v28,
                          &v26) == *(_DWORD *)(a1 + 32)
       && v27 == (_DWORD)v11 )
  {
    v13 = v28;
    if ( (++v6 & 0x1F) == 0 )
    {
      v21 = (volatile LONG *)&Process[1].IdealNode[12];
      if ( (*(_DWORD *)&Process[1].IdealNode[12] & 0x40000000) != 0 )
        goto LABEL_26;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    DpcWatchdogCount = (unsigned int)CurrentPrcb->DpcWatchdogCount;
    DpcTimeCount = CurrentPrcb->DpcTimeCount;
    DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
    if ( (DpcRequestSummary & 1) == 0 )
    {
      v18 = 0;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v22 = 2;
        goto LABEL_22;
      }
      if ( CurrentPrcb->QuantumEnd )
      {
        v22 = 3;
        goto LABEL_22;
      }
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v22 = 4;
        goto LABEL_22;
      }
LABEL_11:
      if ( (unsigned int)DpcWatchdogCount <= 7 )
        goto LABEL_12;
      if ( !v18 )
      {
LABEL_31:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        _enable();
        v22 = 0;
        goto LABEL_22;
      }
      goto LABEL_35;
    }
    v18 = 1;
    if ( DpcTimeCount <= 7 )
      goto LABEL_11;
    if ( CurrentPrcb->QuantumEnd )
    {
      v22 = 1;
      goto LABEL_22;
    }
LABEL_35:
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v22 = 5;
    }
    else
    {
      if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
        goto LABEL_31;
      v22 = 6;
    }
LABEL_22:
    if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      EtwTraceShouldYieldProcessor(v22, (unsigned int)DpcWatchdogCount, DpcTimeCount, DpcWatchdogCount);
    if ( v22 )
    {
      v21 = (volatile LONG *)&Process[1].IdealNode[12];
LABEL_26:
      ExReleaseSpinLockShared(v21, v9);
      LOBYTE(v9) = ExAcquireSpinLockShared(v21);
    }
LABEL_12:
    v12 = v28;
    if ( v28 >> 12 > (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) )
      goto LABEL_15;
    LODWORD(v11) = v25;
  }
  v8 = 0;
LABEL_15:
  ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
  __writecr8((unsigned __int8)v9);
  if ( v8 == 1 )
    return ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) + 4096;
  else
    return v13;
}

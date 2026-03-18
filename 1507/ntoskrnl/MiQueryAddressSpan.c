/*
 * XREFs of MiQueryAddressSpan @ 0x14003AE40
 * Callers:
 *     MmQueryVirtualMemory @ 0x1404B4DD0 (MmQueryVirtualMemory.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     EtwTraceShouldYieldProcessor @ 0x14025D5E8 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiQueryAddressSpan(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  int v7; // r14d
  _KPROCESS *Process; // r12
  unsigned __int16 *v9; // rdi
  unsigned __int8 CurrentIrql; // si
  signed __int32 v11; // ett
  int v12; // eax
  __int64 v13; // rbx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v17; // ebx
  unsigned int DpcWatchdogCount; // r11d
  volatile int DpcRequestSummary; // r9d
  unsigned int DpcTimeCount; // r10d
  int v21; // edx
  _KTHREAD *NextThread; // rax
  unsigned __int8 v23; // bl
  signed __int32 v24; // ett
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  _KPROCESS *v27; // [rsp+48h] [rbp-50h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v29; // [rsp+A0h] [rbp+8h] BYREF
  char v30; // [rsp+A8h] [rbp+10h] BYREF
  int v31; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v32; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v26 = 0LL;
  v7 = 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v27 = Process;
  v9 = &Process[1].IdealNode[8];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9);
  }
  else
  {
    _m_prefetchw(v9);
    v11 = *(_DWORD *)v9 & 0x7FFFFFFF;
    if ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)v9, v11 + 1, v11) )
      ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)v9);
  }
  v12 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _KPROCESS *, __int64 *, unsigned int *, unsigned __int64 *, char *))MiQueryAddressState)(
          a2,
          CurrentIrql,
          a3,
          Process,
          &v26,
          &v29,
          &v32,
          &v30);
  v13 = v29;
  *(_DWORD *)(a1 + 32) = v12;
  if ( (_DWORD)v13 )
    *(_DWORD *)(a1 + 36) = MmProtectToValue[v13];
  else
    *(_DWORD *)(a1 + 36) = 0;
  v14 = v32;
  v15 = v32;
  if ( v32 >> 12 <= (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) )
  {
    while ( 1 )
    {
      if ( (unsigned int)((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _KPROCESS *, __int64 *, int *, unsigned __int64 *, char *))MiQueryAddressState)(
                           v14,
                           CurrentIrql,
                           a3,
                           v27,
                           &v26,
                           &v31,
                           &v32,
                           &v30) != *(_DWORD *)(a1 + 32)
        || v31 != (_DWORD)v13 )
      {
        v7 = 0;
        goto LABEL_45;
      }
      v15 = v32;
      if ( (++v3 & 0x1F) == 0 && (*(_DWORD *)v9 & 0x40000000) != 0 )
      {
LABEL_34:
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v9, retaddr);
        }
        else
        {
          _InterlockedAnd((volatile signed __int32 *)v9, 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)v9);
        }
        __writecr8(CurrentIrql);
        v23 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9);
        }
        else
        {
          _m_prefetchw(v9);
          v24 = *(_DWORD *)v9 & 0x7FFFFFFF;
          if ( v24 != _InterlockedCompareExchange((volatile signed __int32 *)v9, v24 + 1, v24) )
            ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)v9);
        }
        CurrentIrql = v23;
        goto LABEL_42;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = 0;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) == 0 )
        break;
      v21 = 1;
      if ( DpcTimeCount <= 7 )
        goto LABEL_24;
      if ( CurrentPrcb->QuantumEnd )
      {
        v17 = 1;
        goto LABEL_31;
      }
LABEL_26:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v17 = 5;
        goto LABEL_31;
      }
      if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
      {
        v17 = 6;
        goto LABEL_31;
      }
LABEL_30:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      _enable();
LABEL_31:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v17, DpcWatchdogCount, DpcTimeCount);
      if ( v17 )
        goto LABEL_34;
LABEL_42:
      v14 = v32;
      if ( v32 >> 12 > (*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) )
        goto LABEL_45;
      LODWORD(v13) = v29;
    }
    v21 = 0;
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v17 = 2;
      goto LABEL_31;
    }
    if ( CurrentPrcb->QuantumEnd )
    {
      v17 = 3;
      goto LABEL_31;
    }
    NextThread = CurrentPrcb->NextThread;
    if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
    {
      v17 = 4;
      goto LABEL_31;
    }
LABEL_24:
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_42;
    if ( !v21 )
      goto LABEL_30;
    goto LABEL_26;
  }
LABEL_45:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v9, retaddr);
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)v9, 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)v9);
  }
  __writecr8(CurrentIrql);
  if ( v7 == 1 )
    return ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) + 4096;
  else
    return v15;
}

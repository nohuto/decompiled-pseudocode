/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x140094B64
 * Callers:
 *     PsSetProcessPriorityByClass @ 0x1404503DC (PsSetProcessPriorityByClass.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400292C4 (KiUpdateTotalCyclesCurrentThread.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1400950A0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiApplyForegroundBoostThread @ 0x1400959C4 (KiApplyForegroundBoostThread.c)
 *     KeFlushProcessWriteBuffers @ 0x140095EE8 (KeFlushProcessWriteBuffers.c)
 *     KeSetQuantumProcess @ 0x1400960D4 (KeSetQuantumProcess.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400E7488 (KiPriQueueThreadPriorityChanged.c)
 *     EtwTracePriority @ 0x14020E158 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetPriorityAndQuantumProcess(__int64 a1, __int64 a2, UCHAR a3, unsigned int a4, int a5)
{
  __int64 result; // rax
  UCHAR v6; // r14
  int v7; // edi
  int v9; // r15d
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // r12
  char v17; // r13
  _KTHREAD *v18; // rdi
  bool v19; // r14
  int BasePriority; // ecx
  int v21; // esi
  char Saturation; // al
  bool v23; // sf
  int Priority; // r14d
  __int64 CycleTime; // rcx
  __int64 v26; // rdx
  int v27; // eax
  _DISPATCHER_HEADER *volatile Queue; // rcx
  _KTHREAD *v29; // rdi
  bool v30; // r14
  int v31; // esi
  int v32; // eax
  char v33; // cl
  char v34; // r14
  int v35; // eax
  __int64 updated; // rcx
  char v37; // al
  _DISPATCHER_HEADER *volatile v38; // rcx
  int v39; // [rsp+30h] [rbp-50h] BYREF
  int v40; // [rsp+34h] [rbp-4Ch]
  int v41; // [rsp+38h] [rbp-48h]
  int v42; // [rsp+3Ch] [rbp-44h]
  int v43; // [rsp+40h] [rbp-40h]
  int v44; // [rsp+44h] [rbp-3Ch]
  __int64 v45; // [rsp+48h] [rbp-38h] BYREF
  int v46; // [rsp+50h] [rbp-30h] BYREF
  int v47; // [rsp+54h] [rbp-2Ch] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+58h] [rbp-28h]
  _KTHREAD *CurrentThread; // [rsp+60h] [rbp-20h]
  _QWORD *v50; // [rsp+68h] [rbp-18h]
  PEX_SPIN_LOCK SpinLock; // [rsp+70h] [rbp-10h]
  __int64 CurrentIrql; // [rsp+78h] [rbp-8h]
  char v53; // [rsp+C8h] [rbp+48h]

  result = (unsigned int)*(char *)(a1 + 444);
  v6 = a3;
  v7 = a2;
  if ( (_DWORD)result != (_DWORD)a2 || a4 != a5 && (int)a2 < 16 )
  {
    if ( (_UNKNOWN *)a1 == &KiInitialProcess )
      return result;
    if ( !(_DWORD)a2 )
      v7 = 1;
    v9 = 0;
    v40 = 0;
    v42 = 0;
    v45 = 0LL;
    v53 = 0;
    v10 = DWORD1(PerfGlobalGroupMask) >> 13;
    LOBYTE(v10) = (WORD2(PerfGlobalGroupMask) & 0x2000) != 0;
    v44 = v10;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    SpinLock = (PEX_SPIN_LOCK)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( v6 )
      *(_BYTE *)(a1 + 445) = v6;
    v11 = *(char *)(a1 + 444);
    v12 = (unsigned int)(v7 - v11);
    v41 = v11;
    v43 = v7 - v11;
    LOBYTE(v12) = 1;
    *(_BYTE *)(a1 + 444) = v7;
    KeFlushProcessWriteBuffers(v12);
    v14 = (_QWORD *)(a1 + 48);
    v15 = 16LL;
    v16 = *(_QWORD **)(a1 + 48);
    v50 = (_QWORD *)(a1 + 48);
    if ( v7 >= 16 )
    {
      if ( v16 != v14 )
      {
        v17 = 0;
        do
        {
          v18 = (_KTHREAD *)(v16 - 95);
          if ( v6 )
            v18->SchedulerApc.SpareByte1 = v6;
          v19 = v18 == CurrentThread;
          v46 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v18->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v46, v13, v15);
            while ( v18->ThreadLock );
          }
          BasePriority = v18->BasePriority;
          v15 = 16LL;
          v21 = BasePriority + v43;
          if ( BasePriority + v43 >= 16 )
          {
            if ( v21 > 31 )
              v21 = 31;
            v39 = v21;
          }
          else
          {
            v21 = 16;
            v39 = 16;
          }
          Saturation = v18->Saturation;
          v23 = Saturation < 0;
          if ( !Saturation )
            goto LABEL_31;
          v13 = v41;
          if ( v41 >= 16LL )
          {
            Priority = v42;
LABEL_46:
            v18->ThreadLock = 0LL;
            goto LABEL_47;
          }
          v23 = Saturation < 0;
          if ( Saturation > 0 )
          {
            v39 = 31;
          }
          else
          {
LABEL_31:
            if ( v23 )
              v21 = 16;
            v39 = v21;
          }
          v9 = BasePriority;
          if ( !v19 || CurrentPrcb->NestingLevel )
          {
            CycleTime = v18->CycleTime;
          }
          else
          {
            _disable();
            CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)(v16 - 95));
            _enable();
          }
          v26 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v18->SchedulerApc.SpareByte1;
          if ( (*((_DWORD *)&v18->0 + 1) & 0x10) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&v18->116 + 1, 4u);
          v18->QuantumTarget = v26;
          v27 = KiSetBasePriorityAndClearDecrement(v16 - 95, &v39, 0LL);
          Priority = v18->Priority;
          v42 = Priority;
          v40 = v27;
          v17 = 1;
          if ( KiSetPriorityThread((__int64)(v16 - 95), &v45, v27) )
          {
            v40 = v18->Priority;
            v53 = 1;
          }
          Queue = v18->Queue;
          if ( !Queue || (Queue->Type & 0x7F) != 0x15 )
          {
            v21 = v39;
            goto LABEL_46;
          }
          KiPriQueueThreadPriorityChanged(Queue, v16 - 95);
          v21 = v39;
LABEL_47:
          if ( (_BYTE)v44 )
          {
            if ( v53 )
            {
              v53 = 0;
              EtwTracePriority((_DWORD)v16 - 760, 1328, Priority, v40, 0LL);
            }
            if ( v17 )
            {
              v17 = 0;
              if ( v9 != v21 )
                EtwTracePriority((_DWORD)v16 - 760, 1329, v9, v21, (__int64)&v39);
            }
          }
          v16 = (_QWORD *)*v16;
          v6 = a3;
        }
        while ( v16 != v50 );
      }
LABEL_81:
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v45, CurrentIrql);
      return (unsigned int)v41;
    }
    if ( v16 == v14 )
      goto LABEL_81;
    while ( 1 )
    {
      v29 = (_KTHREAD *)(v16 - 95);
      if ( v6 )
        v29->SchedulerApc.SpareByte1 = v6;
      v30 = v29 == CurrentThread;
      v47 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v29->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v47, v13, v15);
        while ( v29->ThreadLock );
      }
      v31 = v29->BasePriority;
      v15 = 16LL;
      if ( v31 <= v41 || v31 < 16 )
        break;
      v29->ThreadLock = 0LL;
LABEL_80:
      v16 = (_QWORD *)*v16;
      v6 = a3;
      if ( v16 == v50 )
        goto LABEL_81;
    }
    v13 = 1LL;
    v32 = v31 + v43;
    if ( v31 + v43 < 16 )
    {
      if ( v32 <= 0 )
        v32 = 1;
      v39 = v32;
    }
    else
    {
      v39 = 15;
    }
    v33 = v29->Saturation;
    if ( !v33 )
      goto LABEL_85;
    if ( v41 < 16LL )
    {
      v34 = 0;
      goto LABEL_73;
    }
    if ( v33 > 0 )
    {
      v39 = 15;
    }
    else
    {
LABEL_85:
      v35 = v39;
      if ( v33 < 0 )
        v35 = 1;
      v39 = v35;
    }
    if ( !v30 || CurrentPrcb->NestingLevel )
    {
      updated = v29->CycleTime;
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)(v16 - 95));
      _enable();
      v15 = 16LL;
    }
    v13 = updated + KiCyclesPerClockQuantum * (unsigned int)v29->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&v29->0 + 1) & 0x10) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&v29->116 + 1, 4u);
    v29->QuantumTarget = v13;
    if ( a5 && v39 == v31 )
    {
      v34 = 0;
    }
    else
    {
      v40 = KiSetBasePriorityAndClearDecrement(v16 - 95, &v39, a4);
      v34 = 1;
    }
    v37 = 0;
    if ( a5 )
      v37 = KiApplyForegroundBoostThread(v16 - 95, &v45);
    if ( v34 )
    {
      if ( !v37 )
      {
        v42 = v29->Priority;
        if ( KiSetPriorityThread((__int64)(v16 - 95), &v45, v40) )
        {
          v40 = v29->Priority;
          v53 = 1;
        }
      }
      v38 = v29->Queue;
      if ( v38 )
      {
        if ( (v38->Type & 0x7F) == 0x15 )
        {
          KiPriQueueThreadPriorityChanged(v38, v16 - 95);
LABEL_74:
          if ( (_BYTE)v44 )
          {
            if ( v53 )
            {
              v53 = 0;
              EtwTracePriority((_DWORD)v16 - 760, 1328, v42, v40, 0LL);
            }
            if ( v34 && v31 != v39 )
              EtwTracePriority((_DWORD)v16 - 760, 1329, v31, v39, (__int64)&v39);
          }
          goto LABEL_80;
        }
      }
    }
LABEL_73:
    v29->ThreadLock = 0LL;
    goto LABEL_74;
  }
  if ( a3 )
  {
    LOBYTE(a2) = a3;
    KeSetQuantumProcess(a1, a2);
  }
  return (unsigned int)v7;
}

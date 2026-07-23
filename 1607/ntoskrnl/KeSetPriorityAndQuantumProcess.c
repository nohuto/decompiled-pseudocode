/*
 * XREFs of KeSetPriorityAndQuantumProcess @ 0x14007EAE4
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     PsSetProcessPriorityByClass @ 0x140471F98 (PsSetProcessPriorityByClass.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x14007F058 (KiSetBasePriorityAndClearDecrement.c)
 *     KeSetQuantumProcess @ 0x14007F140 (KeSetQuantumProcess.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1400A6028 (KiPriQueueThreadPriorityChanged.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C67CC (KeFlushProcessWriteBuffers.c)
 *     KiApplyForegroundBoostThread @ 0x1400C8BFC (KiApplyForegroundBoostThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400CF394 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x1400D0A40 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     EtwTracePriority @ 0x140225E3C (EtwTracePriority.c)
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
  _QWORD *v13; // rax
  _QWORD *v14; // r12
  _KTHREAD *v15; // rdi
  bool v16; // r14
  int BasePriority; // esi
  int v18; // eax
  char Saturation; // cl
  int v20; // eax
  __int64 CycleTime; // rcx
  __int64 v22; // rdx
  char v23; // r14
  char v24; // al
  _DISPATCHER_HEADER *volatile Queue; // rcx
  __int64 v26; // r8
  char v27; // r13
  _KTHREAD *v28; // rdi
  bool v29; // r14
  int v30; // ecx
  int v31; // esi
  char v32; // al
  bool v33; // sf
  int v34; // r14d
  __int64 updated; // rcx
  __int64 v36; // rdx
  unsigned int v37; // eax
  _DISPATCHER_HEADER *volatile v38; // rcx
  int v39; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v40; // [rsp+34h] [rbp-4Ch]
  int Priority; // [rsp+38h] [rbp-48h]
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
  if ( (_DWORD)result == (_DWORD)a2 && (a4 == a5 || (int)a2 >= 16) )
  {
    if ( a3 )
    {
      LOBYTE(a2) = a3;
      KeSetQuantumProcess(a1, a2);
    }
    return (unsigned int)v7;
  }
  else if ( (_UNKNOWN *)a1 != &KiInitialProcess )
  {
    if ( !(_DWORD)a2 )
      v7 = 1;
    v9 = 0;
    v40 = 0;
    Priority = 0;
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
    v42 = v11;
    v43 = v7 - v11;
    LOBYTE(v12) = 1;
    *(_BYTE *)(a1 + 444) = v7;
    KeFlushProcessWriteBuffers(v12);
    v13 = (_QWORD *)(a1 + 48);
    v14 = *(_QWORD **)(a1 + 48);
    v50 = (_QWORD *)(a1 + 48);
    if ( v7 < 16 )
    {
      if ( v14 != v13 )
      {
        while ( 1 )
        {
          v15 = (_KTHREAD *)(v14 - 95);
          if ( v6 )
            v15->SchedulerApc.SpareByte1 = v6;
          v16 = v15 == CurrentThread;
          v47 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v15->ThreadLock, 0LL) )
          {
            do
              KeYieldProcessorEx(&v47);
            while ( v15->ThreadLock );
          }
          BasePriority = v15->BasePriority;
          if ( BasePriority <= v42 || BasePriority < 16 )
            break;
          v15->ThreadLock = 0LL;
LABEL_43:
          v14 = (_QWORD *)*v14;
          v6 = a3;
          if ( v14 == v50 )
            goto LABEL_44;
        }
        v18 = BasePriority + v43;
        if ( BasePriority + v43 >= 16 )
        {
          v39 = 15;
        }
        else
        {
          if ( v18 <= 0 )
            v18 = 1;
          v39 = v18;
        }
        Saturation = v15->Saturation;
        if ( !Saturation )
          goto LABEL_25;
        if ( v42 < 16LL )
        {
          v23 = 0;
          goto LABEL_41;
        }
        if ( Saturation > 0 )
        {
          v39 = 15;
        }
        else
        {
LABEL_25:
          v20 = v39;
          if ( Saturation < 0 )
            v20 = 1;
          v39 = v20;
        }
        if ( !v16 || CurrentPrcb->NestingLevel )
        {
          CycleTime = v15->CycleTime;
        }
        else
        {
          _disable();
          CycleTime = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v14 - 95, 0LL);
          _enable();
        }
        v22 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)v15->SchedulerApc.SpareByte1;
        if ( (*((_DWORD *)&v15->0 + 1) & 0x10) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)&v15->116 + 1, 4u);
        v15->QuantumTarget = v22;
        if ( a5 && v39 == BasePriority )
        {
          v23 = 0;
        }
        else
        {
          v40 = KiSetBasePriorityAndClearDecrement(v14 - 95, &v39, a4);
          v23 = 1;
        }
        v24 = 0;
        if ( a5 )
          v24 = KiApplyForegroundBoostThread(v14 - 95, &v45);
        if ( v23 )
        {
          if ( !v24 )
          {
            Priority = v15->Priority;
            if ( (unsigned __int8)KiSetPriorityThread(v14 - 95, &v45, v40) )
            {
              v40 = v15->Priority;
              v53 = 1;
            }
          }
          Queue = v15->Queue;
          if ( Queue )
          {
            if ( (Queue->Type & 0x7F) == 0x15 )
            {
              KiPriQueueThreadPriorityChanged(Queue, v14 - 95);
LABEL_42:
              if ( (_BYTE)v44 )
              {
                if ( v53 )
                {
                  v53 = 0;
                  EtwTracePriority((_DWORD)v14 - 760, 1328, Priority, v40, 0LL);
                }
                if ( v23 && BasePriority != v39 )
                  EtwTracePriority((_DWORD)v14 - 760, 1329, BasePriority, v39, (__int64)&v39);
              }
              goto LABEL_43;
            }
          }
        }
LABEL_41:
        v15->ThreadLock = 0LL;
        goto LABEL_42;
      }
      goto LABEL_44;
    }
    if ( v14 == v13 )
    {
LABEL_44:
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      LOBYTE(v26) = CurrentIrql;
      KiProcessDeferredReadyList(CurrentPrcb, &v45, v26);
      return (unsigned int)v42;
    }
    v27 = 0;
    while ( 1 )
    {
      v28 = (_KTHREAD *)(v14 - 95);
      if ( v6 )
        v28->SchedulerApc.SpareByte1 = v6;
      v29 = v28 == CurrentThread;
      v46 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v28->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v46);
        while ( v28->ThreadLock );
      }
      v30 = v28->BasePriority;
      v31 = v30 + v43;
      if ( v30 + v43 >= 16 )
      {
        if ( v31 > 31 )
          v31 = 31;
        v39 = v31;
      }
      else
      {
        v31 = 16;
        v39 = 16;
      }
      v32 = v28->Saturation;
      v33 = v32 < 0;
      if ( !v32 )
        goto LABEL_75;
      if ( v42 >= 16LL )
      {
        v34 = Priority;
LABEL_90:
        v28->ThreadLock = 0LL;
        goto LABEL_91;
      }
      v33 = v32 < 0;
      if ( v32 > 0 )
      {
        v39 = 31;
      }
      else
      {
LABEL_75:
        if ( v33 )
          v31 = 16;
        v39 = v31;
      }
      v9 = v30;
      if ( !v29 || CurrentPrcb->NestingLevel )
      {
        updated = v28->CycleTime;
      }
      else
      {
        _disable();
        updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, v14 - 95, 0LL);
        _enable();
      }
      v36 = updated + KiCyclesPerClockQuantum * (unsigned int)v28->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&v28->0 + 1) & 0x10) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&v28->116 + 1, 4u);
      v28->QuantumTarget = v36;
      v37 = KiSetBasePriorityAndClearDecrement(v14 - 95, &v39, 0LL);
      v34 = v28->Priority;
      Priority = v34;
      v40 = v37;
      v27 = 1;
      if ( (unsigned __int8)KiSetPriorityThread(v14 - 95, &v45, v37) )
      {
        v40 = v28->Priority;
        v53 = 1;
      }
      v38 = v28->Queue;
      if ( !v38 || (v38->Type & 0x7F) != 0x15 )
      {
        v31 = v39;
        goto LABEL_90;
      }
      KiPriQueueThreadPriorityChanged(v38, v14 - 95);
      v31 = v39;
LABEL_91:
      if ( (_BYTE)v44 )
      {
        if ( v53 )
        {
          v53 = 0;
          EtwTracePriority((_DWORD)v14 - 760, 1328, v34, v40, 0LL);
        }
        if ( v27 )
        {
          v27 = 0;
          if ( v9 != v31 )
            EtwTracePriority((_DWORD)v14 - 760, 1329, v9, v31, (__int64)&v39);
        }
      }
      v14 = (_QWORD *)*v14;
      v6 = a3;
      if ( v14 == v50 )
        goto LABEL_44;
    }
  }
  return result;
}

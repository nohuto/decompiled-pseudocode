/*
 * XREFs of KiSetPriorityThread @ 0x1400D0A40
 * Callers:
 *     KeBoostPriorityThread @ 0x1400049F8 (KeBoostPriorityThread.c)
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 *     KiSetPriorityFloor @ 0x14006C074 (KiSetPriorityFloor.c)
 *     KiTryUnwaitThreadWithPriority @ 0x14007E9D4 (KiTryUnwaitThreadWithPriority.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14007EAE4 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x14007EE14 (KeSetBasePriorityThread.c)
 *     KiSetPriorityBoost @ 0x1400911DC (KiSetPriorityBoost.c)
 *     KiClearPriorityFloor @ 0x14009FD80 (KiClearPriorityFloor.c)
 *     KeSetActualBasePriorityThread @ 0x1400D06E0 (KeSetActualBasePriorityThread.c)
 *     KeRemovePriQueue @ 0x1400E5870 (KeRemovePriQueue.c)
 * Callees:
 *     KiSelectReadyThreadEx @ 0x14005DAB0 (KiSelectReadyThreadEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiUpdateThreadPriority @ 0x140091508 (KiUpdateThreadPriority.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400915B8 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A8EC8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiAcquireThreadStateLock @ 0x1400D1430 (KiAcquireThreadStateLock.c)
 */

char __fastcall KiSetPriorityThread(__int64 a1, __int64 *a2, char a3)
{
  unsigned int v3; // eax
  int v6; // edi
  unsigned __int8 v7; // al
  char v8; // dl
  char v9; // bp
  int v10; // r12d
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v12; // rsi
  bool v13; // al
  __int64 v14; // rdx
  struct _KPRCB *v16; // rcx
  char EffectivePriorityThread; // al
  unsigned __int64 *v18; // rax
  struct _SINGLE_LIST_ENTRY *v19; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  struct _SINGLE_LIST_ENTRY *v21; // r8
  _SINGLE_LIST_ENTRY *v22; // rdx
  unsigned __int64 *v23; // rax
  int v24; // ecx
  __int64 Number; // rcx
  struct _KPRCB *v26; // rax
  bool v27; // r15
  struct _KPRCB *v28; // [rsp+60h] [rbp+8h] BYREF
  int v29; // [rsp+70h] [rbp+18h]
  volatile signed __int64 *v30; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a1 + 1408);
  if ( v3 )
  {
    _BitScanReverse((unsigned int *)&v24, v3);
    v29 = v24;
    if ( a3 < v24 )
      a3 = v24;
  }
  v6 = a3;
  if ( *(char *)(a1 + 195) == a3 )
    return 0;
  v7 = KiAcquireThreadStateLock(a1, &v28, &v30);
  v8 = *(_BYTE *)(a1 + 195);
  v9 = 0;
  v10 = v8;
  if ( v7 > 3u )
  {
LABEL_4:
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (char)v6 > v8 )
    {
      if ( *(_BYTE *)(a1 + 793) )
      {
        v19 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
        if ( *(_QWORD *)(a1 + 1376) == 1LL )
        {
          p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
          if ( CurrentPrcb != (struct _KPRCB *)-25784LL )
          {
            v19->Next = p_AbPropagateBoostsList->Next;
            p_AbPropagateBoostsList->Next = v19;
            _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
            KiAbQueueAutoBoostDpc((__int64)CurrentPrcb);
          }
        }
      }
    }
    v12 = v28;
    *(_BYTE *)(a1 + 195) = v6;
    goto LABEL_6;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v27 = v28->NextThread == 0LL;
      v16 = KeGetCurrentPrcb();
      if ( (char)v6 > v8 )
      {
        if ( *(_BYTE *)(a1 + 793) )
        {
          v21 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
          if ( *(_QWORD *)(a1 + 1376) == 1LL )
          {
            v22 = &v16->AbPropagateBoostsList;
            if ( v16 != (struct _KPRCB *)-25784LL )
            {
              v21->Next = v22->Next;
              v22->Next = v21;
              _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1420));
              KiAbQueueAutoBoostDpc((__int64)v16);
            }
          }
        }
      }
      v12 = v28;
      *(_BYTE *)(a1 + 195) = v6;
      if ( v27 )
      {
        if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
          EffectivePriorityThread = KiQueryEffectivePriorityThread(a1, (__int64)v12);
        else
          EffectivePriorityThread = v6;
        *v12->PriorityState = EffectivePriorityThread;
      }
      if ( v6 < v10 && v27 )
      {
        v12 = v28;
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          v18 = KiSelectReadyThreadEx(v28, (_KTHREAD *)a1, 0LL);
          if ( v18 )
          {
            KiUpdateThreadState((__int64)v12, (__int64)v18, 3, 1);
            v9 = 1;
          }
        }
        else if ( v28->ReadySummary >> (v6 + 1) )
        {
          *(_BYTE *)(a1 + 112) |= 0x10u;
        }
      }
      goto LABEL_6;
    }
    if ( v7 == 3 )
    {
      v12 = v28;
      KiUpdateThreadPriority((__int64)v28, a1, v6, 1);
      if ( v6 < v10 )
      {
        v23 = KiSelectReadyThreadEx(v12, (_KTHREAD *)a1, 0LL);
        if ( v23 )
        {
          KiUpdateThreadState((__int64)v12, (__int64)v23, 3, 1);
          *(_BYTE *)(a1 + 388) = 7;
          *(_QWORD *)(a1 + 216) = *a2;
          *a2 = a1 + 216;
        }
      }
      goto LABEL_6;
    }
    goto LABEL_4;
  }
  v12 = v28;
  KiRemoveThreadFromAnyReadyQueue((__int64)v28, (__int64)v30, a1, v8);
  KiUpdateThreadPriority(0LL, a1, v6, 0);
  KiPrepareReadyThreadForRescheduling(a1, v6, a2);
LABEL_6:
  v13 = 0;
  v14 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 24896);
  if ( v14 )
    v13 = (v14 & *(_QWORD *)(a1 + 576)) == v14;
  if ( v13 != ((*(_DWORD *)(a1 + 120) & 0x1000) != 0) )
  {
    _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x1000u);
    v12 = v28;
  }
  if ( v12 )
    _InterlockedAnd64((volatile signed __int64 *)&v12->PrcbLock, 0LL);
  if ( v30 )
    _InterlockedAnd64(v30, 0LL);
  if ( v9 )
  {
    LODWORD(v14) = KeGetPcr()->Prcb.Number;
    Number = v28->Number;
    if ( (_DWORD)v14 != (_DWORD)Number )
    {
      v26 = KeGetCurrentPrcb();
      LOBYTE(v14) = 2;
      ++v26->SynchCounters.IpiSendSoftwareInterruptCount;
      HalSendSoftwareInterrupt(Number, v14);
    }
  }
  return 1;
}

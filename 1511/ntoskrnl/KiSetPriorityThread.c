/*
 * XREFs of KiSetPriorityThread @ 0x14007BEA0
 * Callers:
 *     KiSetPriorityFloor @ 0x140031B9C (KiSetPriorityFloor.c)
 *     KiClearPriorityFloor @ 0x140031CCC (KiClearPriorityFloor.c)
 *     KeRemovePriQueue @ 0x14006FC60 (KeRemovePriQueue.c)
 *     KiTryUnwaitThreadWithPriority @ 0x140094580 (KiTryUnwaitThreadWithPriority.c)
 *     KeSetBasePriorityThread @ 0x140094928 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140094B64 (KeSetPriorityAndQuantumProcess.c)
 *     KeBoostPriorityThread @ 0x1400F6440 (KeBoostPriorityThread.c)
 *     KeInsertPriQueue @ 0x1401015B0 (KeInsertPriQueue.c)
 *     KiSetPriorityBoost @ 0x140102184 (KiSetPriorityBoost.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140096928 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14009698C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 */

char __fastcall KiSetPriorityThread(__int64 a1, _QWORD *a2, char a3)
{
  unsigned int v3; // eax
  unsigned int v6; // edi
  unsigned __int8 v7; // al
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  char v9; // bp
  signed int v10; // r12d
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v12; // rsi
  __int64 v13; // rcx
  char v14; // al
  _BYTE *ready; // rax
  int v17; // ecx
  _BYTE *v18; // rax
  bool v19; // r14
  __int64 v20; // rcx
  struct _KPRCB *v21; // rax
  struct _SINGLE_LIST_ENTRY *v22; // r8
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  int v24; // [rsp+70h] [rbp+18h]
  volatile signed __int64 *v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a1 + 1408);
  if ( v3 )
  {
    _BitScanReverse((unsigned int *)&v17, v3);
    v24 = v17;
    if ( a3 < v17 )
      a3 = v17;
  }
  v6 = a3;
  if ( *(char *)(a1 + 195) == a3 )
    return 0;
  v7 = KiAcquireThreadStateLock(a1, &v23, &v25);
  p_AbPropagateBoostsList = (_SINGLE_LIST_ENTRY *)(unsigned int)*(char *)(a1 + 195);
  v9 = 0;
  v10 = *(char *)(a1 + 195);
  if ( v7 > 3u )
  {
LABEL_4:
    if ( KiAbEnabled )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (char)v6 > *(char *)(a1 + 195) )
      {
        if ( *(_BYTE *)(a1 + 793) )
        {
          v22 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
          if ( *(_QWORD *)(a1 + 1376) == 1LL )
          {
            p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
            if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
            {
              v22->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v22;
              _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1416));
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            }
          }
        }
      }
    }
    v12 = v23;
    *(_BYTE *)(a1 + 195) = v6;
    goto LABEL_8;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v12 = v23;
      v19 = *(_QWORD *)(v23 + 16) == 0LL;
      KiUpdateThreadPriority(v23, a1, v6, v19);
      if ( (int)v6 < v10 && v19 )
      {
        v12 = v23;
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          ready = (_BYTE *)KiSelectReadyThreadEx(v23, a1, 0LL);
          if ( ready )
          {
            KiUpdateThreadState(v12, ready, 3, 1);
            v9 = 1;
          }
        }
        else if ( *(_DWORD *)(v23 + 22680) >> (v6 + 1) )
        {
          *(_BYTE *)(a1 + 112) |= 0x10u;
        }
      }
      goto LABEL_8;
    }
    if ( v7 == 3 )
    {
      v12 = v23;
      KiUpdateThreadPriority(v23, a1, v6, 1LL);
      if ( (int)v6 < v10 )
      {
        v18 = (_BYTE *)KiSelectReadyThreadEx(v12, a1, 0LL);
        if ( v18 )
        {
          KiUpdateThreadState(v12, v18, 3, 1);
          *(_BYTE *)(a1 + 388) = 7;
          *(_QWORD *)(a1 + 216) = *a2;
          *a2 = a1 + 216;
        }
      }
      goto LABEL_8;
    }
    goto LABEL_4;
  }
  v12 = v23;
  KiRemoveThreadFromAnyReadyQueue(v23, v25, a1, (unsigned int)v10);
  KiUpdateThreadPriority(0LL, a1, v6, 0LL);
  KiPrepareReadyThreadForRescheduling(a1, v6, a2);
LABEL_8:
  v13 = *(_QWORD *)(a1 + 104);
  if ( v13 )
  {
    while ( (*(_DWORD *)(v13 + 4) & 2) != 0 )
    {
      v13 = *(_QWORD *)(v13 + 80);
      if ( !v13 )
        goto LABEL_9;
    }
    if ( (*(_DWORD *)(a1 + 120) & 0x100) == 0 && *(char *)(a1 + 195) < 16 )
      goto LABEL_32;
  }
LABEL_9:
  v14 = 0;
  p_AbPropagateBoostsList = *(_SINGLE_LIST_ENTRY **)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 24768);
  if ( p_AbPropagateBoostsList )
  {
    if ( (_SINGLE_LIST_ENTRY *)((unsigned __int64)p_AbPropagateBoostsList & *(_QWORD *)(a1 + 576)) != p_AbPropagateBoostsList )
    {
LABEL_32:
      v14 = 0;
      goto LABEL_12;
    }
    v14 = 1;
  }
LABEL_12:
  if ( v14 != ((*(_DWORD *)(a1 + 120) & 0x1000) != 0) )
  {
    _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x1000u);
    v12 = v23;
  }
  if ( v12 )
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 48), 0LL);
  if ( v25 )
    _InterlockedAnd64(v25, 0LL);
  if ( v9 )
  {
    LODWORD(p_AbPropagateBoostsList) = KeGetPcr()->Prcb.Number;
    v20 = *(unsigned int *)(v23 + 36);
    if ( (_DWORD)p_AbPropagateBoostsList != (_DWORD)v20 )
    {
      v21 = KeGetCurrentPrcb();
      LOBYTE(p_AbPropagateBoostsList) = 2;
      ++v21->SynchCounters.IpiSendSoftwareInterruptCount;
      HalSendSoftwareInterrupt(v20, p_AbPropagateBoostsList);
    }
  }
  return 1;
}

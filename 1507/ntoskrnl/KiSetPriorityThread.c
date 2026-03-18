/*
 * XREFs of KiSetPriorityThread @ 0x14009B110
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x140009C20 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14000A20C (KeSetPriorityAndQuantumProcess.c)
 *     KiTryUnwaitThreadWithPriority @ 0x14000D710 (KiTryUnwaitThreadWithPriority.c)
 *     KeRemovePriQueue @ 0x1400319E0 (KeRemovePriQueue.c)
 *     KeSetPriorityBoost @ 0x1400D5D90 (KeSetPriorityBoost.c)
 *     KeBoostPriorityThread @ 0x1400DBC80 (KeBoostPriorityThread.c)
 *     KiSetPriorityFloor @ 0x1400F125C (KiSetPriorityFloor.c)
 *     KeSetBasePriorityThread @ 0x14011ABD0 (KeSetBasePriorityThread.c)
 *     KiClearPriorityFloor @ 0x14011B9F0 (KiClearPriorityFloor.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14009C160 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x14009C1F0 (KiAcquireThreadStateLock.c)
 *     KiSelectReadyThreadEx @ 0x1400A24B0 (KiSelectReadyThreadEx.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D3438 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D34E0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 */

__int64 __fastcall KiSetPriorityThread(__int64 a1, _QWORD *a2, char a3)
{
  unsigned int v3; // eax
  int v6; // r10d
  __int64 result; // rax
  signed int v8; // edi
  unsigned __int8 v9; // al
  __int64 v10; // r9
  char v11; // dl
  char v12; // r12
  _SINGLE_LIST_ENTRY *v13; // r8
  int v14; // r15d
  struct _KPRCB *v15; // rcx
  struct _SINGLE_LIST_ENTRY *v16; // rdx
  bool v17; // zf
  char v18; // bp
  char v19; // cl
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r14
  bool v28; // si
  struct _KPRCB *v29; // rcx
  struct _SINGLE_LIST_ENTRY *v30; // rdx
  char v31; // bp
  char v32; // dl
  __int64 v33; // rdx
  __int64 v34; // rdx
  int ThreadEffectiveRankNonZero; // eax
  __int64 ready; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v40; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  struct _KPRCB *v42; // rcx
  struct _SINGLE_LIST_ENTRY *v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct _KPRCB *v46; // rax
  __int64 v47; // [rsp+60h] [rbp+8h] BYREF
  int v48; // [rsp+70h] [rbp+18h]
  volatile signed __int64 *v49; // [rsp+78h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a1 + 1408);
  if ( v3 )
  {
    _BitScanReverse((unsigned int *)&v6, v3);
    if ( a3 < v6 )
      a3 = v6;
    v48 = v6;
  }
  result = (unsigned int)*(char *)(a1 + 195);
  v8 = a3;
  if ( (_DWORD)result != a3 )
  {
    v9 = KiAcquireThreadStateLock(a1, &v47, &v49);
    v11 = *(_BYTE *)(a1 + 195);
    v12 = 0;
    LOBYTE(v13) = 1;
    v14 = v11;
    if ( v9 > 3u )
      goto LABEL_89;
    switch ( v9 )
    {
      case 1u:
        KiRemoveThreadFromAnyReadyQueue(v47, v49, a1, (unsigned int)v11);
        if ( KiAbEnabled )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( (char)v8 > *(char *)(a1 + 195) )
          {
            if ( *(_BYTE *)(a1 + 793) )
            {
              v40 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
              if ( *(_QWORD *)(a1 + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
                if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
                {
                  v40->Next = p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = v40;
                  _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1416));
                  KiAbQueueAutoBoostDpc(CurrentPrcb);
                }
              }
            }
          }
        }
        *(_BYTE *)(a1 + 195) = v8;
        KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v8, a2);
        break;
      case 2u:
        v27 = v47;
        v28 = *(_QWORD *)(v47 + 16) == 0LL;
        if ( KiAbEnabled )
        {
          v29 = KeGetCurrentPrcb();
          if ( (char)v8 > v11 )
          {
            if ( *(_BYTE *)(a1 + 793) )
            {
              v30 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
              if ( *(_QWORD *)(a1 + 1376) == 1LL )
              {
                v13 = &v29->AbPropagateBoostsList;
                if ( v29 != (struct _KPRCB *)-25656LL )
                {
                  v30->Next = v13->Next;
                  v13->Next = v30;
                  _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1416));
                  KiAbQueueAutoBoostDpc(v29);
                }
              }
            }
          }
        }
        *(_BYTE *)(a1 + 195) = v8;
        v31 = 1;
        if ( v28 )
        {
          if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
          {
            if ( (char)v8 >= 16
              || !*(_QWORD *)(a1 + 104)
              || (v33 = *(_QWORD *)(a1 + 104)) == 0
              || (v34 = *(unsigned int *)(v47 + 1624) + v33) == 0
              || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a1, v34, 0LL),
                  v32 = 1,
                  !ThreadEffectiveRankNonZero) )
            {
              v32 = *(_BYTE *)(a1 + 195);
            }
          }
          else
          {
            v32 = v8;
          }
          **(_BYTE **)(v47 + 56) = v32;
        }
        if ( v8 < v14 && v28 )
        {
          if ( *(_BYTE *)(a1 + 388) == 2 )
          {
            ready = KiSelectReadyThreadEx(v47, a1, 0LL);
            v10 = ready;
            if ( ready )
            {
              if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
              {
                if ( *(char *)(ready + 195) >= 16
                  || !*(_QWORD *)(ready + 104)
                  || (v37 = *(_QWORD *)(ready + 104)) == 0
                  || (v38 = *(unsigned int *)(v47 + 1624) + v37) == 0
                  || !(unsigned int)KiGetThreadEffectiveRankNonZero(ready, v38, 0LL) )
                {
                  v31 = *(_BYTE *)(v10 + 195);
                }
              }
              else
              {
                v31 = *(_BYTE *)(ready + 195);
              }
              v12 = 1;
              **(_BYTE **)(v47 + 56) = v31;
              *(_QWORD *)(v27 + 16) = v10;
              *(_BYTE *)(v10 + 388) = 3;
            }
          }
          else if ( *(_DWORD *)(v47 + 22680) >> (v8 + 1) )
          {
            *(_BYTE *)(a1 + 112) |= 0x10u;
          }
        }
        break;
      case 3u:
        if ( KiAbEnabled )
        {
          v15 = KeGetCurrentPrcb();
          if ( (char)v8 > v11 )
          {
            if ( *(_BYTE *)(a1 + 793) )
            {
              v16 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
              if ( *(_QWORD *)(a1 + 1376) == 1LL )
              {
                v13 = &v15->AbPropagateBoostsList;
                if ( v15 != (struct _KPRCB *)-25656LL )
                {
                  v16->Next = v13->Next;
                  v13->Next = v16;
                  _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1416));
                  KiAbQueueAutoBoostDpc(v15);
                }
              }
            }
          }
        }
        v17 = (*(_BYTE *)(a1 + 2) & 4) == 0;
        v18 = 1;
        *(_BYTE *)(a1 + 195) = v8;
        if ( v17 )
        {
          v19 = v8;
        }
        else if ( (char)v8 >= 16
               || !*(_QWORD *)(a1 + 104)
               || (v20 = *(_QWORD *)(a1 + 104)) == 0
               || (v21 = *(unsigned int *)(v47 + 1624) + v20) == 0
               || (v22 = KiGetThreadEffectiveRankNonZero(a1, v21, 0LL), v19 = 1, !v22) )
        {
          v19 = *(_BYTE *)(a1 + 195);
        }
        v23 = v47;
        **(_BYTE **)(v47 + 56) = v19;
        if ( v8 < v14 )
        {
          v24 = KiSelectReadyThreadEx(v23, a1, 0LL);
          v10 = v24;
          if ( v24 )
          {
            if ( (*(_BYTE *)(v24 + 2) & 4) != 0 )
            {
              if ( *(char *)(v24 + 195) >= 16
                || !*(_QWORD *)(v24 + 104)
                || (v25 = *(_QWORD *)(v24 + 104)) == 0
                || (v26 = *(unsigned int *)(v47 + 1624) + v25) == 0
                || !(unsigned int)KiGetThreadEffectiveRankNonZero(v24, v26, 0LL) )
              {
                v18 = *(_BYTE *)(v10 + 195);
              }
            }
            else
            {
              v18 = *(_BYTE *)(v24 + 195);
            }
            **(_BYTE **)(v23 + 56) = v18;
            *(_QWORD *)(v47 + 16) = v10;
            *(_BYTE *)(v10 + 388) = 3;
            *(_BYTE *)(a1 + 388) = 7;
            *(_QWORD *)(a1 + 216) = *a2;
            *a2 = a1 + 216;
          }
        }
        break;
      default:
LABEL_89:
        if ( KiAbEnabled )
        {
          v42 = KeGetCurrentPrcb();
          if ( (char)v8 > v11 )
          {
            if ( *(_BYTE *)(a1 + 793) )
            {
              v43 = (struct _SINGLE_LIST_ENTRY *)(a1 + 1376);
              if ( *(_QWORD *)(a1 + 1376) == 1LL )
              {
                v13 = &v42->AbPropagateBoostsList;
                if ( v42 != (struct _KPRCB *)-25656LL )
                {
                  v43->Next = v13->Next;
                  v13->Next = v43;
                  _InterlockedIncrement16((volatile signed __int16 *)(a1 + 1416));
                  KiAbQueueAutoBoostDpc(v42);
                }
              }
            }
          }
        }
        *(_BYTE *)(a1 + 195) = v8;
        break;
    }
    KiUpdateSharedReadyQueueAffinityThread(0LL, a1, v13, v10);
    if ( v47 )
      _InterlockedAnd64((volatile signed __int64 *)(v47 + 48), 0LL);
    result = (__int64)v49;
    if ( v49 )
      _InterlockedAnd64(v49, 0LL);
    if ( v12 )
    {
      LODWORD(v44) = KeGetPcr()->Prcb.Number;
      result = v47;
      v45 = *(unsigned int *)(v47 + 36);
      if ( (_DWORD)v44 != (_DWORD)v45 )
      {
        v46 = KeGetCurrentPrcb();
        LOBYTE(v44) = 2;
        ++v46->SynchCounters.IpiSendSoftwareInterruptCount;
        return HalSendSoftwareInterrupt(v45, v44);
      }
    }
  }
  return result;
}

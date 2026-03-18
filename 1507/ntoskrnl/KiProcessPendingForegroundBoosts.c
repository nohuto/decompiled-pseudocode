/*
 * XREFs of KiProcessPendingForegroundBoosts @ 0x1400D2D38
 * Callers:
 *     <none>
 * Callees:
 *     KiDeferredReadyThread @ 0x14004CE40 (KiDeferredReadyThread.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14009C160 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x14009C1F0 (KiAcquireThreadStateLock.c)
 *     KiSelectReadyThreadEx @ 0x1400A24B0 (KiSelectReadyThreadEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D3438 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D34E0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall KiProcessPendingForegroundBoosts(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  int v6; // esi
  __int64 *v7; // rax
  char v8; // r14
  __int64 *v9; // rdx
  unsigned int v10; // ecx
  _QWORD *v11; // rcx
  __int64 v12; // r9
  __int64 *v13; // r8
  bool v14; // si
  _QWORD *v15; // rdi
  __int64 v16; // rdi
  unsigned int v17; // esi
  char v18; // al
  char v19; // r8
  char v20; // cl
  signed int v21; // esi
  int v22; // r12d
  char v23; // r13
  struct _KPRCB *v24; // rcx
  struct _SINGLE_LIST_ENTRY *v25; // rdx
  _SINGLE_LIST_ENTRY *v26; // r8
  struct _KPRCB *v27; // rcx
  struct _SINGLE_LIST_ENTRY *v28; // rdx
  _SINGLE_LIST_ENTRY *v29; // r8
  bool v30; // zf
  char v31; // cl
  __int64 v32; // rdx
  __int64 v33; // rdx
  int v34; // eax
  struct _KPRCB *v35; // r14
  __int64 v36; // rax
  _KTHREAD *v37; // r9
  char v38; // cl
  __int64 v39; // rdx
  __int64 v40; // rdx
  char v41; // r8
  _QWORD *v42; // rax
  struct _KPRCB *v43; // r15
  struct _KPRCB *v44; // rcx
  struct _SINGLE_LIST_ENTRY *v45; // rdx
  _SINGLE_LIST_ENTRY *v46; // r8
  char v47; // dl
  __int64 v48; // rdx
  __int64 v49; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v51; // r10
  __int64 ready; // rax
  _KTHREAD *v53; // r9
  char Priority; // dl
  __int64 v55; // rdx
  __int64 v56; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v58; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  __int64 v60; // rdx
  __int64 Number; // rcx
  struct _KPRCB *v62; // rax
  struct _KPRCB *v63; // rdi
  _QWORD *v64; // rbx
  _BYTE *v65; // rdx
  struct _KPRCB *v66; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v67; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int64 *v68; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v69[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]

  v4 = 0LL;
  v67 = 0LL;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_140338F98);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140338F98, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140338F98);
  }
  v7 = (__int64 *)qword_140338F88;
  v8 = 1;
  if ( (__int64 *)qword_140338F88 != &qword_140338F88 )
  {
    do
    {
      v9 = v7 - 178;
      v10 = v6 - *((_DWORD *)v7 - 1);
      v7 = (__int64 *)*v7;
      if ( v10 < 2 )
      {
        if ( v10 > v5 )
          v5 = v10;
      }
      else
      {
        v11 = v9 + 178;
        v12 = v9[178];
        v13 = (__int64 *)v9[179];
        if ( *(__int64 **)(v12 + 8) != v9 + 178 || (_QWORD *)*v13 != v11 )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        *v11 = v4;
        v4 = v9 + 178;
        v9[179] = 0LL;
        _InterlockedAdd16((volatile signed __int16 *)v9 + 708, 1u);
      }
    }
    while ( v7 != &qword_140338F88 );
    v7 = (__int64 *)qword_140338F88;
  }
  v14 = v7 != &qword_140338F88;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_140338F98, retaddr);
  else
    _InterlockedAnd64(&qword_140338F98, 0LL);
  if ( v14 )
  {
    v69[1] = -1LL;
    v69[0] = 0LL;
    KeSetTimer2(&KiForegroundState, -150000LL * (2 - v5), 0LL, v69);
  }
  while ( v4 )
  {
    v15 = v4;
    v4 = (_QWORD *)*v4;
    v16 = (__int64)(v15 - 178);
    v17 = 0;
    *(_QWORD *)(v16 + 1424) = 1LL;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
    {
      do
      {
        if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v17);
      }
      while ( *(_QWORD *)(v16 + 64) );
    }
    v18 = KiAcquireThreadStateLock(v16, (__int64 *)&v66, (volatile signed __int32 **)&v68);
    if ( (unsigned __int8)(v18 - 1) > 2u && v18 != 7
      || *(_BYTE *)(*(_QWORD *)(v16 + 544) + 1490LL) != 2
      || *(_BYTE *)(v16 + 564)
      || (*(_DWORD *)(v16 + 120) & 2) != 0 )
    {
      goto LABEL_124;
    }
    v19 = *(_BYTE *)(v16 + 195);
    v20 = PsPrioritySeparation + *(_BYTE *)(v16 + 563);
    if ( v20 >= 16 )
      v20 = 15;
    if ( v20 <= v19 )
    {
LABEL_124:
      if ( v66 )
        _InterlockedAnd64((volatile signed __int64 *)&v66->PrcbLock, 0LL);
      if ( v68 )
        _InterlockedAnd64(v68, 0LL);
    }
    else
    {
      v21 = v20;
      *(_BYTE *)(v16 + 564) = (v20 - v19) & 0xF;
      v22 = v19;
      v23 = 0;
      switch ( v18 )
      {
        case 1:
          KiRemoveThreadFromAnyReadyQueue(v66, v68, v16, (unsigned int)v19);
          if ( KiAbEnabled )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            if ( (char)v21 > *(char *)(v16 + 195) )
            {
              if ( *(_BYTE *)(v16 + 793) )
              {
                v58 = (struct _SINGLE_LIST_ENTRY *)(v16 + 1376);
                if ( *(_QWORD *)(v16 + 1376) == 1LL )
                {
                  p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
                  if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
                  {
                    v58->Next = p_AbPropagateBoostsList->Next;
                    p_AbPropagateBoostsList->Next = v58;
                    _InterlockedAdd16((volatile signed __int16 *)(v16 + 1416), 1u);
                    KiAbQueueAutoBoostDpc(CurrentPrcb);
                  }
                }
              }
            }
          }
          *(_BYTE *)(v16 + 195) = v21;
          KiPrepareReadyThreadForRescheduling(v16, (unsigned int)v21, &v67);
          break;
        case 2:
          v43 = v66;
          if ( v66->NextThread )
            v8 = 0;
          if ( KiAbEnabled )
          {
            v44 = KeGetCurrentPrcb();
            if ( (char)v21 > v19 )
            {
              if ( *(_BYTE *)(v16 + 793) )
              {
                v45 = (struct _SINGLE_LIST_ENTRY *)(v16 + 1376);
                if ( *(_QWORD *)(v16 + 1376) == 1LL )
                {
                  v46 = &v44->AbPropagateBoostsList;
                  if ( v44 != (struct _KPRCB *)-25656LL )
                  {
                    v45->Next = v46->Next;
                    v46->Next = v45;
                    _InterlockedAdd16((volatile signed __int16 *)(v16 + 1416), 1u);
                    KiAbQueueAutoBoostDpc(v44);
                  }
                }
              }
            }
          }
          *(_BYTE *)(v16 + 195) = v21;
          if ( v8 )
          {
            if ( (*(_BYTE *)(v16 + 2) & 4) != 0 )
            {
              if ( (char)v21 >= 16
                || !*(_QWORD *)(v16 + 104)
                || (v48 = *(_QWORD *)(v16 + 104)) == 0
                || (v49 = v66->ScbOffset + v48) == 0
                || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v16, v49, 0LL),
                    v47 = v51,
                    !ThreadEffectiveRankNonZero) )
              {
                v47 = *(_BYTE *)(v16 + 195);
              }
            }
            else
            {
              v47 = v21;
            }
            *v66->PriorityState = v47;
          }
          if ( v21 < v22 && v8 )
          {
            if ( *(_BYTE *)(v16 + 388) == 2 )
            {
              ready = KiSelectReadyThreadEx(v66, (_KTHREAD *)v16, 0LL);
              v53 = (_KTHREAD *)ready;
              if ( ready )
              {
                if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
                {
                  if ( *(char *)(ready + 195) < 16
                    && *(_QWORD *)(ready + 104)
                    && (v55 = *(_QWORD *)(ready + 104)) != 0
                    && (v56 = v66->ScbOffset + v55) != 0
                    && (unsigned int)KiGetThreadEffectiveRankNonZero(ready, v56, 0LL) )
                  {
                    Priority = 1;
                  }
                  else
                  {
                    Priority = v53->Priority;
                  }
                }
                else
                {
                  Priority = *(_BYTE *)(ready + 195);
                }
                v23 = 1;
                *v66->PriorityState = Priority;
                v43->NextThread = v53;
                v53->WaitBlockFill6[68] = 3;
              }
            }
            else if ( v66->ReadySummary >> (v21 + 1) )
            {
              *(_BYTE *)(v16 + 112) |= 0x10u;
            }
          }
          break;
        case 3:
          if ( KiAbEnabled )
          {
            v27 = KeGetCurrentPrcb();
            if ( (char)v21 > v19 )
            {
              if ( *(_BYTE *)(v16 + 793) )
              {
                v28 = (struct _SINGLE_LIST_ENTRY *)(v16 + 1376);
                if ( *(_QWORD *)(v16 + 1376) == 1LL )
                {
                  v29 = &v27->AbPropagateBoostsList;
                  if ( v27 != (struct _KPRCB *)-25656LL )
                  {
                    v28->Next = v29->Next;
                    v29->Next = v28;
                    _InterlockedAdd16((volatile signed __int16 *)(v16 + 1416), 1u);
                    KiAbQueueAutoBoostDpc(v27);
                  }
                }
              }
            }
          }
          v30 = (*(_BYTE *)(v16 + 2) & 4) == 0;
          *(_BYTE *)(v16 + 195) = v21;
          if ( v30 )
          {
            v31 = v21;
          }
          else if ( (char)v21 >= 16
                 || !*(_QWORD *)(v16 + 104)
                 || (v32 = *(_QWORD *)(v16 + 104)) == 0
                 || (v33 = v66->ScbOffset + v32) == 0
                 || (v34 = KiGetThreadEffectiveRankNonZero(v16, v33, 0LL), v31 = 1, !v34) )
          {
            v31 = *(_BYTE *)(v16 + 195);
          }
          v35 = v66;
          *v66->PriorityState = v31;
          if ( v21 < v22 )
          {
            v36 = KiSelectReadyThreadEx(v35, (_KTHREAD *)v16, 0LL);
            v37 = (_KTHREAD *)v36;
            if ( v36 )
            {
              if ( (*(_BYTE *)(v36 + 2) & 4) != 0 )
              {
                if ( *(char *)(v36 + 195) < 16
                  && *(_QWORD *)(v36 + 104)
                  && (v39 = *(_QWORD *)(v36 + 104)) != 0
                  && (v40 = v66->ScbOffset + v39) != 0
                  && (unsigned int)KiGetThreadEffectiveRankNonZero(v36, v40, 0LL) )
                {
                  v38 = v41 + 1;
                }
                else
                {
                  v38 = v37->Priority;
                }
              }
              else
              {
                v38 = *(_BYTE *)(v36 + 195);
              }
              *v35->PriorityState = v38;
              v66->NextThread = v37;
              v42 = v67;
              v37->WaitBlockFill6[68] = 3;
              *(_BYTE *)(v16 + 388) = 7;
              *(_QWORD *)(v16 + 216) = v42;
              v67 = (_QWORD *)(v16 + 216);
            }
          }
          break;
        default:
          if ( KiAbEnabled )
          {
            v24 = KeGetCurrentPrcb();
            if ( (char)v21 > v19 )
            {
              if ( *(_BYTE *)(v16 + 793) )
              {
                v25 = (struct _SINGLE_LIST_ENTRY *)(v16 + 1376);
                if ( *(_QWORD *)(v16 + 1376) == 1LL )
                {
                  v26 = &v24->AbPropagateBoostsList;
                  if ( v24 != (struct _KPRCB *)-25656LL )
                  {
                    v25->Next = v26->Next;
                    v26->Next = v25;
                    _InterlockedAdd16((volatile signed __int16 *)(v16 + 1416), 1u);
                    KiAbQueueAutoBoostDpc(v24);
                  }
                }
              }
            }
          }
          *(_BYTE *)(v16 + 195) = v21;
          break;
      }
      KiUpdateSharedReadyQueueAffinityThread(0LL, v16);
      if ( v66 )
        _InterlockedAnd64((volatile signed __int64 *)&v66->PrcbLock, 0LL);
      if ( v68 )
        _InterlockedAnd64(v68, 0LL);
      v8 = 1;
      if ( v23 )
      {
        LODWORD(v60) = KeGetPcr()->Prcb.Number;
        Number = v66->Number;
        if ( (_DWORD)v60 != (_DWORD)Number )
        {
          v62 = KeGetCurrentPrcb();
          LOBYTE(v60) = 2;
          ++v62->SynchCounters.IpiSendSoftwareInterruptCount;
          HalSendSoftwareInterrupt(Number, v60);
        }
      }
    }
    *(_QWORD *)(v16 + 64) = 0LL;
    _InterlockedAdd16((volatile signed __int16 *)(v16 + 1416), 0xFFFFu);
  }
  v63 = KeGetCurrentPrcb();
  v64 = v67;
  while ( v64 )
  {
    v65 = v64 - 27;
    v64 = (_QWORD *)*v64;
    KiDeferredReadyThread((__int64)v63, v65);
  }
}

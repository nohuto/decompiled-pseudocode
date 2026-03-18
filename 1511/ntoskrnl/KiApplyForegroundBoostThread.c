/*
 * XREFs of KiApplyForegroundBoostThread @ 0x1400959C4
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x140094B64 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x140095818 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140028BD0 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140096928 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14009698C (KiRemoveThreadFromAnyReadyQueue.c)
 */

char __fastcall KiApplyForegroundBoostThread(__int64 a1, _QWORD *a2)
{
  char v3; // si
  char v5; // al
  struct _KPRCB *v6; // rbx
  char v8; // dl
  char v9; // cl
  signed int v10; // esi
  int v11; // r15d
  char v12; // r12
  char v13; // r14
  __int64 v14; // rdx
  _BYTE *v15; // rax
  _BYTE *ready; // rax
  __int64 Number; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  struct _KPRCB *v19; // [rsp+70h] [rbp+50h] BYREF
  volatile signed __int64 *v20; // [rsp+78h] [rbp+58h] BYREF

  v3 = 0;
  v5 = KiAcquireThreadStateLock(a1, (__int64 *)&v19, (volatile signed __int32 **)&v20);
  if ( (unsigned __int8)(v5 - 1) <= 2u || v5 == 7 )
  {
    v3 = 0;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1498LL) == 2 )
    {
      if ( *(_BYTE *)(a1 + 564) || (*(_DWORD *)(a1 + 120) & 2) != 0 )
        goto LABEL_11;
      v8 = *(_BYTE *)(a1 + 195);
      v9 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
      if ( v9 >= 16 )
        v9 = 15;
      if ( v9 <= v8 )
        goto LABEL_11;
      v10 = v9;
      v11 = v8;
      *(_BYTE *)(a1 + 564) = (v9 - v8) & 0xF;
      v12 = 0;
      switch ( v5 )
      {
        case 1:
          v6 = v19;
          KiRemoveThreadFromAnyReadyQueue(v19, v20, a1, (unsigned int)v8);
          KiUpdateThreadPriority(0LL, a1, v10, 0);
          KiPrepareReadyThreadForRescheduling(a1, (unsigned int)v10, a2);
          break;
        case 2:
          v6 = v19;
          v13 = v19->NextThread == 0LL;
          KiUpdateThreadPriority((__int64)v19, a1, v9, v13);
          if ( v10 < v11 && v13 )
          {
            v6 = v19;
            if ( *(_BYTE *)(a1 + 388) == 2 )
            {
              ready = (_BYTE *)KiSelectReadyThreadEx(v19, a1, 0);
              if ( ready )
              {
                v3 = 1;
                KiUpdateThreadState((__int64)v6, ready, 3, 1);
                v12 = 1;
                goto LABEL_20;
              }
            }
            else if ( v19->ReadySummary >> (v10 + 1) )
            {
              *(_BYTE *)(a1 + 112) |= 0x10u;
            }
          }
          break;
        case 3:
          v6 = v19;
          KiUpdateThreadPriority((__int64)v19, a1, v9, 1);
          if ( v10 < v11 )
          {
            v15 = (_BYTE *)KiSelectReadyThreadEx(v6, a1, 0);
            if ( v15 )
            {
              v3 = 1;
              KiUpdateThreadState((__int64)v6, v15, 3, 1);
              *(_BYTE *)(a1 + 388) = 7;
              *(_QWORD *)(a1 + 216) = *a2;
              *a2 = a1 + 216;
              goto LABEL_20;
            }
          }
          break;
        default:
          KiUpdateThreadPriority(0LL, a1, v9, 0);
          v6 = v19;
          break;
      }
      v3 = 1;
LABEL_20:
      KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      if ( v6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)&v6->PrcbLock, 0LL);
        v6 = v19;
      }
      if ( v20 )
      {
        _InterlockedAnd64(v20, 0LL);
        v6 = v19;
      }
      if ( !v12 || (v6 = v19, Number = v19->Number, KeGetPcr()->Prcb.Number == (_DWORD)Number) )
      {
LABEL_25:
        if ( v3 )
          return v3;
        goto LABEL_4;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      LOBYTE(v14) = 2;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      HalSendSoftwareInterrupt(Number, v14);
LABEL_11:
      v6 = v19;
      goto LABEL_25;
    }
  }
  v6 = v19;
LABEL_4:
  if ( v6 )
    _InterlockedAnd64((volatile signed __int64 *)&v6->PrcbLock, 0LL);
  if ( v20 )
    _InterlockedAnd64(v20, 0LL);
  return v3;
}

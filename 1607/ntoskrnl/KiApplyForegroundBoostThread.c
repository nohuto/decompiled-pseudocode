/*
 * XREFs of KiApplyForegroundBoostThread @ 0x1400C8BFC
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x14007EAE4 (KeSetPriorityAndQuantumProcess.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400C8A54 (KiProcessPendingForegroundBoosts.c)
 * Callees:
 *     KiSelectReadyThreadEx @ 0x14005DAB0 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiUpdateThreadPriority @ 0x140091508 (KiUpdateThreadPriority.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400915B8 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A8EC8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiAcquireThreadStateLock @ 0x1400D1430 (KiAcquireThreadStateLock.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400F0C64 (KiUpdateSharedReadyQueueAffinityThread.c)
 */

char __fastcall KiApplyForegroundBoostThread(__int64 a1, __int64 *a2)
{
  char v3; // si
  char v5; // al
  struct _KPRCB *v6; // rbx
  char v8; // dl
  char v9; // cl
  int v10; // esi
  int v11; // r15d
  char v12; // r12
  char v13; // r14
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int64 *v17; // rax
  unsigned __int64 *v18; // rax
  __int64 Number; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  struct _KPRCB *v21; // [rsp+70h] [rbp+50h] BYREF
  volatile signed __int64 *v22; // [rsp+78h] [rbp+58h] BYREF

  v3 = 0;
  v5 = KiAcquireThreadStateLock(a1, &v21, &v22);
  if ( (unsigned __int8)(v5 - 1) <= 2u || v5 == 7 )
  {
    v3 = 0;
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1466LL) == 2 )
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
          v6 = v21;
          KiRemoveThreadFromAnyReadyQueue((__int64)v21, (__int64)v22, a1, v8);
          KiUpdateThreadPriority(0LL, a1, v10, 0);
          KiPrepareReadyThreadForRescheduling(a1, v10, a2);
          break;
        case 2:
          v6 = v21;
          v13 = v21->NextThread == 0LL;
          KiUpdateThreadPriority((__int64)v21, a1, v9, v13);
          if ( v10 < v11 && v13 )
          {
            v6 = v21;
            if ( *(_BYTE *)(a1 + 388) == 2 )
            {
              v18 = KiSelectReadyThreadEx(v21, (_KTHREAD *)a1, 0LL);
              if ( v18 )
              {
                v3 = 1;
                KiUpdateThreadState((__int64)v6, (__int64)v18, 3, 1);
                v12 = 1;
                goto LABEL_20;
              }
            }
            else if ( v21->ReadySummary >> (v10 + 1) )
            {
              *(_BYTE *)(a1 + 112) |= 0x10u;
            }
          }
          break;
        case 3:
          v6 = v21;
          KiUpdateThreadPriority((__int64)v21, a1, v9, 1);
          if ( v10 < v11 )
          {
            v17 = KiSelectReadyThreadEx(v6, (_KTHREAD *)a1, 0LL);
            if ( v17 )
            {
              v3 = 1;
              KiUpdateThreadState((__int64)v6, (__int64)v17, 3, 1);
              *(_BYTE *)(a1 + 388) = 7;
              *(_QWORD *)(a1 + 216) = *a2;
              *a2 = a1 + 216;
              goto LABEL_20;
            }
          }
          break;
        default:
          KiUpdateThreadPriority(0LL, a1, v9, 0);
          v6 = v21;
          break;
      }
      v3 = 1;
LABEL_20:
      KiUpdateSharedReadyQueueAffinityThread(0LL, a1, v14, v15);
      if ( v6 )
      {
        _InterlockedAnd64((volatile signed __int64 *)&v6->PrcbLock, 0LL);
        v6 = v21;
      }
      if ( v22 )
      {
        _InterlockedAnd64(v22, 0LL);
        v6 = v21;
      }
      if ( !v12 || (v6 = v21, Number = v21->Number, KeGetPcr()->Prcb.Number == (_DWORD)Number) )
      {
LABEL_25:
        if ( v3 )
          return v3;
        goto LABEL_4;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      LOBYTE(v16) = 2;
      ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
      HalSendSoftwareInterrupt(Number, v16);
LABEL_11:
      v6 = v21;
      goto LABEL_25;
    }
  }
  v6 = v21;
LABEL_4:
  if ( v6 )
    _InterlockedAnd64((volatile signed __int64 *)&v6->PrcbLock, 0LL);
  if ( v22 )
    _InterlockedAnd64(v22, 0LL);
  return v3;
}

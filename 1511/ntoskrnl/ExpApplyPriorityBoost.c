/*
 * XREFs of ExpApplyPriorityBoost @ 0x14007EC80
 * Callers:
 *     ExpWaitForResource @ 0x14007F400 (ExpWaitForResource.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400CF4E8 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     ExpUnlockResource @ 0x14003DC00 (ExpUnlockResource.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ObpIncrPointerCount @ 0x140042B20 (ObpIncrPointerCount.c)
 *     PsGetBaseIoPriorityThread @ 0x140077F80 (PsGetBaseIoPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadPriority @ 0x14007D120 (KiUpdateThreadPriority.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x14007DDC0 (KiAcquireThreadStateLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpLockResource @ 0x14007F3A0 (ExpLockResource.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x140096928 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14009698C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KeSetPriorityBoost @ 0x1401020B0 (KeSetPriorityBoost.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 */

_UNKNOWN **__fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  int v6; // r12d
  bool v7; // cc
  int v8; // edi
  bool v9; // r15
  bool v10; // si
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edx
  char v15; // al
  int v16; // eax
  unsigned int v17; // r13d
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // edi
  __int64 CurrentIrql; // rcx
  int v26; // eax
  int v27; // eax
  int v28; // r9d
  char v29; // cl
  unsigned int v30; // eax
  int v31; // r8d
  signed int v32; // esi
  char v33; // al
  unsigned __int64 v34; // rdx
  signed int v35; // r13d
  struct _KPRCB *v36; // rdi
  _BYTE *v37; // rax
  __int64 v38; // rax
  bool v39; // r15
  struct _KPRCB *v40; // rcx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  char EffectivePriorityThread; // al
  _BYTE *ready; // rax
  char v44; // r8
  __int64 v45; // rcx
  bool v46; // al
  __int64 Number; // rcx
  struct _KPRCB *v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rsi
  unsigned int v51; // r15d
  int v52; // eax
  signed __int64 v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  struct _KPRCB *v58; // [rsp+28h] [rbp-39h] BYREF
  __int64 v59; // [rsp+30h] [rbp-31h] BYREF
  int v60; // [rsp+38h] [rbp-29h] BYREF
  volatile signed __int64 *v61; // [rsp+40h] [rbp-21h] BYREF
  __int64 v62; // [rsp+48h] [rbp-19h]
  unsigned __int64 v63; // [rsp+50h] [rbp-11h]
  struct _KPRCB *CurrentPrcb; // [rsp+58h] [rbp-9h]
  int v65; // [rsp+60h] [rbp-1h]
  _BYTE v66[24]; // [rsp+68h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  char v68; // [rsp+C8h] [rbp+67h]
  bool v69; // [rsp+D0h] [rbp+6Fh]
  bool v70; // [rsp+E0h] [rbp+7Fh]

  result = &retaddr;
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return result;
  v6 = (*(_DWORD *)(a3 + 1724) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 544) + 772LL) & 0x100000) != 0 )
    v6 = 0;
  v7 = v6 <= 2;
  if ( v6 < 2 )
  {
    if ( (struct _KTHREAD *)a3 == KeGetCurrentThread() && *(_DWORD *)(a3 + 1788) )
      v6 = 2;
    v7 = v6 <= 2;
  }
  if ( v7 )
    v6 = 2;
  v8 = 0;
  v9 = (a2 & 0xFF00) != 0;
  v10 = (a2 & 4) != 0;
  v70 = v9;
  v69 = v10;
  ExpLockResource(a1, v66);
  if ( v10 )
    *(_WORD *)(a1 + 26) |= 4u;
  if ( v9 )
  {
    v14 = *(char *)(a3 + 195);
    if ( v14 > *(unsigned __int8 *)(a1 + 27) )
    {
      v15 = *(_BYTE *)(a3 + 195);
      if ( (unsigned __int8)v14 >= 0xFu )
        v15 = 15;
      *(_BYTE *)(a1 + 27) = v15;
    }
  }
  v16 = *(_DWORD *)(a1 + 56);
  v17 = 1;
  v18 = *(_QWORD *)(a1 + 48);
  if ( (v16 & 2) != 0 )
  {
    v18 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v18 & 3) != 0 )
  {
    goto LABEL_101;
  }
  if ( !v18 )
    goto LABEL_101;
  if ( v10
    && (v16 & 1) == 0
    && ((*(_DWORD *)(*(_QWORD *)(v18 + 544) + 772LL) & 0x100000) != 0 || ((*(_DWORD *)(v18 + 1724) >> 9) & 7u) < 2) )
  {
    v8 = 4;
    PsBoostThreadIoEx(v18, 0, 0, 0LL);
    *(_DWORD *)(a1 + 56) |= 1u;
  }
  if ( v9 )
  {
    v11 = (unsigned int)*(char *)(v18 + 195);
    if ( *(unsigned __int8 *)(a1 + 27) > (int)v11 )
      v8 |= 0xFF00u;
  }
  if ( !v8 )
    goto LABEL_101;
  if ( ObpTraceFlags )
    ObpPushStackInfo(v18 - 48);
  ObpIncrPointerCount((volatile signed __int64 *)(v18 - 48));
  ExpUnlockResource(v19, (__int64)v66, v20, v21);
  if ( (v8 & 4) != 0 )
  {
    ++ExpResourceIoBoosted;
    IoBoostThreadIoPriority(v18, (unsigned int)v6);
  }
  if ( (v8 & 0xFF00) != 0 )
  {
    __incgsdword(0x63A8u);
    v24 = *(unsigned __int8 *)(a1 + 27);
    if ( *(_UNKNOWN **)(v18 + 544) != &KiInitialProcess )
    {
      v59 = 0LL;
      v68 = 0;
      CurrentIrql = KeGetCurrentIrql();
      v62 = CurrentIrql;
      __writecr8(2uLL);
      v26 = *(char *)(v18 + 195);
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v26 >= v24 )
        goto LABEL_99;
      v63 = *(_QWORD *)(v18 + 72);
      v60 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v60, v22, v23);
        while ( *(_QWORD *)(v18 + 64) );
      }
      v27 = *(char *)(v18 + 195);
      v28 = v27;
      if ( v27 >= v24 )
      {
LABEL_93:
        *(_QWORD *)(v18 + 64) = 0LL;
        if ( v68 )
        {
          KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v59, v62);
          goto LABEL_100;
        }
        LOBYTE(CurrentIrql) = v62;
LABEL_99:
        __writecr8((unsigned __int8)CurrentIrql);
        goto LABEL_100;
      }
      v68 = 1;
      v29 = v24 - v27;
      v30 = *(_DWORD *)(v18 + 1408);
      *(_BYTE *)(v18 + 564) += 16 * v29;
      if ( v30 )
      {
        _BitScanReverse((unsigned int *)&v31, v30);
        v65 = v31;
        if ( (char)v24 < v31 )
          LOBYTE(v24) = v31;
      }
      v32 = (char)v24;
      if ( v28 == (char)v24 )
      {
LABEL_90:
        v49 = *(_QWORD *)(v18 + 32);
        if ( v63 > v49 || v49 - v63 < (unsigned int)KiLockQuantumTarget )
          *(_QWORD *)(v18 + 32) = v63 + (unsigned int)KiLockQuantumTarget;
        goto LABEL_93;
      }
      v33 = KiAcquireThreadStateLock(v18, (__int64 *)&v58, (volatile signed __int32 **)&v61);
      v34 = (unsigned int)*(char *)(v18 + 195);
      v35 = *(char *)(v18 + 195);
      switch ( v33 )
      {
        case 2:
          v36 = v58;
          v39 = v58->NextThread == 0LL;
          if ( KiAbEnabled )
          {
            v40 = KeGetCurrentPrcb();
            if ( (char)v32 > *(char *)(v18 + 195) )
            {
              if ( *(_BYTE *)(v18 + 793) )
              {
                v34 = v18 + 1376;
                if ( *(_QWORD *)(v18 + 1376) == 1LL )
                {
                  p_AbPropagateBoostsList = &v40->AbPropagateBoostsList;
                  if ( v40 != (struct _KPRCB *)-25656LL )
                  {
                    *(_SINGLE_LIST_ENTRY *)v34 = (_SINGLE_LIST_ENTRY)p_AbPropagateBoostsList->Next;
                    p_AbPropagateBoostsList->Next = (struct _SINGLE_LIST_ENTRY *)v34;
                    _InterlockedIncrement16((volatile signed __int16 *)(v18 + 1416));
                    KiAbQueueAutoBoostDpc(v40);
                  }
                }
              }
            }
            v36 = v58;
          }
          *(_BYTE *)(v18 + 195) = v32;
          if ( v39 )
          {
            if ( (*(_BYTE *)(v18 + 2) & 4) != 0 )
              EffectivePriorityThread = KiQueryEffectivePriorityThread(v18, (__int64)v36);
            else
              EffectivePriorityThread = v32;
            *v36->PriorityState = EffectivePriorityThread;
          }
          if ( v32 < v35 && v39 )
          {
            v36 = v58;
            if ( *(_BYTE *)(v18 + 388) == 2 )
            {
              ready = (_BYTE *)KiSelectReadyThreadEx(v58, v18, 0);
              if ( ready )
              {
                KiUpdateThreadState((__int64)v36, ready, 3, 1);
                v44 = 1;
                goto LABEL_75;
              }
            }
            else if ( v58->ReadySummary >> (v32 + 1) )
            {
              *(_BYTE *)(v18 + 112) |= 0x10u;
            }
          }
          break;
        case 1:
          v36 = v58;
          KiRemoveThreadFromAnyReadyQueue(v58, v61, v18, (unsigned int)v35);
          KiUpdateThreadPriority(0LL, v18, v32, 0);
          KiPrepareReadyThreadForRescheduling(v18, (unsigned int)v32, &v59);
          break;
        case 3:
          v36 = v58;
          KiUpdateThreadPriority((__int64)v58, v18, v32, 1);
          if ( v32 < v35 )
          {
            v37 = (_BYTE *)KiSelectReadyThreadEx(v36, v18, 0);
            if ( v37 )
            {
              KiUpdateThreadState((__int64)v36, v37, 3, 1);
              v38 = v59;
              *(_BYTE *)(v18 + 388) = 7;
              *(_QWORD *)(v18 + 216) = v38;
              v59 = v18 + 216;
            }
          }
          break;
        default:
          KiUpdateThreadPriority(0LL, v18, v24, 0);
          v36 = v58;
          break;
      }
      v44 = 0;
LABEL_75:
      v45 = *(_QWORD *)(v18 + 104);
      if ( !v45 )
        goto LABEL_78;
      while ( (*(_DWORD *)(v45 + 4) & 2) != 0 )
      {
        v45 = *(_QWORD *)(v45 + 80);
        if ( !v45 )
          goto LABEL_78;
      }
      if ( (*(_DWORD *)(v18 + 120) & 0x100) != 0 || *(char *)(v18 + 195) >= 16 )
      {
LABEL_78:
        v46 = 0;
        v34 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(v18 + 588)] + 24768);
        if ( v34 )
          v46 = (v34 & *(_QWORD *)(v18 + 576)) == v34;
      }
      else
      {
        v46 = 0;
      }
      if ( v46 != ((*(_DWORD *)(v18 + 120) & 0x1000) != 0) )
      {
        _InterlockedXor((volatile signed __int32 *)(v18 + 120), 0x1000u);
        v36 = v58;
      }
      if ( v36 )
        _InterlockedAnd64((volatile signed __int64 *)&v36->PrcbLock, 0LL);
      if ( v61 )
        _InterlockedAnd64(v61, 0LL);
      if ( v44 )
      {
        LODWORD(v34) = KeGetPcr()->Prcb.Number;
        Number = v58->Number;
        if ( (_DWORD)v34 != (_DWORD)Number )
        {
          v48 = KeGetCurrentPrcb();
          LOBYTE(v34) = 2;
          ++v48->SynchCounters.IpiSendSoftwareInterruptCount;
          HalSendSoftwareInterrupt(Number, v34);
        }
      }
      v17 = 1;
      goto LABEL_90;
    }
  }
LABEL_100:
  v8 = 0;
  ObDereferenceObjectDeferDeleteWithTag((PVOID)v18, 0x746C6644u);
  ExpLockResource(a1, v66);
LABEL_101:
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v50 = *(_QWORD *)(a1 + 16);
    if ( v50 )
    {
      v51 = *(_DWORD *)(v50 + 8);
      if ( v51 > 1 )
      {
        do
        {
          v52 = *(_DWORD *)(v50 + 24);
          v50 += 16LL;
          v53 = *(_QWORD *)v50;
          if ( (v52 & 2) != 0 )
          {
            v53 &= 0xFFFFFFFFFFFFFFFCuLL;
          }
          else if ( (v53 & 3) != 0 )
          {
            goto LABEL_122;
          }
          if ( v53 )
          {
            if ( v69 && (v52 & 1) == 0 && (unsigned int)PsGetBaseIoPriorityThread(v53) < 2 )
            {
              v8 |= 4u;
              PsBoostThreadIoEx(v53, 0, 0, 0LL);
              *(_DWORD *)(v50 + 8) |= 1u;
            }
            if ( v70 )
            {
              v11 = (unsigned int)*(char *)(v53 + 195);
              if ( *(unsigned __int8 *)(a1 + 27) > (int)v11 )
                v8 |= 0xFF00u;
            }
            if ( v8 )
            {
              ObfReferenceObjectWithTag((PVOID)v53, 0x746C6644u);
              ExpUnlockResource(v54, (__int64)v66, v55, v56);
              if ( (v8 & 4) != 0 )
              {
                ++ExpResourceIoBoostedShared;
                IoBoostThreadIoPriority(v53, (unsigned int)v6);
              }
              if ( (v8 & 0xFF00) != 0 )
              {
                __incgsdword(0x63ACu);
                KeSetPriorityBoost(v53, *(unsigned __int8 *)(a1 + 27));
              }
              ObDereferenceObjectDeferDeleteWithTag((PVOID)v53, 0x746C6644u);
              v8 = 0;
              ExpLockResource(a1, v66);
              v57 = *(_QWORD *)(a1 + 16);
              if ( !v57 || *(_DWORD *)(v57 + 8) != v51 )
                return (_UNKNOWN **)ExpUnlockResource(v11, (__int64)v66, v12, v13);
            }
          }
LABEL_122:
          ++v17;
        }
        while ( v17 < v51 );
      }
    }
  }
  return (_UNKNOWN **)ExpUnlockResource(v11, (__int64)v66, v12, v13);
}

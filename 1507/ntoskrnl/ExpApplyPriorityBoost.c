/*
 * XREFs of ExpApplyPriorityBoost @ 0x14009CD90
 * Callers:
 *     ExpWaitForResource @ 0x14009C5E0 (ExpWaitForResource.c)
 *     ExConvertExclusiveToSharedLite @ 0x140103870 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x14009C1F0 (KiAcquireThreadStateLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpLockResource @ 0x14009D730 (ExpLockResource.c)
 *     KiSelectReadyThreadEx @ 0x1400A24B0 (KiSelectReadyThreadEx.c)
 *     ExpUnlockResource @ 0x1400C66F0 (ExpUnlockResource.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400D3438 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400D34E0 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KeSetPriorityBoost @ 0x1400D5D90 (KeSetPriorityBoost.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

_UNKNOWN **__fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  int v6; // r15d
  bool v7; // cc
  int v8; // edi
  bool v9; // r14
  bool v10; // si
  __int64 v11; // rcx
  int v12; // edx
  char v13; // al
  int v14; // eax
  unsigned int v15; // r12d
  ULONG_PTR v16; // rbx
  signed __int64 v17; // rax
  int v18; // esi
  __int64 CurrentIrql; // rcx
  int v20; // eax
  unsigned int v21; // edi
  int v22; // eax
  int v23; // r9d
  char v24; // cl
  unsigned int v25; // eax
  int v26; // r8d
  int v27; // edi
  char v28; // al
  unsigned __int64 v29; // rdx
  char v30; // r12
  signed int v31; // r15d
  struct _KPRCB *v32; // rcx
  _SINGLE_LIST_ENTRY *v33; // r8
  struct _KPRCB *v34; // rcx
  _SINGLE_LIST_ENTRY *v35; // r8
  bool v36; // zf
  char v37; // cl
  int v38; // eax
  char v39; // r8
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // r9
  char v43; // cl
  int v44; // eax
  char v45; // r8
  _QWORD *v46; // rax
  __int64 v47; // r14
  bool v48; // si
  struct _KPRCB *v49; // rcx
  _SINGLE_LIST_ENTRY *v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rdx
  int ThreadEffectiveRankNonZero; // eax
  int v54; // r8d
  __int64 ready; // rax
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rdx
  int v59; // eax
  int v60; // r8d
  struct _KPRCB *v61; // rcx
  struct _SINGLE_LIST_ENTRY *v62; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  __int64 v64; // rcx
  bool v65; // al
  __int64 v66; // rcx
  struct _KPRCB *v67; // rax
  unsigned __int64 v68; // rcx
  __int64 *v69; // rsi
  unsigned int v70; // r14d
  int v71; // eax
  __int64 v72; // rbx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // [rsp+38h] [rbp-39h] BYREF
  int v76; // [rsp+40h] [rbp-31h]
  _QWORD *v77; // [rsp+48h] [rbp-29h] BYREF
  volatile signed __int64 *v78; // [rsp+50h] [rbp-21h] BYREF
  __int64 v79; // [rsp+58h] [rbp-19h]
  unsigned __int64 v80; // [rsp+60h] [rbp-11h]
  struct _KPRCB *CurrentPrcb; // [rsp+68h] [rbp-9h]
  int v82; // [rsp+70h] [rbp-1h]
  _BYTE v83[24]; // [rsp+78h] [rbp+7h] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  char v85; // [rsp+D8h] [rbp+67h]
  bool v86; // [rsp+E0h] [rbp+6Fh]
  bool v87; // [rsp+F0h] [rbp+7Fh]

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
  v76 = v6;
  v9 = (a2 & 0xFF00) != 0;
  v10 = (a2 & 4) != 0;
  v87 = v9;
  v86 = v10;
  ExpLockResource(a1, v83);
  if ( v10 )
    *(_WORD *)(a1 + 26) |= 4u;
  if ( v9 )
  {
    v12 = *(char *)(a3 + 195);
    if ( v12 > *(unsigned __int8 *)(a1 + 27) )
    {
      v13 = *(_BYTE *)(a3 + 195);
      if ( (unsigned __int8)v12 >= 0xFu )
        v13 = 15;
      *(_BYTE *)(a1 + 27) = v13;
    }
  }
  v14 = *(_DWORD *)(a1 + 56);
  v15 = 1;
  v16 = *(_QWORD *)(a1 + 48);
  if ( (v14 & 2) != 0 )
  {
    v16 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v16 & 3) != 0 )
  {
    goto LABEL_151;
  }
  if ( !v16 )
    goto LABEL_151;
  if ( v10
    && (v14 & 1) == 0
    && ((*(_DWORD *)(*(_QWORD *)(v16 + 544) + 772LL) & 0x100000) != 0 || ((*(_DWORD *)(v16 + 1724) >> 9) & 7u) < 2) )
  {
    v8 = 4;
    PsBoostThreadIoEx(v16, 0LL, 0LL, 0LL);
    *(_DWORD *)(a1 + 56) |= 1u;
  }
  if ( v9 )
  {
    v11 = (unsigned int)*(char *)(v16 + 195);
    if ( *(unsigned __int8 *)(a1 + 27) > (int)v11 )
      v8 |= 0xFF00u;
  }
  if ( !v8 )
    goto LABEL_151;
  if ( ObpTraceFlags )
    ObpPushStackInfo(v16 - 48);
  v17 = _InterlockedIncrement64((volatile signed __int64 *)(v16 - 48));
  if ( v17 <= 1 )
    KeBugCheckEx(0x18u, 0LL, v16, 0x10uLL, v17);
  ExpUnlockResource(v11, v83);
  if ( (v8 & 4) != 0 )
  {
    ++ExpResourceIoBoosted;
    IoBoostThreadIoPriority(v16, (unsigned int)v6, 0LL);
  }
  if ( (v8 & 0xFF00) != 0 )
  {
    __incgsdword(0x63A8u);
    v18 = *(unsigned __int8 *)(a1 + 27);
    if ( *(_UNKNOWN **)(v16 + 544) != &KiInitialProcess )
    {
      v77 = 0LL;
      v85 = 0;
      CurrentIrql = KeGetCurrentIrql();
      v79 = CurrentIrql;
      __writecr8(2uLL);
      v20 = *(char *)(v16 + 195);
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v20 < v18 )
      {
        v21 = 0;
        v80 = *(_QWORD *)(v16 + 72);
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v21);
          }
          while ( *(_QWORD *)(v16 + 64) );
        }
        v22 = *(char *)(v16 + 195);
        v23 = v22;
        if ( v22 < v18 )
        {
          v85 = 1;
          v24 = v18 - v22;
          v25 = *(_DWORD *)(v16 + 1408);
          *(_BYTE *)(v16 + 564) += 16 * v24;
          if ( v25 )
          {
            _BitScanReverse((unsigned int *)&v26, v25);
            v82 = v26;
            if ( (char)v18 < v26 )
              LOBYTE(v18) = v26;
          }
          v27 = (char)v18;
          if ( v23 != (char)v18 )
          {
            v28 = KiAcquireThreadStateLock(v16, &v75, (volatile signed __int32 **)&v78);
            v29 = (unsigned int)*(char *)(v16 + 195);
            v30 = 0;
            v31 = *(char *)(v16 + 195);
            switch ( v28 )
            {
              case 1:
                KiRemoveThreadFromAnyReadyQueue(v75, v78, v16, (unsigned int)v31);
                if ( KiAbEnabled )
                {
                  v61 = KeGetCurrentPrcb();
                  if ( (char)v18 > *(char *)(v16 + 195) )
                  {
                    if ( *(_BYTE *)(v16 + 793) )
                    {
                      v62 = (struct _SINGLE_LIST_ENTRY *)(v16 + 1376);
                      if ( *(_QWORD *)(v16 + 1376) == 1LL )
                      {
                        p_AbPropagateBoostsList = &v61->AbPropagateBoostsList;
                        if ( v61 != (struct _KPRCB *)-25656LL )
                        {
                          v62->Next = p_AbPropagateBoostsList->Next;
                          p_AbPropagateBoostsList->Next = v62;
                          _InterlockedIncrement16((volatile signed __int16 *)(v16 + 1416));
                          KiAbQueueAutoBoostDpc(v61);
                        }
                      }
                    }
                  }
                }
                *(_BYTE *)(v16 + 195) = v18;
                KiPrepareReadyThreadForRescheduling(v16, (unsigned int)(char)v18, &v77);
                break;
              case 2:
                v47 = v75;
                v48 = *(_QWORD *)(v75 + 16) == 0LL;
                if ( KiAbEnabled )
                {
                  v49 = KeGetCurrentPrcb();
                  if ( (char)v27 > *(char *)(v16 + 195) )
                  {
                    if ( *(_BYTE *)(v16 + 793) )
                    {
                      v29 = v16 + 1376;
                      if ( *(_QWORD *)(v16 + 1376) == 1LL )
                      {
                        v50 = &v49->AbPropagateBoostsList;
                        if ( v49 != (struct _KPRCB *)-25656LL )
                        {
                          *(_SINGLE_LIST_ENTRY *)v29 = (_SINGLE_LIST_ENTRY)v50->Next;
                          v50->Next = (struct _SINGLE_LIST_ENTRY *)v29;
                          _InterlockedIncrement16((volatile signed __int16 *)(v16 + 1416));
                          KiAbQueueAutoBoostDpc(v49);
                        }
                      }
                    }
                  }
                }
                *(_BYTE *)(v16 + 195) = v27;
                if ( v48 )
                {
                  if ( (*(_BYTE *)(v16 + 2) & 4) != 0 )
                  {
                    if ( (char)v27 >= 16
                      || !*(_QWORD *)(v16 + 104)
                      || (v51 = *(_QWORD *)(v16 + 104)) == 0
                      || (v52 = *(unsigned int *)(v75 + 1624) + v51) == 0
                      || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v16, v52, 0LL),
                          v29 = (unsigned int)(v54 + 1),
                          !ThreadEffectiveRankNonZero) )
                    {
                      v29 = (unsigned int)*(char *)(v16 + 195);
                    }
                  }
                  else
                  {
                    v29 = (unsigned __int8)v27;
                  }
                  **(_BYTE **)(v75 + 56) = v29;
                }
                if ( v27 < v31 && v48 )
                {
                  if ( *(_BYTE *)(v16 + 388) == 2 )
                  {
                    ready = KiSelectReadyThreadEx(v75, v16, 0LL);
                    v56 = ready;
                    if ( ready )
                    {
                      if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
                      {
                        if ( *(char *)(ready + 195) >= 16
                          || !*(_QWORD *)(ready + 104)
                          || (v57 = *(_QWORD *)(ready + 104)) == 0
                          || (v58 = *(unsigned int *)(v75 + 1624) + v57) == 0
                          || (v59 = KiGetThreadEffectiveRankNonZero(ready, v58, 0LL), v29 = (unsigned int)(v60 + 1),
                                                                                      !v59) )
                        {
                          v29 = (unsigned int)*(char *)(v56 + 195);
                        }
                      }
                      else
                      {
                        v29 = *(unsigned __int8 *)(ready + 195);
                      }
                      v30 = 1;
                      **(_BYTE **)(v75 + 56) = v29;
                      *(_QWORD *)(v47 + 16) = v56;
                      *(_BYTE *)(v56 + 388) = 3;
                    }
                  }
                  else
                  {
                    v29 = (unsigned int)(*(_DWORD *)(v75 + 22680) >> (v27 + 1));
                    if ( (_DWORD)v29 )
                      *(_BYTE *)(v16 + 112) |= 0x10u;
                  }
                }
                break;
              case 3:
                if ( KiAbEnabled )
                {
                  v34 = KeGetCurrentPrcb();
                  if ( (char)v18 > *(char *)(v16 + 195) )
                  {
                    if ( *(_BYTE *)(v16 + 793) )
                    {
                      v29 = v16 + 1376;
                      if ( *(_QWORD *)(v16 + 1376) == 1LL )
                      {
                        v35 = &v34->AbPropagateBoostsList;
                        if ( v34 != (struct _KPRCB *)-25656LL )
                        {
                          *(_SINGLE_LIST_ENTRY *)v29 = (_SINGLE_LIST_ENTRY)v35->Next;
                          v35->Next = (struct _SINGLE_LIST_ENTRY *)v29;
                          _InterlockedIncrement16((volatile signed __int16 *)(v16 + 1416));
                          KiAbQueueAutoBoostDpc(v34);
                        }
                      }
                    }
                  }
                }
                v36 = (*(_BYTE *)(v16 + 2) & 4) == 0;
                *(_BYTE *)(v16 + 195) = v18;
                if ( v36 )
                {
                  v37 = v18;
                }
                else if ( (char)v18 >= 16
                       || !*(_QWORD *)(v16 + 104)
                       || (v29 = *(_QWORD *)(v16 + 104)) == 0
                       || (v29 += *(unsigned int *)(v75 + 1624)) == 0
                       || (v38 = KiGetThreadEffectiveRankNonZero(v16, v29, 0LL), v37 = v39 + 1, !v38) )
                {
                  v37 = *(_BYTE *)(v16 + 195);
                }
                v40 = v75;
                **(_BYTE **)(v75 + 56) = v37;
                if ( v27 < v31 )
                {
                  v41 = KiSelectReadyThreadEx(v40, v16, 0LL);
                  v42 = v41;
                  if ( v41 )
                  {
                    if ( (*(_BYTE *)(v41 + 2) & 4) != 0 )
                    {
                      if ( *(char *)(v41 + 195) >= 16
                        || !*(_QWORD *)(v41 + 104)
                        || (v29 = *(_QWORD *)(v41 + 104)) == 0
                        || (v29 += *(unsigned int *)(v75 + 1624)) == 0
                        || (v44 = KiGetThreadEffectiveRankNonZero(v41, v29, 0LL), v43 = v45 + 1, !v44) )
                      {
                        v43 = *(_BYTE *)(v42 + 195);
                      }
                    }
                    else
                    {
                      v43 = *(_BYTE *)(v41 + 195);
                    }
                    **(_BYTE **)(v40 + 56) = v43;
                    *(_QWORD *)(v75 + 16) = v42;
                    *(_BYTE *)(v42 + 388) = 3;
                    v46 = v77;
                    *(_BYTE *)(v16 + 388) = 7;
                    *(_QWORD *)(v16 + 216) = v46;
                    v77 = (_QWORD *)(v16 + 216);
                  }
                }
                break;
              default:
                if ( KiAbEnabled )
                {
                  v32 = KeGetCurrentPrcb();
                  if ( (char)v18 > *(char *)(v16 + 195) )
                  {
                    if ( *(_BYTE *)(v16 + 793) )
                    {
                      v29 = v16 + 1376;
                      if ( *(_QWORD *)(v16 + 1376) == 1LL )
                      {
                        v33 = &v32->AbPropagateBoostsList;
                        if ( v32 != (struct _KPRCB *)-25656LL )
                        {
                          *(_SINGLE_LIST_ENTRY *)v29 = (_SINGLE_LIST_ENTRY)v33->Next;
                          v33->Next = (struct _SINGLE_LIST_ENTRY *)v29;
                          _InterlockedIncrement16((volatile signed __int16 *)(v16 + 1416));
                          KiAbQueueAutoBoostDpc(v32);
                        }
                      }
                    }
                  }
                }
                *(_BYTE *)(v16 + 195) = v18;
                break;
            }
            v64 = *(_QWORD *)(v16 + 104);
            if ( !v64 )
              goto LABEL_128;
            while ( (*(_DWORD *)(v64 + 4) & 2) != 0 )
            {
              v64 = *(_QWORD *)(v64 + 80);
              if ( !v64 )
                goto LABEL_128;
            }
            if ( (*(_DWORD *)(v16 + 120) & 0x100) != 0 || *(char *)(v16 + 195) >= 16 )
            {
LABEL_128:
              v65 = 0;
              v29 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(v16 + 588)] + 24768);
              if ( v29 )
                v65 = (v29 & *(_QWORD *)(v16 + 576)) == v29;
            }
            else
            {
              v65 = 0;
            }
            if ( v65 != ((*(_DWORD *)(v16 + 120) & 0x1000) != 0) )
              _InterlockedXor((volatile signed __int32 *)(v16 + 120), 0x1000u);
            if ( v75 )
              _InterlockedAnd64((volatile signed __int64 *)(v75 + 48), 0LL);
            if ( v78 )
              _InterlockedAnd64(v78, 0LL);
            if ( v30 )
            {
              LODWORD(v29) = KeGetPcr()->Prcb.Number;
              v66 = *(unsigned int *)(v75 + 36);
              if ( (_DWORD)v29 != (_DWORD)v66 )
              {
                v67 = KeGetCurrentPrcb();
                LOBYTE(v29) = 2;
                ++v67->SynchCounters.IpiSendSoftwareInterruptCount;
                HalSendSoftwareInterrupt(v66, v29);
              }
            }
            v6 = v76;
            v15 = 1;
          }
          v68 = *(_QWORD *)(v16 + 32);
          if ( v80 > v68 || v68 - v80 < (unsigned int)KiLockQuantumTarget )
            *(_QWORD *)(v16 + 32) = v80 + (unsigned int)KiLockQuantumTarget;
        }
        *(_QWORD *)(v16 + 64) = 0LL;
        if ( v85 )
        {
          KiProcessDeferredReadyList((__int64)CurrentPrcb, &v77, v79);
          goto LABEL_150;
        }
        LOBYTE(CurrentIrql) = v79;
      }
      __writecr8((unsigned __int8)CurrentIrql);
    }
  }
LABEL_150:
  v8 = 0;
  ObDereferenceObjectDeferDeleteWithTag((PVOID)v16, 0x746C6644u);
  ExpLockResource(a1, v83);
LABEL_151:
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v69 = *(__int64 **)(a1 + 16);
    if ( v69 )
    {
      v70 = *((_DWORD *)v69 + 2);
      if ( v70 > 1 )
      {
        do
        {
          v71 = *((_DWORD *)v69 + 6);
          v69 += 2;
          v72 = *v69;
          if ( (v71 & 2) != 0 )
          {
            v72 &= 0xFFFFFFFFFFFFFFFCuLL;
          }
          else if ( (v72 & 3) != 0 )
          {
            goto LABEL_173;
          }
          if ( v72 )
          {
            if ( v86
              && (v71 & 1) == 0
              && ((*(_DWORD *)(*(_QWORD *)(v72 + 544) + 772LL) & 0x100000) != 0
               || ((*(_DWORD *)(v72 + 1724) >> 9) & 7u) < 2) )
            {
              v8 |= 4u;
              PsBoostThreadIoEx(v72, 0LL, 0LL, 0LL);
              *((_DWORD *)v69 + 2) |= 1u;
            }
            if ( v87 )
            {
              v11 = (unsigned int)*(char *)(v72 + 195);
              if ( *(unsigned __int8 *)(a1 + 27) > (int)v11 )
                v8 |= 0xFF00u;
            }
            if ( v8 )
            {
              ObfReferenceObjectWithTag((PVOID)v72, 0x746C6644u);
              ExpUnlockResource(v73, v83);
              if ( (v8 & 4) != 0 )
              {
                ++ExpResourceIoBoostedShared;
                IoBoostThreadIoPriority(v72, (unsigned int)v6, 0LL);
              }
              if ( (v8 & 0xFF00) != 0 )
              {
                __incgsdword(0x63ACu);
                KeSetPriorityBoost(v72, *(unsigned __int8 *)(a1 + 27));
              }
              ObDereferenceObjectDeferDeleteWithTag((PVOID)v72, 0x746C6644u);
              v8 = 0;
              ExpLockResource(a1, v83);
              v74 = *(_QWORD *)(a1 + 16);
              if ( !v74 || *(_DWORD *)(v74 + 8) != v70 )
                return (_UNKNOWN **)ExpUnlockResource(v11, v83);
            }
          }
LABEL_173:
          ++v15;
        }
        while ( v15 < v70 );
      }
    }
  }
  return (_UNKNOWN **)ExpUnlockResource(v11, v83);
}

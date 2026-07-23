/*
 * XREFs of ExpApplyPriorityBoost @ 0x14005CE50
 * Callers:
 *     ExpWaitForResource @ 0x14005C9B0 (ExpWaitForResource.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400A4198 (ExConvertExclusiveToSharedLite.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     ExpLockResource @ 0x14005D6E0 (ExpLockResource.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     KiSelectReadyThreadEx @ 0x14005DAB0 (KiSelectReadyThreadEx.c)
 *     ExpUnlockResource @ 0x140066870 (ExpUnlockResource.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     KeSetPriorityBoost @ 0x14009110C (KeSetPriorityBoost.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiUpdateThreadPriority @ 0x140091508 (KiUpdateThreadPriority.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1400915B8 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1400A8EC8 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiAbThreadInsertList @ 0x1400AB258 (KiAbThreadInsertList.c)
 *     ExGetExtensionTable @ 0x1400B4CBC (ExGetExtensionTable.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     ObpIncrPointerCount @ 0x1400CF570 (ObpIncrPointerCount.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x1400D1430 (KiAcquireThreadStateLock.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 */

_UNKNOWN **__fastcall ExpApplyPriorityBoost(__int64 a1, __int16 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  int v6; // edi
  bool v7; // cc
  bool v8; // r13
  int v9; // r15d
  char v10; // r12
  bool v11; // r14
  __int64 v12; // rcx
  char v13; // r12
  int v14; // edx
  char v15; // al
  int v16; // eax
  ULONG_PTR v17; // rsi
  signed __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  char v24; // cl
  unsigned int v25; // eax
  unsigned int v26; // r13d
  char v27; // al
  __int64 v28; // r9
  unsigned int v29; // r8d
  struct _KPRCB *v30; // rcx
  __int64 v31; // r15
  char EffectivePriorityThread; // al
  char v33; // r8
  bool v34; // al
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // rsi
  unsigned int v38; // r13d
  int v39; // eax
  __int64 v40; // r15
  unsigned int v41; // eax
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int16 v45; // ax
  struct _SINGLE_LIST_ENTRY *v46; // r10
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  struct _KPRCB *CurrentPrcb; // r13
  int v49; // ecx
  __int64 ExtensionTable; // rax
  __int64 v51; // rax
  __int64 v52; // r9
  ULONG_PTR v53; // rax
  __int64 ready; // rax
  __int64 v55; // r9
  __int64 v56; // rcx
  struct _KPRCB *v57; // rax
  __int64 v58; // rax
  char v59; // [rsp+38h] [rbp-39h]
  int v60; // [rsp+3Ch] [rbp-35h]
  unsigned int v61; // [rsp+3Ch] [rbp-35h]
  __int64 v62; // [rsp+40h] [rbp-31h] BYREF
  ULONG_PTR v63; // [rsp+48h] [rbp-29h] BYREF
  __int64 CurrentIrql; // [rsp+50h] [rbp-21h]
  int v65; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int64 v66; // [rsp+60h] [rbp-11h]
  struct _KPRCB *v67; // [rsp+68h] [rbp-9h]
  volatile signed __int64 *v68; // [rsp+70h] [rbp-1h] BYREF
  int v69; // [rsp+78h] [rbp+7h]
  _BYTE v70[16]; // [rsp+80h] [rbp+Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  int v72; // [rsp+D8h] [rbp+67h]
  char v73; // [rsp+D8h] [rbp+67h]
  bool v74; // [rsp+F0h] [rbp+7Fh]

  result = &retaddr;
  if ( (*(_BYTE *)(a1 + 26) & 8) != 0 )
    return result;
  v6 = (*(_DWORD *)(a3 + 1728) >> 9) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a3 + 544) + 772LL) & 0x100000) != 0 )
    v6 = 0;
  v7 = v6 <= 2;
  if ( v6 < 2 )
  {
    if ( (struct _KTHREAD *)a3 == KeGetCurrentThread() && *(_DWORD *)(a3 + 1784) )
      v6 = 2;
    v7 = v6 <= 2;
  }
  if ( v7 )
    v6 = 2;
  v8 = (a2 & 0xFF00) != 0;
  v9 = 0;
  v10 = (unsigned __int8)a2 >> 2;
  v72 = 0;
  v74 = v8;
  v11 = (a2 & 2) != 0;
  ExpLockResource(a1, v70);
  v13 = v10 & 1;
  if ( v13 )
    *(_WORD *)(a1 + 26) |= 4u;
  if ( v11 )
    *(_WORD *)(a1 + 26) |= 2u;
  if ( v8 )
  {
    v14 = *(char *)(a3 + 195);
    v12 = *(unsigned __int8 *)(a1 + 27);
    if ( v14 > (int)v12 )
    {
      if ( (unsigned __int8)v14 >= 0xFu )
        v15 = 15;
      else
        v15 = *(_BYTE *)(a3 + 195);
      *(_BYTE *)(a1 + 27) = v15;
    }
  }
  v16 = *(_DWORD *)(a1 + 56);
  v17 = *(_QWORD *)(a1 + 48);
  if ( (v16 & 2) != 0 )
  {
    v17 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v17 & 3) != 0 )
  {
    goto LABEL_41;
  }
  if ( !v17 )
    goto LABEL_41;
  if ( v13
    && (v16 & 1) == 0
    && ((*(_DWORD *)(*(_QWORD *)(v17 + 544) + 772LL) & 0x100000) != 0 || ((*(_DWORD *)(v17 + 1728) >> 9) & 7u) < 2) )
  {
    v9 = 4;
    v72 = 4;
    PsBoostThreadIoEx(v17, 0, 0, 0LL);
    *(_DWORD *)(a1 + 56) |= 1u;
  }
  if ( v11 && (*(_DWORD *)(a1 + 56) & 4) == 0 )
  {
    v9 |= 2u;
    v72 = v9;
    if ( _InterlockedIncrement((volatile signed __int32 *)(v17 + 1788)) == 1 && *(_BYTE *)(v17 + 793) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (unsigned int)KiAbThreadInsertList(v17, &CurrentPrcb->AbPropagateBoostsList, v17 + 1376) )
        KiAbQueueAutoBoostDpc(CurrentPrcb);
      __writecr8((unsigned __int8)CurrentIrql);
      v8 = v74;
    }
    *(_DWORD *)(a1 + 56) |= 4u;
  }
  if ( v8 )
  {
    v12 = (unsigned int)*(char *)(v17 + 195);
    if ( *(unsigned __int8 *)(a1 + 27) > (int)v12 )
    {
      v9 |= 0xFF00u;
      v72 = v9;
    }
  }
  if ( !v9 )
    goto LABEL_41;
  if ( ObpTraceFlags )
    ObpPushStackInfo(v17 - 48);
  v18 = _InterlockedIncrement64((volatile signed __int64 *)(v17 - 48));
  if ( v18 <= 1 )
    KeBugCheckEx(0x18u, 0LL, v17, 0x10uLL, v18);
  ExpUnlockResource(v12, v70);
  if ( (v9 & 4) != 0 )
  {
    ++ExpResourceIoBoosted;
    IoBoostThreadIoPriority(v17, (unsigned int)v6, 0LL);
  }
  if ( (v9 & 2) != 0 )
  {
    if ( *(_DWORD *)(v17 + 1792) )
    {
      ExtensionTable = ExGetExtensionTable(IopIoRateExtensionHost);
      if ( ExtensionTable )
      {
        (*(void (__fastcall **)(ULONG_PTR))(ExtensionTable + 16))(v17);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
      }
    }
  }
  if ( (v9 & 0xFF00) != 0 )
  {
    __incgsdword(0x6428u);
    v19 = *(unsigned __int8 *)(a1 + 27);
    if ( *(_UNKNOWN **)(v17 + 544) != &KiInitialProcess )
    {
      v63 = 0LL;
      v59 = 0;
      v20 = KeGetCurrentIrql();
      CurrentIrql = v20;
      __writecr8(2uLL);
      v21 = *(char *)(v17 + 195);
      v67 = KeGetCurrentPrcb();
      if ( v21 >= v19 )
        goto LABEL_122;
      v66 = *(_QWORD *)(v17 + 72);
      v65 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 64), 0LL) )
      {
        do
          KeYieldProcessorEx(&v65);
        while ( *(_QWORD *)(v17 + 64) );
      }
      v22 = *(char *)(v17 + 195);
      v23 = v22;
      if ( v22 >= v19 )
      {
LABEL_73:
        *(_QWORD *)(v17 + 64) = 0LL;
        if ( v59 )
        {
          KiProcessDeferredReadyList(v67, &v63, (unsigned __int8)CurrentIrql);
          goto LABEL_40;
        }
        LOBYTE(v20) = CurrentIrql;
LABEL_122:
        __writecr8((unsigned __int8)v20);
        goto LABEL_40;
      }
      v59 = 1;
      v24 = v19 - v22;
      v25 = *(_DWORD *)(v17 + 1408);
      *(_BYTE *)(v17 + 564) += 16 * v24;
      if ( v25 )
      {
        _BitScanReverse((unsigned int *)&v49, v25);
        v69 = v49;
        if ( (char)v19 < v49 )
          LOBYTE(v19) = v49;
      }
      v26 = (char)v19;
      if ( v23 == (char)v19 )
      {
LABEL_70:
        v36 = *(_QWORD *)(v17 + 32);
        if ( v66 > v36 || v36 - v66 < (unsigned int)KiLockQuantumTarget )
          *(_QWORD *)(v17 + 32) = v66 + (unsigned int)KiLockQuantumTarget;
        goto LABEL_73;
      }
      v27 = KiAcquireThreadStateLock(v17, &v62, &v68);
      LOBYTE(v28) = 1;
      v29 = *(char *)(v17 + 195);
      v73 = 1;
      v60 = v29;
      switch ( v27 )
      {
        case 2:
          if ( *(_QWORD *)(v62 + 16) )
          {
            LOBYTE(v28) = 0;
            v73 = 0;
          }
          v30 = KeGetCurrentPrcb();
          if ( (char)v19 > *(char *)(v17 + 195) )
          {
            if ( *(_BYTE *)(v17 + 793) )
            {
              v46 = (struct _SINGLE_LIST_ENTRY *)(v17 + 1376);
              if ( *(_QWORD *)(v17 + 1376) == 1LL )
              {
                p_AbPropagateBoostsList = &v30->AbPropagateBoostsList;
                if ( v30 != (struct _KPRCB *)-25784LL )
                {
                  v46->Next = p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = v46;
                  _InterlockedIncrement16((volatile signed __int16 *)(v17 + 1420));
                  KiAbQueueAutoBoostDpc(v30);
                  v29 = v60;
                  LOBYTE(v28) = v73;
                }
              }
            }
          }
          v31 = v62;
          *(_BYTE *)(v17 + 195) = v26;
          if ( (_BYTE)v28 )
          {
            if ( (*(_BYTE *)(v17 + 2) & 4) != 0 )
            {
              EffectivePriorityThread = KiQueryEffectivePriorityThread(v17, v31);
              LOBYTE(v28) = v73;
            }
            else
            {
              EffectivePriorityThread = v26;
            }
            v29 = v60;
            **(_BYTE **)(v31 + 56) = EffectivePriorityThread;
          }
          if ( (int)v26 < (int)v29 && (_BYTE)v28 )
          {
            v31 = v62;
            if ( *(_BYTE *)(v17 + 388) == 2 )
            {
              ready = KiSelectReadyThreadEx(v62, v17, 0LL);
              if ( ready )
              {
                LOBYTE(v55) = 1;
                KiUpdateThreadState(v31, ready, 3LL, v55);
                v33 = 1;
                goto LABEL_61;
              }
            }
            else if ( *(_DWORD *)(v62 + 22680) >> (v26 + 1) )
            {
              *(_BYTE *)(v17 + 112) |= 0x10u;
            }
          }
          break;
        case 1:
          v31 = v62;
          KiRemoveThreadFromAnyReadyQueue(v62, v68, v17, v29);
          KiUpdateThreadPriority(0LL, v17, v26, 0LL);
          KiPrepareReadyThreadForRescheduling(v17, v26, &v63);
          break;
        case 3:
          v31 = v62;
          LOBYTE(v28) = 1;
          KiUpdateThreadPriority(v62, v17, v26, v28);
          if ( (int)v26 < v60 )
          {
            v51 = KiSelectReadyThreadEx(v31, v17, 0LL);
            if ( v51 )
            {
              LOBYTE(v52) = 1;
              KiUpdateThreadState(v31, v51, 3LL, v52);
              v53 = v63;
              *(_BYTE *)(v17 + 388) = 7;
              *(_QWORD *)(v17 + 216) = v53;
              v63 = v17 + 216;
            }
          }
          break;
        default:
          KiUpdateThreadPriority(0LL, v17, (unsigned int)(char)v19, 0LL);
          v31 = v62;
          break;
      }
      v33 = 0;
LABEL_61:
      v34 = 0;
      v35 = *(_QWORD *)(KiProcessorBlock[*(unsigned int *)(v17 + 588)] + 24896);
      if ( v35 )
        v34 = (v35 & *(_QWORD *)(v17 + 576)) == v35;
      if ( v34 != ((*(_DWORD *)(v17 + 120) & 0x1000) != 0) )
      {
        _InterlockedXor((volatile signed __int32 *)(v17 + 120), 0x1000u);
        v31 = v62;
      }
      if ( v31 )
        _InterlockedAnd64((volatile signed __int64 *)(v31 + 48), 0LL);
      if ( v68 )
        _InterlockedAnd64(v68, 0LL);
      if ( v33 )
      {
        LODWORD(v35) = KeGetPcr()->Prcb.Number;
        v56 = *(unsigned int *)(v62 + 36);
        if ( (_DWORD)v35 != (_DWORD)v56 )
        {
          v57 = KeGetCurrentPrcb();
          LOBYTE(v35) = 2;
          ++v57->SynchCounters.IpiSendSoftwareInterruptCount;
          HalSendSoftwareInterrupt(v56, v35);
        }
      }
      goto LABEL_70;
    }
  }
LABEL_40:
  v72 = 0;
  ObDereferenceObjectDeferDelete((PVOID)v17);
  ExpLockResource(a1, v70);
LABEL_41:
  if ( *(char *)(a1 + 26) >= 0 )
  {
    v37 = *(_QWORD *)(a1 + 16);
    if ( v37 )
    {
      v38 = 1;
      v61 = *(_DWORD *)(v37 + 8);
      if ( v61 > 1 )
      {
        do
        {
          v39 = *(_DWORD *)(v37 + 24);
          v37 += 16LL;
          v40 = *(_QWORD *)v37;
          if ( (v39 & 2) != 0 )
          {
            v40 &= 0xFFFFFFFFFFFFFFFCuLL;
          }
          else if ( (v40 & 3) != 0 )
          {
            goto LABEL_80;
          }
          if ( !v40 )
            goto LABEL_80;
          if ( v13
            && (v39 & 1) == 0
            && ((*(_DWORD *)(*(_QWORD *)(v40 + 544) + 772LL) & 0x100000) != 0
             || ((*(_DWORD *)(v40 + 1728) >> 9) & 7u) < 2) )
          {
            v72 |= 4u;
            PsBoostThreadIoEx(v40, 0, 0, 0LL);
            *(_DWORD *)(v37 + 8) |= 1u;
          }
          if ( v11 && (*(_DWORD *)(v37 + 8) & 4) == 0 )
          {
            v72 |= 2u;
            if ( _InterlockedIncrement((volatile signed __int32 *)(v40 + 1788)) == 1 && *(_BYTE *)(v40 + 793) )
            {
              v66 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v67 = KeGetCurrentPrcb();
              if ( (unsigned int)KiAbThreadInsertList(v40, &v67->AbPropagateBoostsList, v40 + 1376) )
                KiAbQueueAutoBoostDpc(v67);
              __writecr8((unsigned __int8)v66);
            }
            *(_DWORD *)(v37 + 8) |= 4u;
          }
          if ( v74 )
          {
            v12 = (unsigned int)*(char *)(v40 + 195);
            v42 = v72;
            if ( *(unsigned __int8 *)(a1 + 27) > (int)v12 )
            {
              v42 = v72 | 0xFF00;
              v72 |= 0xFF00u;
            }
          }
          else
          {
            v42 = v72;
          }
          if ( !v42 )
          {
LABEL_80:
            v41 = v61;
            goto LABEL_81;
          }
          v43 = v40 - 48;
          if ( ObpTraceFlags )
          {
            ObpPushStackInfo(v40 - 48);
            v43 = v40 - 48;
          }
          ObpIncrPointerCount(v43);
          ExpUnlockResource(v44, v70);
          v45 = v72;
          if ( (v72 & 4) != 0 )
          {
            ++ExpResourceIoBoostedShared;
            IoBoostThreadIoPriority(v40, (unsigned int)v6, 0LL);
            v45 = v72;
          }
          if ( (v45 & 2) != 0 && *(_DWORD *)(v40 + 1792) )
          {
            v58 = ExGetExtensionTable(IopIoRateExtensionHost);
            if ( v58 )
            {
              (*(void (__fastcall **)(__int64))(v58 + 16))(v40);
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)(IopIoRateExtensionHost + 64));
            }
            v45 = v72;
          }
          if ( (v45 & 0xFF00) != 0 )
          {
            __incgsdword(0x642Cu);
            KeSetPriorityBoost(v40, *(unsigned __int8 *)(a1 + 27));
          }
          ObDereferenceObjectDeferDelete((PVOID)v40);
          v72 = 0;
          ExpLockResource(a1, v70);
          v12 = *(_QWORD *)(a1 + 16);
          if ( !v12 )
            return (_UNKNOWN **)ExpUnlockResource(v12, v70);
          v41 = v61;
          if ( *(_DWORD *)(v12 + 8) != v61 )
            return (_UNKNOWN **)ExpUnlockResource(v12, v70);
LABEL_81:
          ++v38;
        }
        while ( v38 < v41 );
      }
    }
  }
  return (_UNKNOWN **)ExpUnlockResource(v12, v70);
}

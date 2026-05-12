/*
 * XREFs of RaidStartIoPacket @ 0x1C00037C0
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0002F20 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0003080 (RaUnitScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000999C (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaidInsertDeviceQueue @ 0x1C0003D40 (RaidInsertDeviceQueue.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00047F4 (RaUnitReleaseRemoveLock.c)
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     RaidCheckPerProcessorCompletions @ 0x1C0007380 (RaidCheckPerProcessorCompletions.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00077E0 (RaidAdapterPoFxActivateComponent.c)
 *     RaUnitRequestPowerUp @ 0x1C0008EC4 (RaUnitRequestPowerUp.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaAllocateIoResource @ 0x1C0013348 (RaAllocateIoResource.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015EC0 (memset.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00286B8 (RaidGetQosEntryForDeviceEntry.c)
 *     RaidQosSupportedCommand @ 0x1C0028D70 (RaidQosSupportedCommand.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0036568 (RaAttemptHighWaterMarkIncrease.c)
 */

__int64 __fastcall RaidStartIoPacket(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v7; // r14
  bool v8; // r12
  int v9; // ebx
  unsigned __int8 v10; // cl
  int v11; // eax
  __int64 v12; // r13
  unsigned __int8 v13; // bl
  unsigned __int64 v14; // r13
  int Number; // r9d
  char v16; // r12
  __int64 v17; // rax
  char v18; // bl
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned int v21; // eax
  KSPIN_LOCK *v22; // r14
  char inserted; // r14
  _QWORD *v24; // r13
  __int64 v25; // rbx
  int v26; // ecx
  PSLIST_ENTRY IoResource; // rcx
  PSLIST_ENTRY v28; // rbx
  void *v29; // rax
  size_t v30; // rdx
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r13
  _QWORD *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rbx
  _QWORD *Pool; // rax
  unsigned int v41; // r8d
  unsigned int v42; // edx
  PSLIST_ENTRY v43; // rax
  _QWORD *v44; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v46; // rbx
  _QWORD *v47; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-49h] BYREF
  int v49; // [rsp+34h] [rbp-45h]
  __int64 v50; // [rsp+38h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE v51; // [rsp+40h] [rbp-39h] BYREF
  char v52[8]; // [rsp+58h] [rbp-21h] BYREF
  PSLIST_ENTRY v53; // [rsp+60h] [rbp-19h]
  PSLIST_ENTRY v54; // [rsp+68h] [rbp-11h]
  PSLIST_ENTRY v55; // [rsp+70h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-1h] BYREF
  char v57; // [rsp+E0h] [rbp+67h]
  __int64 v58; // [rsp+E8h] [rbp+6Fh]
  KIRQL v59; // [rsp+E8h] [rbp+6Fh]
  char v61; // [rsp+F8h] [rbp+7Fh]

  v3 = *(_QWORD *)(a2 + 184);
  LODWORD(v4) = 0;
  v50 = v3;
  v7 = *(_QWORD *)(v3 + 8);
  v8 = *(_BYTE *)(a1 + 2528) && (unsigned __int8)RaidQosSupportedCommand(*(_QWORD *)(v3 + 8));
  if ( *(_BYTE *)(v7 + 2) == 40 )
    v9 = *(_DWORD *)(v7 + 24);
  else
    v9 = *(_DWORD *)(v7 + 12);
  if ( v8 && (*(_BYTE *)(a1 + 146) & 2) != 0 )
  {
    RaUnitReleaseRemoveLock(a1);
    *(_BYTE *)(v7 + 3) = *(_BYTE *)(v7 + 3) & 0x80 | 0x38;
    RaidCompleteRequestEx((PIRP)a2, 0, 0xC000050A);
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1784));
    return 1LL;
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  v10 = *(_BYTE *)(v7 + 2);
  if ( v10 == 40 )
  {
    *(struct _PROCESSOR_NUMBER *)(v7 + 96) = ProcNumber;
  }
  else
  {
    if ( !*(_QWORD *)(v7 + 40) )
      *(_QWORD *)(v7 + 40) = *(_QWORD *)(v7 + 56);
    *(struct _PROCESSOR_NUMBER *)(v7 + 56) = ProcNumber;
  }
  if ( v10 == 40 )
    v11 = *(_DWORD *)(v7 + 20);
  else
    v11 = v10;
  if ( v11 )
  {
    switch ( v11 )
    {
      case 2:
      case 7:
      case 9:
      case 18:
      case 19:
      case 23:
      case 32:
      case 36:
      case 37:
        break;
      case 8:
        if ( !*(_BYTE *)(*(_QWORD *)(a1 + 24) + 387LL) )
          goto LABEL_14;
        break;
      default:
        goto LABEL_14;
    }
  }
  if ( (v9 & 0x100800) == 0 )
    goto LABEL_20;
LABEL_14:
  a3 |= 8u;
  *(_QWORD *)(v3 + 16) = 0LL;
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
    goto LABEL_27;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5088LL) )
  {
LABEL_20:
    if ( KeGetCurrentIrql() >= 2u || *(char *)(a1 + 144) < 0 || (*(_BYTE *)(a1 + 145) & 1) != 0 )
    {
      v35 = *(_QWORD *)(a1 + 24);
      v13 = 0;
      v58 = *(_QWORD *)(a2 + 184);
      v57 = 0;
      if ( *(_QWORD *)(v35 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v35, 0LL, 2LL);
        v13 = 2;
        v57 = 2;
      }
      if ( *(char *)(a1 + 145) >= 0
        || !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448)) )
      {
        goto LABEL_26;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1456) + 96LL));
      if ( *(char *)(v35 + 108) < 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1744));
        if ( (*(_BYTE *)(v35 + 109) & 1) != 0 )
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1752));
      }
      v38 = *(_QWORD *)(a1 + 1456);
      if ( (*(_DWORD *)(v38 + 148) & 1) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v38 + 144));
      PoFxActivateComponent(**(_QWORD **)(a1 + 1456), 0LL, 2LL);
      v13 = v57 | 1;
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 24);
      v13 = 0;
      v58 = *(_QWORD *)(a2 + 184);
      v61 = 0;
      if ( *(_QWORD *)(v12 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v12, 0LL, 1LL);
        v13 = 2;
        v61 = 2;
      }
      if ( *(char *)(a1 + 145) >= 0
        || !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448)) )
      {
        goto LABEL_26;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1456) + 96LL));
      if ( *(char *)(v12 + 108) < 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1744));
        if ( (*(_BYTE *)(v12 + 109) & 1) != 0 )
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1752));
      }
      v37 = *(_QWORD *)(a1 + 1456);
      if ( (*(_DWORD *)(v37 + 148) & 1) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v37 + 144));
      PoFxActivateComponent(**(_QWORD **)(a1 + 1456), 0LL, 1LL);
      v13 = v61 | 1;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
LABEL_26:
    *(_QWORD *)(v58 + 16) = v13 & 1 | (unsigned __int64)(2 * ((v13 >> 1) & 1));
  }
LABEL_27:
  v14 = -1LL;
  if ( v8 )
  {
    v39 = 0LL;
    if ( *(_DWORD *)(a1 + 2552) != -1 || *(_DWORD *)(a1 + 2536) != -1 || *(_DWORD *)(a1 + 2540) )
    {
      Pool = (_QWORD *)RaidAllocatePool(512LL, 56LL, 1413701970LL, *(_QWORD *)(a1 + 8));
      v39 = Pool;
      if ( Pool )
      {
        memset(Pool, 0, 0x38uLL);
        *(_DWORD *)v39 = 300819165;
        if ( *(_DWORD *)(a1 + 2552) == -1 )
          v39[1] = -1LL;
        else
          v39[1] = (unsigned int)(5000000 * *(_DWORD *)(a1 + 2552)) + KeQueryUnbiasedInterruptTime();
        a3 |= 0x10u;
        v39[6] = a1;
        v39[5] = a2;
      }
    }
    if ( *(_BYTE *)(v7 + 2) == 40 )
    {
      if ( v39 )
      {
        v39[2] = *(_QWORD *)(v7 + 96);
        *(_QWORD *)(v7 + 96) = v39;
      }
      *(_DWORD *)(v7 + 40) = *(_DWORD *)(a1 + 2544);
    }
    else
    {
      if ( v39 )
      {
        v39[2] = *(_QWORD *)(v7 + 48);
        *(_QWORD *)(v7 + 48) = v39;
      }
      *(_DWORD *)(v7 + 20) = *(_DWORD *)(a1 + 2544);
    }
  }
  v59 = KfRaiseIrql(2u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) == 0
    || ProcNumber.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
    || (Number = ProcNumber.Number,
        (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + ProcNumber.Group))
    || *((_DWORD *)g_RaidPerProcessorState + 2048 * (unsigned __int64)ProcNumber.Group + 32 * ProcNumber.Number + 20) )
  {
    v16 = 0;
  }
  else
  {
    v16 = 1;
    _InterlockedExchange(
      (volatile __int32 *)g_RaidPerProcessorState + 32 * (__int64)(ProcNumber.Number + (ProcNumber.Group << 6)) + 20,
      2);
  }
  v17 = v50;
  v18 = 0;
  *(_BYTE *)(a2 + 141) = -87;
  *(_QWORD *)(v17 + 32) = a1;
  v19 = *(_QWORD *)(a1 + 24);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 200);
    if ( v20 )
    {
      if ( *(_QWORD *)(v19 + 5000) )
      {
        v21 = KeQueryHighestNodeNumber() + 1;
        if ( v21 )
        {
          v22 = (KSPIN_LOCK *)(v20 + 64);
          v4 = v21;
          do
          {
            KeAcquireInStackQueuedSpinLock(v22 + 5, &LockHandle);
            if ( (KSPIN_LOCK *)*v22 != v22 && *(_QWORD *)(*v22 + 40) < v14 )
              v14 = *(_QWORD *)(*v22 + 40);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v22 += 7;
            --v4;
          }
          while ( v4 );
          if ( v14 != -1LL && v14 )
            v18 = KeQueryUnbiasedInterruptTime() - v14 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5000LL);
        }
      }
    }
  }
  inserted = RaidInsertDeviceQueue((int)a1 + 400, a2, a3, Number, v18);
  if ( v18 && inserted )
    ++*(_QWORD *)(a1 + 1680);
  if ( (a3 & 8) == 0 && *(_BYTE *)(a1 + 439) && *(char *)(a1 + 145) >= 0 )
    RaUnitRequestPowerUp(a1);
  if ( inserted )
    goto LABEL_52;
  *(_BYTE *)(a2 + 141) = -88;
  v24 = (_QWORD *)(a2 + 120);
  v25 = *(_QWORD *)(a1 + 408);
  if ( *(int *)(v25 + 44) > 0 || *(int *)(v25 + 40) > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(*(PKSPIN_LOCK *)(a1 + 408), &v51);
    if ( *(int *)(v25 + 44) > 0 || *(int *)(v25 + 40) > 0 )
    {
      v36 = *(_QWORD **)(v25 + 16);
      *v24 = v25 + 8;
      *(_QWORD *)(a2 + 128) = v36;
      if ( *v36 != v25 + 8 )
        __fastfail(3u);
      *v36 = v24;
      *(_QWORD *)(v25 + 16) = v24;
      ++*(_DWORD *)(v25 + 24);
      if ( (*(_BYTE *)(a2 + 142) & 0x20) == 0 )
        goto LABEL_72;
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(a2 + 120);
      v46 = v25 + 264;
      v47 = *(_QWORD **)(v46 + 8);
      *QosEntryForDeviceEntry = v46;
      QosEntryForDeviceEntry[1] = v47;
      if ( *v47 != v46 )
        __fastfail(3u);
      goto LABEL_133;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v51);
  }
  v26 = *(_DWORD *)(v25 + 128);
  if ( v26 )
  {
    v32 = v26 * HIDWORD(KeGetPcr()[1].LockArray);
    v33 = *(_QWORD *)(v25 + 64);
    v34 = v32 / *(_DWORD *)(v25 + 132);
    LODWORD(v50) = v34;
    IoResource = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v33 + 8 * v34));
    if ( !IoResource )
    {
      v41 = *(_DWORD *)(v25 + 128);
      v42 = 1;
      v49 = 1;
      if ( v41 <= 1 )
        goto LABEL_46;
      while ( !IoResource )
      {
        v43 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v25 + 64)
                                                           + 8LL * ((v42 + (unsigned int)v50) % v41)));
        IoResource = v43;
        v41 = *(_DWORD *)(v25 + 128);
        v42 = v49 + 1;
        v49 = v42;
        if ( v42 >= v41 )
        {
          if ( !v43 )
            goto LABEL_46;
          break;
        }
      }
    }
    LODWORD(IoResource->Next) = v50;
  }
  else
  {
    IoResource = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v25 + 64));
  }
LABEL_46:
  if ( IoResource
    || *(_DWORD *)(v25 + 136) < *(_DWORD *)(v25 + 144)
    && (RaAttemptHighWaterMarkIncrease(v25),
        (IoResource = (PSLIST_ENTRY)RaAllocateIoResource((PSLIST_HEADER)(v25 + 64))) != 0LL) )
  {
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v25 + 192)) >= *(_DWORD *)(v25 + 36) )
      *(_DWORD *)(v25 + 36) = *(_DWORD *)(v25 + 192);
    v28 = IoResource + 1;
    v54 = IoResource + 1;
    v55 = IoResource + 50;
    v53 = IoResource + 66;
    v29 = (void *)*((_QWORD *)&IoResource[48].Next + 1);
    v30 = *((unsigned int *)&IoResource[47].Next + 2);
    LOBYTE(IoResource[2].Next) &= 0x9Cu;
    LODWORD(IoResource[1].Next) = 523124044;
    *((_QWORD *)&IoResource[1].Next + 1) = 0LL;
    WORD1(IoResource[2].Next) = -1;
    BYTE4(IoResource[2].Next) = -1;
    *((_QWORD *)&IoResource[2].Next + 1) = 0LL;
    *((_QWORD *)&IoResource[7].Next + 1) = 0LL;
    IoResource[8].Next = 0LL;
    *((_QWORD *)&IoResource[9].Next + 1) = 0LL;
    *((_QWORD *)&IoResource[10].Next + 1) = 0LL;
    IoResource[10].Next = 0LL;
    IoResource[13].Next = 0LL;
    IoResource[11].Next = 0LL;
    *((_QWORD *)&IoResource[11].Next + 1) = 0LL;
    *((_QWORD *)&IoResource[14].Next + 1) = 0LL;
    IoResource[15].Next = 0LL;
    *((_QWORD *)&IoResource[8].Next + 1) = 0LL;
    *((_QWORD *)&IoResource[44].Next + 1) = 0LL;
    IoResource[45].Next = 0LL;
    *((_QWORD *)&IoResource[45].Next + 1) = 0LL;
    IoResource[46].Next = 0LL;
    *((_DWORD *)&IoResource[47].Next + 2) = v30;
    *((_QWORD *)&IoResource[48].Next + 1) = v29;
    if ( v29 )
      memset(v29, 0, v30);
    LOBYTE(v28[1].Next) &= ~0x80u;
    BYTE1(v28[1].Next) &= 0xF0u;
    v28[48].Next = 0LL;
    *((_DWORD *)&v28[46].Next + 3) = 0;
    LODWORD(v28[2].Next) = 0;
    (*(void (__fastcall **)(_QWORD, __int64, char *))(a1 + 392))(*(_QWORD *)(a1 + 384), a2, v52);
    LODWORD(v4) = 1;
    goto LABEL_52;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v25, &v51);
  v44 = *(_QWORD **)(v25 + 16);
  *v24 = v25 + 8;
  *(_QWORD *)(a2 + 128) = v44;
  if ( *v44 != v25 + 8 )
    __fastfail(3u);
  *v44 = v24;
  *(_QWORD *)(v25 + 16) = v24;
  ++*(_DWORD *)(v25 + 24);
  *(_DWORD *)(v25 + 40) = 1;
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(a2 + 120);
    v46 = v25 + 264;
    v47 = *(_QWORD **)(v46 + 8);
    *QosEntryForDeviceEntry = v46;
    QosEntryForDeviceEntry[1] = v47;
    if ( *v47 != v46 )
      __fastfail(3u);
LABEL_133:
    *v47 = QosEntryForDeviceEntry;
    *(_QWORD *)(v46 + 8) = QosEntryForDeviceEntry;
  }
LABEL_72:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v51);
LABEL_52:
  if ( v16 == 1 )
    RaidCheckPerProcessorCompletions(*(_QWORD *)(a1 + 24), &ProcNumber);
  KeLowerIrql(v59);
  return (unsigned int)v4;
}

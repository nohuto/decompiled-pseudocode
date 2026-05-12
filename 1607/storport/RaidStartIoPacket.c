/*
 * XREFs of RaidStartIoPacket @ 0x1C0003FF0
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0003A58 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0003BC0 (RaUnitScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000BDF0 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidInsertDeviceQueue @ 0x1C00046D0 (RaidInsertDeviceQueue.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaidCheckPerProcessorCompletions @ 0x1C0019054 (RaidCheckPerProcessorCompletions.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00196AC (RaidAdapterPoFxActivateComponent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AD80 (memset.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C002BD38 (RaidGetQosEntryForDeviceEntry.c)
 *     RaidIsUnresponsiveBlockedCmd @ 0x1C002C7D0 (RaidIsUnresponsiveBlockedCmd.c)
 *     RaidQosSupportedCommand @ 0x1C002C8D0 (RaidQosSupportedCommand.c)
 *     RaUnitRequestPowerUp @ 0x1C003059C (RaUnitRequestPowerUp.c)
 *     RaAllocateIoResource @ 0x1C0039688 (RaAllocateIoResource.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C0039714 (RaAttemptHighWaterMarkIncrease.c)
 */

__int64 __fastcall RaidStartIoPacket(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // rdi
  __int64 v8; // r14
  int v9; // ebx
  unsigned __int8 v10; // cl
  int v11; // eax
  __int64 v12; // r13
  unsigned __int8 v13; // bl
  __int64 v14; // r12
  __int64 v15; // rcx
  unsigned __int64 v16; // r12
  int Number; // r9d
  char v18; // r13
  __int64 v19; // rax
  char v20; // bl
  __int64 v21; // rax
  __int64 v22; // r14
  unsigned int v23; // eax
  KSPIN_LOCK *v24; // r14
  char inserted; // r14
  _QWORD *v26; // r12
  __int64 v27; // rbx
  int v28; // ecx
  PSLIST_ENTRY IoResource; // rcx
  PSLIST_ENTRY v30; // rbx
  void *v31; // rax
  size_t v32; // rdx
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rbx
  _QWORD *Pool; // rax
  unsigned int v43; // r8d
  unsigned int v44; // edx
  PSLIST_ENTRY v45; // rax
  _QWORD *v46; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v48; // rbx
  _QWORD *v49; // rcx
  _QWORD *v50; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-49h] BYREF
  int v52; // [rsp+34h] [rbp-45h]
  __int64 v53; // [rsp+38h] [rbp-41h]
  struct _KLOCK_QUEUE_HANDLE v54; // [rsp+40h] [rbp-39h] BYREF
  char v55[8]; // [rsp+58h] [rbp-21h] BYREF
  PSLIST_ENTRY v56; // [rsp+60h] [rbp-19h]
  PSLIST_ENTRY v57; // [rsp+68h] [rbp-11h]
  PSLIST_ENTRY v58; // [rsp+70h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-1h] BYREF
  char v60; // [rsp+E0h] [rbp+67h]
  char v61; // [rsp+E8h] [rbp+6Fh]
  KIRQL v62; // [rsp+E8h] [rbp+6Fh]
  int v63; // [rsp+F0h] [rbp+77h]
  char v64; // [rsp+F8h] [rbp+7Fh]

  v63 = a3;
  v3 = *(_QWORD *)(a2 + 184);
  LODWORD(v4) = 0;
  v53 = v3;
  v8 = *(_QWORD *)(v3 + 8);
  if ( !*(_BYTE *)(a1 + 2552) || (v61 = 1, !(unsigned __int8)RaidQosSupportedCommand(*(_QWORD *)(v3 + 8))) )
    v61 = 0;
  if ( *(_BYTE *)(v8 + 2) == 40 )
    v9 = *(_DWORD *)(v8 + 24);
  else
    v9 = *(_DWORD *)(v8 + 12);
  if ( (*(_BYTE *)(a1 + 154) & 2) != 0 && (unsigned __int8)RaidIsUnresponsiveBlockedCmd(v8) )
  {
    RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
    *(_BYTE *)(v8 + 3) = *(_BYTE *)(v8 + 3) & 0x80 | 0x38;
    RaidCompleteRequestEx((PIRP)a2);
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1792));
    return 1LL;
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  v10 = *(_BYTE *)(v8 + 2);
  if ( v10 == 40 )
  {
    *(struct _PROCESSOR_NUMBER *)(v8 + 96) = ProcNumber;
  }
  else
  {
    if ( !*(_QWORD *)(v8 + 40) )
      *(_QWORD *)(v8 + 40) = *(_QWORD *)(v8 + 56);
    *(struct _PROCESSOR_NUMBER *)(v8 + 56) = ProcNumber;
  }
  if ( v10 == 40 )
    v11 = *(_DWORD *)(v8 + 20);
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
      case 16:
        v40 = *(_QWORD *)(a1 + 24);
        if ( v40 && (*(_BYTE *)(v40 + 524) & 0x10) != 0 )
          break;
        goto LABEL_14;
      default:
        goto LABEL_14;
    }
  }
  if ( (v9 & 0x100800) == 0 )
  {
LABEL_20:
    if ( KeGetCurrentIrql() >= 2u || *(char *)(a1 + 152) < 0 || (*(_BYTE *)(a1 + 153) & 1) != 0 )
    {
      v37 = *(_QWORD *)(a1 + 24);
      v13 = 0;
      v14 = *(_QWORD *)(a2 + 184);
      v60 = 0;
      if ( *(_QWORD *)(v37 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v37, 0LL, 2LL);
        v13 = 2;
        v60 = 2;
      }
      if ( *(char *)(a1 + 153) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448)) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1456) + 96LL));
        if ( *(char *)(v37 + 108) < 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1752));
          if ( (*(_BYTE *)(v37 + 109) & 1) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1760));
        }
        v38 = *(_QWORD *)(a1 + 1456);
        if ( (*(_DWORD *)(v38 + 148) & 1) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v38 + 144));
        PoFxActivateComponent(**(_QWORD **)(a1 + 1456), 0LL, 2LL);
        v13 = v60 | 1;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
      }
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 24);
      v13 = 0;
      v14 = *(_QWORD *)(a2 + 184);
      v64 = 0;
      if ( *(_QWORD *)(v12 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v12, 0LL, 1LL);
        v13 = 2;
        v64 = 2;
      }
      if ( *(char *)(a1 + 153) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448)) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1456) + 96LL));
        if ( *(char *)(v12 + 108) < 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1752));
          if ( (*(_BYTE *)(v12 + 109) & 1) != 0 )
            _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1760));
        }
        v15 = *(_QWORD *)(a1 + 1456);
        if ( (*(_DWORD *)(v15 + 148) & 1) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 144));
        PoFxActivateComponent(**(_QWORD **)(a1 + 1456), 0LL, 1LL);
        v13 = v64 | 1;
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
      }
    }
    *(_QWORD *)(v14 + 16) = v13 & 1 | (unsigned __int64)(2 * ((v13 >> 1) & 1));
    goto LABEL_32;
  }
LABEL_14:
  *(_QWORD *)(v3 + 16) = 0LL;
  v63 = a3 | 8;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
    goto LABEL_32;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5088LL) )
    goto LABEL_20;
LABEL_32:
  v16 = -1LL;
  if ( v61 )
  {
    v41 = 0LL;
    if ( *(_DWORD *)(a1 + 2576) != -1 || *(_DWORD *)(a1 + 2560) != -1 || *(_DWORD *)(a1 + 2564) )
    {
      Pool = RaidAllocatePool(NonPagedPoolNx, 0x38uLL, 0x54436152u, *(_QWORD *)(a1 + 8));
      v41 = Pool;
      if ( Pool )
      {
        memset(Pool, 0, 0x38uLL);
        *(_DWORD *)v41 = 300819165;
        if ( *(_DWORD *)(a1 + 2576) == -1 )
          v41[1] = -1LL;
        else
          v41[1] = (unsigned int)(5000000 * *(_DWORD *)(a1 + 2576)) + KeQueryUnbiasedInterruptTime();
        v63 |= 0x10u;
        v41[6] = a1;
        v41[5] = a2;
      }
    }
    if ( *(_BYTE *)(v8 + 2) == 40 )
    {
      if ( v41 )
      {
        v41[2] = *(_QWORD *)(v8 + 96);
        *(_QWORD *)(v8 + 96) = v41;
      }
      *(_DWORD *)(v8 + 40) = *(_DWORD *)(a1 + 2568);
    }
    else
    {
      if ( v41 )
      {
        v41[2] = *(_QWORD *)(v8 + 48);
        *(_QWORD *)(v8 + 48) = v41;
      }
      *(_DWORD *)(v8 + 20) = *(_DWORD *)(a1 + 2568);
    }
  }
  v62 = KfRaiseIrql(2u);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4740LL) & 1) == 0
    || ProcNumber.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
    || (Number = ProcNumber.Number,
        (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + ProcNumber.Group))
    || (v39 = (__int64)(ProcNumber.Number + (ProcNumber.Group << 6)) << 7,
        *(_DWORD *)((char *)g_RaidPerProcessorState + v39 + 80)) )
  {
    v18 = 0;
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)((char *)g_RaidPerProcessorState + v39 + 80), 2);
    v18 = 1;
  }
  v19 = v53;
  v20 = 0;
  *(_BYTE *)(a2 + 141) = -87;
  *(_QWORD *)(v19 + 32) = a1;
  v21 = *(_QWORD *)(a1 + 24);
  if ( v21 )
  {
    v22 = *(_QWORD *)(a1 + 208);
    if ( v22 )
    {
      if ( *(_QWORD *)(v21 + 5000) )
      {
        v23 = KeQueryHighestNodeNumber() + 1;
        if ( v23 )
        {
          v24 = (KSPIN_LOCK *)(v22 + 64);
          v4 = v23;
          do
          {
            KeAcquireInStackQueuedSpinLock(v24 + 5, &LockHandle);
            if ( (KSPIN_LOCK *)*v24 != v24 && *(_QWORD *)(*v24 + 40) < v16 )
              v16 = *(_QWORD *)(*v24 + 40);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v24 += 7;
            --v4;
          }
          while ( v4 );
          if ( v16 != -1LL && v16 )
            v20 = KeQueryUnbiasedInterruptTime() - v16 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5000LL);
        }
      }
    }
  }
  inserted = RaidInsertDeviceQueue((int)a1 + 400, a2, v63, Number, v20);
  if ( v20 && inserted )
    ++*(_QWORD *)(a1 + 1680);
  if ( (v63 & 8) == 0 && *(_BYTE *)(a1 + 439) && *(char *)(a1 + 153) >= 0 )
    RaUnitRequestPowerUp(a1);
  if ( inserted )
    goto LABEL_57;
  *(_BYTE *)(a2 + 141) = -88;
  v26 = (_QWORD *)(a2 + 120);
  v27 = *(_QWORD *)(a1 + 408);
  if ( *(int *)(v27 + 44) > 0 || *(int *)(v27 + 40) > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(*(PKSPIN_LOCK *)(a1 + 408), &v54);
    if ( *(int *)(v27 + 44) > 0 || *(int *)(v27 + 40) > 0 )
    {
      v50 = *(_QWORD **)(v27 + 16);
      if ( *v50 != v27 + 8 )
        __fastfail(3u);
      *v26 = v27 + 8;
      *(_QWORD *)(a2 + 128) = v50;
      *v50 = v26;
      *(_QWORD *)(v27 + 16) = v26;
      ++*(_DWORD *)(v27 + 24);
      if ( (*(_BYTE *)(a2 + 142) & 0x20) == 0 )
        goto LABEL_134;
      QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(a2 + 120);
      v48 = v27 + 264;
      v49 = *(_QWORD **)(v48 + 8);
      if ( *v49 != v48 )
        __fastfail(3u);
      goto LABEL_133;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v54);
  }
  v28 = *(_DWORD *)(v27 + 128);
  if ( v28 )
  {
    v34 = v28 * HIDWORD(KeGetPcr()[1].LockArray);
    v35 = *(_QWORD *)(v27 + 64);
    v36 = v34 / *(_DWORD *)(v27 + 132);
    LODWORD(v53) = v36;
    IoResource = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v35 + 8 * v36));
    if ( !IoResource )
    {
      v43 = *(_DWORD *)(v27 + 128);
      v44 = 1;
      v52 = 1;
      if ( v43 <= 1 )
        goto LABEL_51;
      while ( !IoResource )
      {
        v45 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v27 + 64)
                                                           + 8LL * ((v44 + (unsigned int)v53) % v43)));
        IoResource = v45;
        v43 = *(_DWORD *)(v27 + 128);
        v44 = v52 + 1;
        v52 = v44;
        if ( v44 >= v43 )
        {
          if ( !v45 )
            goto LABEL_51;
          break;
        }
      }
    }
    LODWORD(IoResource->Next) = v53;
  }
  else
  {
    IoResource = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v27 + 64));
  }
LABEL_51:
  if ( IoResource
    || *(_DWORD *)(v27 + 136) < *(_DWORD *)(v27 + 144)
    && (RaAttemptHighWaterMarkIncrease(v27),
        (IoResource = (PSLIST_ENTRY)RaAllocateIoResource((PSLIST_HEADER)(v27 + 64))) != 0LL) )
  {
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v27 + 192)) >= *(_DWORD *)(v27 + 36) )
      *(_DWORD *)(v27 + 36) = *(_DWORD *)(v27 + 192);
    v30 = IoResource + 1;
    v57 = IoResource + 1;
    v58 = IoResource + 50;
    v56 = IoResource + 66;
    v31 = (void *)*((_QWORD *)&IoResource[48].Next + 1);
    v32 = *((unsigned int *)&IoResource[47].Next + 2);
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
    *((_DWORD *)&IoResource[47].Next + 2) = v32;
    *((_QWORD *)&IoResource[48].Next + 1) = v31;
    if ( v31 )
      memset(v31, 0, v32);
    LOBYTE(v30[1].Next) &= ~0x80u;
    BYTE1(v30[1].Next) &= 0xF0u;
    v30[48].Next = 0LL;
    *((_DWORD *)&v30[46].Next + 3) = 0;
    *((_DWORD *)&v30[48].Next + 2) = 0;
    (*(void (__fastcall **)(_QWORD, __int64, char *))(a1 + 392))(*(_QWORD *)(a1 + 384), a2, v55);
    LODWORD(v4) = 1;
    goto LABEL_57;
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v27, &v54);
  v46 = *(_QWORD **)(v27 + 16);
  if ( *v46 != v27 + 8 )
    __fastfail(3u);
  *v26 = v27 + 8;
  *(_QWORD *)(a2 + 128) = v46;
  *v46 = v26;
  *(_QWORD *)(v27 + 16) = v26;
  ++*(_DWORD *)(v27 + 24);
  *(_DWORD *)(v27 + 40) = 1;
  if ( (*(_BYTE *)(a2 + 142) & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(a2 + 120);
    v48 = v27 + 264;
    v49 = *(_QWORD **)(v48 + 8);
    if ( *v49 != v48 )
      __fastfail(3u);
LABEL_133:
    *QosEntryForDeviceEntry = v48;
    QosEntryForDeviceEntry[1] = v49;
    *v49 = QosEntryForDeviceEntry;
    *(_QWORD *)(v48 + 8) = QosEntryForDeviceEntry;
  }
LABEL_134:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v54);
LABEL_57:
  if ( v18 == 1 )
    RaidCheckPerProcessorCompletions(*(_QWORD *)(a1 + 24), &ProcNumber);
  KeLowerIrql(v62);
  return (unsigned int)v4;
}

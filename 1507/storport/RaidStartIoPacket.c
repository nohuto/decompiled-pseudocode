/*
 * XREFs of RaidStartIoPacket @ 0x1C0001C90
 * Callers:
 *     RaidUnitSubmitRequest @ 0x1C0001750 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C00018B0 (RaUnitScsiIrp.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0010838 (RaidUnitProcessBusyRequest.c)
 * Callees:
 *     RaidInsertDeviceQueue @ 0x1C00021D0 (RaidInsertDeviceQueue.c)
 *     RaAllocateIoResource @ 0x1C0003300 (RaAllocateIoResource.c)
 *     RaUnitRequestPowerUp @ 0x1C00074EC (RaUnitRequestPowerUp.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0021C84 (RaidAdapterPoFxActivateComponent.c)
 *     RaidCheckPerProcessorCompletions @ 0x1C0023604 (RaidCheckPerProcessorCompletions.c)
 *     RaAttemptHighWaterMarkIncrease @ 0x1C00348E0 (RaAttemptHighWaterMarkIncrease.c)
 */

__int64 __fastcall RaidStartIoPacket(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // r12
  __int64 v7; // rbx
  int v8; // r15d
  unsigned __int8 v9; // cl
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r15
  unsigned __int8 v13; // bl
  __int64 v14; // r13
  int Number; // r9d
  char v16; // r13
  char v17; // r15
  __int64 v18; // rax
  KSPIN_LOCK *v19; // rbx
  unsigned __int64 v20; // r12
  unsigned int v21; // eax
  char inserted; // bl
  _QWORD *v23; // r12
  __int64 v24; // rbx
  int v25; // ecx
  PSLIST_ENTRY IoResource; // rcx
  PSLIST_ENTRY v27; // rbx
  void *v28; // rax
  size_t v29; // rdx
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r15
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  unsigned int v38; // r8d
  unsigned int v39; // edx
  PSLIST_ENTRY v40; // rax
  _QWORD *v41; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-49h] BYREF
  int v43; // [rsp+34h] [rbp-45h]
  struct _KLOCK_QUEUE_HANDLE v44; // [rsp+38h] [rbp-41h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v46[8]; // [rsp+68h] [rbp-11h] BYREF
  PSLIST_ENTRY v47; // [rsp+70h] [rbp-9h]
  PSLIST_ENTRY v48; // [rsp+78h] [rbp-1h]
  PSLIST_ENTRY v49; // [rsp+80h] [rbp+7h]
  char v50; // [rsp+E0h] [rbp+67h]
  KIRQL v51; // [rsp+E8h] [rbp+6Fh]
  int v52; // [rsp+F0h] [rbp+77h]
  int v53; // [rsp+F0h] [rbp+77h]
  char v54; // [rsp+F8h] [rbp+7Fh]

  v52 = a3;
  v3 = *(_QWORD **)(a2 + 184);
  v7 = v3[1];
  if ( *(_BYTE *)(v7 + 2) == 40 )
    v8 = *(_DWORD *)(v7 + 24);
  else
    v8 = *(_DWORD *)(v7 + 12);
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  v9 = *(_BYTE *)(v7 + 2);
  if ( v9 == 40 )
  {
    *(struct _PROCESSOR_NUMBER *)(v7 + 96) = ProcNumber;
  }
  else
  {
    if ( !*(_QWORD *)(v7 + 40) )
      *(_QWORD *)(v7 + 40) = *(_QWORD *)(v7 + 56);
    *(struct _PROCESSOR_NUMBER *)(v7 + 56) = ProcNumber;
  }
  if ( v9 == 40 )
    v10 = *(_DWORD *)(v7 + 20);
  else
    v10 = v9;
  LODWORD(v11) = 0;
  if ( v10 )
  {
    switch ( v10 )
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
          goto LABEL_11;
        break;
      default:
        goto LABEL_11;
    }
  }
  if ( (v8 & 0x100800) == 0 )
    goto LABEL_13;
LABEL_11:
  v3[2] = 0LL;
  v52 = a3 | 8;
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
    goto LABEL_20;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5088LL) )
  {
LABEL_13:
    if ( KeGetCurrentIrql() >= 2u || *(char *)(a1 + 144) < 0 || (*(_BYTE *)(a1 + 145) & 1) != 0 )
    {
      v34 = *(_QWORD *)(a1 + 24);
      v13 = 0;
      v14 = *(_QWORD *)(a2 + 184);
      v50 = 0;
      if ( *(_QWORD *)(v34 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v34, 0LL, 2LL);
        v13 = 2;
        v50 = 2;
      }
      if ( *(char *)(a1 + 145) >= 0
        || !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432)) )
      {
        goto LABEL_19;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1440) + 96LL));
      if ( *(char *)(v34 + 108) < 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1728));
        if ( (*(_BYTE *)(v34 + 109) & 1) != 0 )
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1736));
      }
      v37 = *(_QWORD *)(a1 + 1440);
      if ( (*(_DWORD *)(v37 + 148) & 1) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v37 + 144));
      PoFxActivateComponent(**(_QWORD **)(a1 + 1440), 0LL, 2LL);
      v13 = v50 | 1;
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 24);
      v13 = 0;
      v14 = *(_QWORD *)(a2 + 184);
      v54 = 0;
      if ( *(_QWORD *)(v12 + 5088) )
      {
        RaidAdapterPoFxActivateComponent(v12, 0LL, 1LL);
        v13 = 2;
        v54 = 2;
      }
      if ( *(char *)(a1 + 145) >= 0
        || !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432)) )
      {
        goto LABEL_19;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1440) + 96LL));
      if ( *(char *)(v12 + 108) < 0 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1728));
        if ( (*(_BYTE *)(v12 + 109) & 1) != 0 )
          _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1736));
      }
      v36 = *(_QWORD *)(a1 + 1440);
      if ( (*(_DWORD *)(v36 + 148) & 1) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v36 + 144));
      PoFxActivateComponent(**(_QWORD **)(a1 + 1440), 0LL, 1LL);
      v13 = v54 | 1;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
LABEL_19:
    *(_QWORD *)(v14 + 16) = v13 & 1 | (unsigned __int64)(2 * ((v13 >> 1) & 1));
  }
LABEL_20:
  v51 = KfRaiseIrql(2u);
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
  *(_BYTE *)(a2 + 141) = -87;
  v17 = 0;
  v3[4] = a1;
  v18 = *(_QWORD *)(a1 + 24);
  if ( v18 )
  {
    v19 = *(KSPIN_LOCK **)(a1 + 200);
    if ( v19 )
    {
      if ( *(_QWORD *)(v18 + 5000) )
      {
        v20 = -1LL;
        v21 = KeQueryHighestNodeNumber() + 1;
        if ( v21 )
        {
          v11 = v21;
          do
          {
            KeAcquireInStackQueuedSpinLock(v19 + 5, &LockHandle);
            if ( (KSPIN_LOCK *)*v19 != v19 && *(_QWORD *)(*v19 + 40) < v20 )
              v20 = *(_QWORD *)(*v19 + 40);
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v19 += 7;
            --v11;
          }
          while ( v11 );
          if ( v20 != -1LL && v20 )
            v17 = KeQueryUnbiasedInterruptTime() - v20 > *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5000LL);
        }
      }
    }
  }
  inserted = RaidInsertDeviceQueue((int)a1 + 400, a2, v52, Number, v17);
  if ( v17 && inserted )
    ++*(_QWORD *)(a1 + 1664);
  if ( (v52 & 8) == 0 && *(_BYTE *)(a1 + 439) && *(char *)(a1 + 145) >= 0 )
    RaUnitRequestPowerUp(a1);
  if ( inserted )
    goto LABEL_44;
  *(_BYTE *)(a2 + 141) = -88;
  v23 = (_QWORD *)(a2 + 120);
  v24 = *(_QWORD *)(a1 + 408);
  if ( *(int *)(v24 + 44) > 0 || *(int *)(v24 + 40) > 0 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(*(PKSPIN_LOCK *)(a1 + 408), &v44);
    if ( *(int *)(v24 + 44) > 0 || *(int *)(v24 + 40) > 0 )
    {
      v35 = *(_QWORD **)(v24 + 16);
      *v23 = v24 + 8;
      *(_QWORD *)(a2 + 128) = v35;
      if ( *v35 != v24 + 8 )
        __fastfail(3u);
      *v35 = v23;
      *(_QWORD *)(v24 + 16) = v23;
      goto LABEL_67;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v44);
  }
  v25 = *(_DWORD *)(v24 + 128);
  if ( !v25 )
  {
    IoResource = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v24 + 64));
    goto LABEL_38;
  }
  v31 = v25 * HIDWORD(KeGetPcr()[1].LockArray);
  v32 = *(_QWORD *)(v24 + 64);
  v33 = v31 / *(_DWORD *)(v24 + 132);
  v43 = v33;
  IoResource = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v32 + 8 * v33));
  if ( IoResource )
    goto LABEL_55;
  v38 = *(_DWORD *)(v24 + 128);
  v39 = 1;
  v53 = 1;
  if ( v38 > 1 )
  {
    while ( !IoResource )
    {
      v40 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v24 + 64) + 8LL * ((v39 + v43) % v38)));
      IoResource = v40;
      v38 = *(_DWORD *)(v24 + 128);
      v39 = v53 + 1;
      v53 = v39;
      if ( v39 >= v38 )
      {
        if ( !v40 )
          goto LABEL_38;
        break;
      }
    }
LABEL_55:
    LODWORD(IoResource->Next) = v43;
  }
LABEL_38:
  if ( !IoResource )
  {
    if ( *(_DWORD *)(v24 + 136) >= *(_DWORD *)(v24 + 144)
      || (RaAttemptHighWaterMarkIncrease(v24),
          (IoResource = (PSLIST_ENTRY)RaAllocateIoResource((PSLIST_HEADER)(v24 + 64))) == 0LL) )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v24, &v44);
      v41 = *(_QWORD **)(v24 + 16);
      *v23 = v24 + 8;
      *(_QWORD *)(a2 + 128) = v41;
      if ( *v41 != v24 + 8 )
        __fastfail(3u);
      *v41 = v23;
      *(_QWORD *)(v24 + 16) = v23;
      *(_DWORD *)(v24 + 40) = 1;
LABEL_67:
      ++*(_DWORD *)(v24 + 24);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v44);
      goto LABEL_44;
    }
  }
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v24 + 192)) >= *(_DWORD *)(v24 + 36) )
    *(_DWORD *)(v24 + 36) = *(_DWORD *)(v24 + 192);
  v27 = IoResource + 1;
  v48 = IoResource + 1;
  v49 = IoResource + 49;
  v47 = IoResource + 65;
  v28 = (void *)*((_QWORD *)&IoResource[47].Next + 1);
  v29 = *((unsigned int *)&IoResource[46].Next + 2);
  LOBYTE(IoResource[2].Next) &= 0x9Cu;
  LODWORD(IoResource[1].Next) = 523124044;
  *((_QWORD *)&IoResource[1].Next + 1) = 0LL;
  WORD1(IoResource[2].Next) = -1;
  BYTE4(IoResource[2].Next) = -1;
  *((_QWORD *)&IoResource[2].Next + 1) = 0LL;
  IoResource[7].Next = 0LL;
  *((_QWORD *)&IoResource[7].Next + 1) = 0LL;
  IoResource[9].Next = 0LL;
  IoResource[10].Next = 0LL;
  *((_QWORD *)&IoResource[9].Next + 1) = 0LL;
  *((_QWORD *)&IoResource[12].Next + 1) = 0LL;
  *((_QWORD *)&IoResource[10].Next + 1) = 0LL;
  IoResource[11].Next = 0LL;
  IoResource[14].Next = 0LL;
  *((_QWORD *)&IoResource[14].Next + 1) = 0LL;
  IoResource[8].Next = 0LL;
  *((_QWORD *)&IoResource[43].Next + 1) = 0LL;
  IoResource[44].Next = 0LL;
  *((_QWORD *)&IoResource[44].Next + 1) = 0LL;
  IoResource[45].Next = 0LL;
  *((_DWORD *)&IoResource[46].Next + 2) = v29;
  *((_QWORD *)&IoResource[47].Next + 1) = v28;
  if ( v28 )
    memset(v28, 0, v29);
  LOBYTE(v27[1].Next) &= ~0x80u;
  BYTE1(v27[1].Next) &= 0xF0u;
  v27[47].Next = 0LL;
  *((_DWORD *)&v27[45].Next + 3) = 0;
  LODWORD(v27[2].Next) = 0;
  (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(a1 + 392))(*(_QWORD *)(a1 + 384), a2, v46);
  LODWORD(v11) = 1;
LABEL_44:
  if ( v16 == 1 )
    RaidCheckPerProcessorCompletions(*(_QWORD *)(a1 + 24), &ProcNumber);
  KeLowerIrql(v51);
  return (unsigned int)v11;
}

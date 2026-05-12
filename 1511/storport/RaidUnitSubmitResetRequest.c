/*
 * XREFs of RaidUnitSubmitResetRequest @ 0x1C0035A50
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0003080 (RaUnitScsiIrp.c)
 *     RaUnitResetBusSrb @ 0x1C0032700 (RaUnitResetBusSrb.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidZeroXrb @ 0x1C0011444 (RaidZeroXrb.c)
 *     DbgLogRequest @ 0x1C0014194 (DbgLogRequest.c)
 *     RaidUnitStartDeviceBusy @ 0x1C0028F00 (RaidUnitStartDeviceBusy.c)
 *     RaidNtStatusToSrbStatus @ 0x1C0031310 (RaidNtStatusToSrbStatus.c)
 *     RaUnitStartResetIo @ 0x1C0032E44 (RaUnitStartResetIo.c)
 */

__int64 __fastcall RaidUnitSubmitResetRequest(__int64 a1, IRP *a2)
{
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 ContiguousNodeMemory; // rax
  __int128 v7; // xmm1
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *Pool; // rax
  __int64 *v11; // rdx
  __int64 v12; // r8
  KIRQL v13; // bl
  unsigned int v14; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  __int128 v17; // [rsp+58h] [rbp-28h] BYREF
  __int128 v18; // [rsp+68h] [rbp-18h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  CurrentStackLocation->Control |= 1u;
  LOBYTE(CurrentStackLocation) = BYTE2(SecurityContext->SecurityQos);
  BYTE3(SecurityContext->SecurityQos) = 0;
  if ( (_BYTE)CurrentStackLocation == 40 )
    LODWORD(CurrentStackLocation) = SecurityContext->FullCreateOptions;
  else
    LODWORD(CurrentStackLocation) = (unsigned __int8)CurrentStackLocation;
  if ( (_DWORD)CurrentStackLocation == 16 )
  {
    ContiguousNodeMemory = MmAllocateContiguousNodeMemory(
                             ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 444LL) + 7) & 0xFFFFFFF8) + 1056,
                             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4392LL),
                             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4400LL),
                             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 4384LL),
                             4,
                             0x80000000);
    if ( ContiguousNodeMemory )
    {
      *(_QWORD *)&v18 = ContiguousNodeMemory + 16;
      *((_QWORD *)&v18 + 1) = ContiguousNodeMemory + 800;
      *((_QWORD *)&v17 + 1) = ContiguousNodeMemory + 1056;
      RaidZeroXrb(ContiguousNodeMemory + 16, ContiguousNodeMemory + 800, 0, 0LL);
      LODWORD(v17) = -1;
      goto LABEL_9;
    }
LABEL_24:
    BYTE3(SecurityContext->SecurityQos) = RaidNtStatusToSrbStatus(-1073741670);
    a2->IoStatus.Information = 0LL;
    RaidCompleteRequestEx(a2, 0, v14);
    return 259LL;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1440), 1, 0) )
    goto LABEL_24;
  v7 = *(_OWORD *)(a1 + 1424);
  v17 = *(_OWORD *)(a1 + 1408);
  v18 = v7;
LABEL_9:
  if ( (qword_1C0048010 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      (__int64)a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 88)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a1 + 88) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88))) << 8),
      0LL,
      0LL,
      0LL);
  if ( (*(_BYTE *)(a1 + 145) & 1) != 0 || *(char *)(a1 + 144) < 0 )
    goto LABEL_23;
  v8 = a1;
  if ( KeGetCurrentIrql() < 2u )
  {
    v9 = 1LL;
LABEL_22:
    RaidUnitStartDeviceBusy(v8, (__int64)a2, v9);
    goto LABEL_23;
  }
  if ( !RaidUnitCheckAndAcquirePoFx(a1) )
  {
LABEL_23:
    v13 = KfRaiseIrql(2u);
    RaUnitStartResetIo(*(_QWORD *)(a1 + 8), a2, (__int64)&v17);
    KeLowerIrql(v13);
    return 259LL;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 1456) + 88LL), &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) & 2) != 0
    || (Pool = RaidAllocatePool(NonPagedPoolNx, 0x20uLL, 0x4F506152u, *(_QWORD *)(a1 + 8))) == 0LL )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
    v9 = 0LL;
    v8 = a1;
    goto LABEL_22;
  }
  Pool[2] = a2;
  v11 = (__int64 *)(*(_QWORD *)(a1 + 1456) + 72LL);
  v12 = *v11;
  *Pool = *v11;
  Pool[1] = v11;
  if ( *(__int64 **)(v12 + 8) != v11 )
    __fastfail(3u);
  *(_QWORD *)(v12 + 8) = Pool;
  *v11 = (__int64)Pool;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  RaidUnitStartDeviceBusy(a1, (__int64)a2, 0LL);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  return 259LL;
}

/*
 * XREFs of PsAllocateMonitorContextServerSilo @ 0x140593528
 * Callers:
 *     EtwpServerSiloCreateNotify @ 0x140593ABC (EtwpServerSiloCreateNotify.c)
 *     SeInitServerSilo @ 0x140593C18 (SeInitServerSilo.c)
 *     SepRmServerSiloCreateNotify @ 0x140593C50 (SepRmServerSiloCreateNotify.c)
 *     ExpWnfCreateServerSiloCallback @ 0x140593CBC (ExpWnfCreateServerSiloCallback.c)
 *     ObInitServerSilo @ 0x140593D20 (ObInitServerSilo.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PspReferenceMonitorServerSilo @ 0x140593A94 (PspReferenceMonitorServerSilo.c)
 */

__int64 __fastcall PsAllocateMonitorContextServerSilo(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rdi
  int v8; // ebx
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  signed __int8 v13; // cf
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax

  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)(*(_BYTE *)(a1 + 125) != 0 ? PagedPool : NonPagedPoolNx),
                  a2 + 96,
                  0x436C6953u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
LABEL_17:
    *a3 = 0LL;
    return (unsigned int)v8;
  }
  memset(PoolWithTag, 0, 0x60uLL);
  *((_DWORD *)v7 + 4) = 1131178323;
  v7[4] = a1;
  *((_DWORD *)v7 + 12) = 1;
  v7[3] = a2;
  v8 = PspReferenceMonitorServerSilo(a1);
  if ( v8 < 0 )
  {
    ExFreePoolWithTag(v7, 0x436C6953u);
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)&SiloMonitorLock, 0LL, 0LL, v9);
  v13 = _interlockedbittestandset64((volatile signed __int32 *)&SiloMonitorLock, 0LL);
  v14 = v11;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx(&SiloMonitorLock, v11, (ULONG_PTR)&SiloMonitorLock, v12);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  v15 = *(_QWORD **)(a1 + 24);
  *v7 = a1 + 16;
  v7[1] = v15;
  if ( *v15 != a1 + 16 )
    __fastfail(3u);
  *v15 = v7;
  *(_QWORD *)(a1 + 24) = v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&SiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&SiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&SiloMonitorLock);
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
    && !v16->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  *a3 = v7 + 12;
  return 0LL;
}

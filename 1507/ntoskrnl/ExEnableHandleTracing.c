/*
 * XREFs of ExEnableHandleTracing @ 0x1406EFFA0
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1406BFC88 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetMaximumNonPagedPoolInBytes @ 0x140075558 (MmGetMaximumNonPagedPoolInBytes.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14008B6A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406EFF48 (ExDereferenceHandleDebugInfo.c)
 */

__int64 __fastcall ExEnableHandleTracing(__int64 a1, unsigned int a2)
{
  signed int v3; // ebx
  unsigned __int64 v4; // rbp
  __int64 MaximumNonPagedPoolInBytes; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  ULONG_PTR v8; // rsi
  char *PoolWithTag; // rax
  char *v10; // r14
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r15
  _DWORD *v16; // r15
  __int16 v17; // ax

  if ( a2 )
  {
    v3 = 128;
    if ( a2 >= 0x80 )
    {
      v3 = a2;
      if ( a2 > 0x20000 )
        v3 = 0x20000;
    }
    while ( ((v3 - 1) & v3) != 0 )
      v3 = ((v3 - 1) | v3) + 1;
  }
  else
  {
    v3 = 4096;
  }
  v4 = 160LL * v3 + 80;
  _InterlockedExchangeAdd(&ExpTotalTraceBuffers, v3);
  MaximumNonPagedPoolInBytes = MmGetMaximumNonPagedPoolInBytes();
  if ( 160 * v6 > (unsigned __int64)(5 * MaximumNonPagedPoolInBytes) >> 4 )
  {
    result = 3221225626LL;
LABEL_13:
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v3);
    return result;
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    result = PsChargeProcessNonPagedPoolQuota(*(_QWORD *)(a1 + 16), v4);
    if ( (int)result < 0 )
      goto LABEL_13;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x6474624Fu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v3);
    if ( v8 )
      PsReturnProcessNonPagedPoolQuota(v8, v4);
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, v4);
  *(_DWORD *)v10 = 1;
  *((_DWORD *)v10 + 1) = v3;
  *((_DWORD *)v10 + 4) = 1;
  *((_QWORD *)v10 + 3) = 0LL;
  *((_DWORD *)v10 + 8) = 0;
  KeInitializeEvent((PRKEVENT)(v10 + 40), SynchronizationEvent, 0);
  if ( v8 )
    *(_BYTE *)(a1 + 44) |= 1u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire(a1 + 56, 0LL, 0LL, v11);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 56), v13, a1 + 56, v14);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  v16 = *(_DWORD **)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v10;
  if ( v16 )
  {
    if ( (v16[2] & 8) == 0 )
      goto LABEL_29;
    goto LABEL_28;
  }
  if ( (*(_BYTE *)(a1 + 44) & 2) != 0 )
LABEL_28:
    *((_DWORD *)v10 + 2) = 8;
LABEL_29:
  *(_BYTE *)(a1 + 44) |= 2u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 56));
  KeAbPostRelease(a1 + 56);
  v17 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v16 )
    ExDereferenceHandleDebugInfo(a1, v16);
  return 0LL;
}

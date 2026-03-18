/*
 * XREFs of PpmIdleRegisterDefaultStates @ 0x14059A25C
 * Callers:
 *     PopNewProcessorCallback @ 0x1406B09CC (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PpmHvConsiderNative @ 0x140163368 (PpmHvConsiderNative.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 PpmIdleRegisterDefaultStates()
{
  int v0; // esi
  unsigned int v1; // ebp
  char v2; // di
  PVOID PoolWithTag; // rax
  __int64 v4; // rbx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // edi
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax

  v0 = 1;
  v1 = 1;
  v2 = 0;
  if ( !PpmHvConsiderNative() )
  {
    if ( (HvlEnlightenments & 0x200) != 0 )
    {
      v2 = 1;
      v0 = 2;
    }
    else
    {
      v2 = 0;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * v0 + 112), 0x694D5050u);
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(32 * v0 + 112));
    *(_BYTE *)(v4 + 18) = 1;
    *(_DWORD *)(v4 + 108) = v0;
    *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 112) & 0x7FFFFF00 | 0x8000008F;
    RtlInitUnicodeString((PUNICODE_STRING)(v4 + 128), L"HLT");
    *(_BYTE *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 48) = xHalTimerWatchdogStop;
    *(_QWORD *)(v4 + 72) = PpmIdleDefaultExecute;
    *(_QWORD *)(v4 + 80) = PopPoCoalescinCallback;
    *(_QWORD *)(v4 + 88) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    *(_QWORD *)(v4 + 96) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    if ( v2 )
    {
      v1 = 2;
      *(_QWORD *)(v4 + 40) = PpmIdleGuestPreselect;
      *(_QWORD *)(v4 + 48) = PpmIdleGuestTest;
      *(_QWORD *)(v4 + 64) = PpmIdleGuestPreExecute;
      *(_QWORD *)(v4 + 72) = PpmIdleGuestExecute;
      *(_QWORD *)(v4 + 80) = PpmIdleGuestComplete;
      *(_DWORD *)(v4 + 144) = *(_DWORD *)(v4 + 144) & 0x7FFFFF00 | 0x97;
      RtlInitUnicodeString((PUNICODE_STRING)(v4 + 160), L"Enlightened Idle");
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, v5);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&PpmIdlePolicyLock, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&PpmIdlePolicyLock, v7, (ULONG_PTR)&PpmIdlePolicyLock, v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    qword_14032E288 = (__int64)KeGetCurrentThread();
    v12 = PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmIdleInstallDefaultStates, v4, v1);
    if ( qword_14032E288 )
      qword_14032E288 = 0LL;
    _m_prefetchw(&PpmIdlePolicyLock);
    v13 = PpmIdlePolicyLock - 16;
    if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v13 = 0LL;
    if ( (PpmIdlePolicyLock & 2) != 0
      || (v14 = PpmIdlePolicyLock,
          v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v13, PpmIdlePolicyLock)) )
    {
      ExfReleasePushLock(&PpmIdlePolicyLock, v11);
    }
    KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ExFreePoolWithTag((PVOID)v4, 0x694D5050u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v12;
}

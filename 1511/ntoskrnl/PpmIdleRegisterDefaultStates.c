/*
 * XREFs of PpmIdleRegisterDefaultStates @ 0x14052FDF4
 * Callers:
 *     PopNewProcessorCallback @ 0x1406323A4 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PpmHvConsiderNative @ 0x140136D88 (PpmHvConsiderNative.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 PpmIdleRegisterDefaultStates()
{
  unsigned int v0; // edi
  char v1; // si
  int v2; // ebp
  PVOID PoolWithTag; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi

  v0 = 1;
  v1 = 0;
  v2 = 1;
  if ( !PpmHvConsiderNative() )
  {
    if ( (HvlEnlightenments & 0x200) != 0 )
    {
      v1 = 1;
      v2 = 2;
    }
    else
    {
      v1 = 0;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(32 * v2 + 112), 0x694D5050u);
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)(32 * v2 + 112));
    *(_BYTE *)(v4 + 18) = 1;
    *(_DWORD *)(v4 + 108) = v2;
    *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 112) & 0x7FFFFF00 | 0x8000008F;
    RtlInitUnicodeString((PUNICODE_STRING)(v4 + 128), L"HLT");
    *(_BYTE *)(v4 + 16) = 0;
    *(_QWORD *)(v4 + 48) = xHalTimerWatchdogStop;
    *(_QWORD *)(v4 + 72) = PpmIdleDefaultExecute;
    *(_QWORD *)(v4 + 80) = PopPoCoalescinCallback;
    *(_QWORD *)(v4 + 88) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    *(_QWORD *)(v4 + 96) = ext_ms_win_ntos_tm_l1_1_0_TmIsKTMCommitCoordinator;
    if ( v1 )
    {
      v0 = 2;
      *(_QWORD *)(v4 + 40) = PpmIdleGuestPreselect;
      *(_QWORD *)(v4 + 48) = PpmIdleGuestTest;
      *(_QWORD *)(v4 + 64) = PpmIdleGuestPreExecute;
      *(_QWORD *)(v4 + 72) = PpmIdleGuestExecute;
      *(_QWORD *)(v4 + 80) = PpmIdleGuestComplete;
      *(_DWORD *)(v4 + 144) = *(_DWORD *)(v4 + 144) & 0x7FFFFF00 | 0x97;
      RtlInitUnicodeString((PUNICODE_STRING)(v4 + 160), L"Enlightened Idle");
    }
    PopAcquireRwLockExclusive((__int64)&PpmIdlePolicyLock);
    v5 = PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmIdleInstallDefaultStates, v4, v0);
    PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
    ExFreePoolWithTag((PVOID)v4, 0x694D5050u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}

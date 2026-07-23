/*
 * XREFs of PpmIdleRegisterDefaultStates @ 0x14054EE80
 * Callers:
 *     PopNewProcessorCallback @ 0x14066A218 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     PpmHvConsiderNative @ 0x14013A0B4 (PpmHvConsiderNative.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
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
    *(_QWORD *)(v4 + 80) = xHalFreeMessageTarget;
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
    PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock);
    v5 = PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmIdleInstallDefaultStates, v4, v0);
    PopReleaseRwLock(&PpmIdlePolicyLock);
    ExFreePoolWithTag((PVOID)v4, 0x694D5050u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}

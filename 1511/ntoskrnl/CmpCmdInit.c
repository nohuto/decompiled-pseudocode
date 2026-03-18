/*
 * XREFs of CmpCmdInit @ 0x1405301A0
 * Callers:
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PoRegisterCoalescingCallback @ 0x140530628 (PoRegisterCoalescingCallback.c)
 *     CmpInitializeLazyWriters @ 0x1405308E4 (CmpInitializeLazyWriters.c)
 */

__int64 __fastcall CmpCmdInit(char a1)
{
  PVOID PoolWithTag; // rax
  unsigned __int64 v3; // rsi
  void *v9; // r8
  __int64 v10; // rdx
  __int64 result; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-18h]
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]

  CmpInitializeLazyWriters();
  CmpForceFlushWorkItem.Parameter = 0LL;
  CmpForceFlushWorkItem.List.Flink = 0LL;
  CmpForceFlushWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpForceFlushWorker;
  KeInitializeDpc(&CmpEnableLazyFlushDpc, (PKDEFERRED_ROUTINE)CmpEnableLazyFlushDpcRoutine, &CmpHoldLazyFlush);
  KeInitializeTimerEx(&CmpEnableLazyFlushTimer, NotificationTimer);
  KeSetTimer(&CmpEnableLazyFlushTimer, (LARGE_INTEGER)-6000000000LL, &CmpEnableLazyFlushDpc);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x58637044u);
  v3 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    _RAX = 2147483656LL;
    __asm { cpuid }
    v13 = __PAIR64__(_RDX, _RCX);
    v12 = __PAIR64__(_RBX, _RAX);
    v9 = (void *)(v3 ^ ((unsigned __int64)(unsigned int)ExGenRandom(0) << SBYTE1(_RAX)));
  }
  else
  {
    v9 = 0LL;
  }
  KeInitializeDpc(&CmpFreezeThawDpc, (PKDEFERRED_ROUTINE)CmpFreezeThawDpcRoutine, v9);
  KeInitializeTimerEx(&CmpFreezeThawTimer, NotificationTimer);
  CmpFreezeThawWorkItem.Parameter = 0LL;
  CmpFreezeThawWorkItem.List.Flink = 0LL;
  CmpFreezeThawWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpFreezeThawWorker;
  LOBYTE(v10) = 1;
  CmpNoWrite = CmpMiniNTBoot;
  CmpWorkerDataInitialized = 1;
  CmpWasSetupBoot = a1;
  CmpEnableLazyFlushTimerInitialized = 1;
  result = PoRegisterCoalescingCallback(CmpCoalescingCallback, v10, &CmpCoalescingRegistration, 0LL, v12, v13);
  if ( (int)result >= 0 )
    CmpCoalescingCallbackActive = 1;
  return result;
}

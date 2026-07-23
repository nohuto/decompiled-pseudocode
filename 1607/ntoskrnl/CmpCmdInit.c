/*
 * XREFs of CmpCmdInit @ 0x14056F72C
 * Callers:
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PoRegisterCoalescingCallback @ 0x14056F8D0 (PoRegisterCoalescingCallback.c)
 *     CmpInitializeLazyWriters @ 0x14056F98C (CmpInitializeLazyWriters.c)
 */

__int64 __fastcall CmpCmdInit(char a1)
{
  PVOID PoolWithTag; // rax
  unsigned __int64 v3; // rsi
  void *v4; // r8
  __int64 v10; // rdx
  __int64 result; // rax

  CmpInitializeLazyWriters();
  CmpForceFlushWorkItem.Parameter = 0LL;
  CmpForceFlushWorkItem.List.Flink = 0LL;
  CmpForceFlushWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpForceFlushWorker;
  KeInitializeDpc(&CmpEnableLazyFlushDpc, (PKDEFERRED_ROUTINE)CmpEnableLazyFlushDpcRoutine, &CmpHoldLazyFlush);
  KeInitializeTimerEx(&CmpEnableLazyFlushTimer, NotificationTimer);
  KiSetTimerEx((__int64)&CmpEnableLazyFlushTimer, -6000000000LL, 0, 0, (__int64)&CmpEnableLazyFlushDpc);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x58637044u);
  v3 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    _RAX = 2147483656LL;
    __asm { cpuid }
    v4 = (void *)(v3 ^ ((unsigned __int64)(unsigned int)ExGenRandom(0) << SBYTE1(_RAX)));
  }
  else
  {
    v4 = 0LL;
  }
  KeInitializeDpc(&CmpFreezeThawDpc, (PKDEFERRED_ROUTINE)CmpFreezeThawDpcRoutine, v4);
  KeInitializeTimerEx(&CmpFreezeThawTimer, NotificationTimer);
  CmpFreezeThawWorkItem.Parameter = 0LL;
  CmpFreezeThawWorkItem.List.Flink = 0LL;
  CmpFreezeThawWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpFreezeThawWorker;
  LOBYTE(v10) = 1;
  CmpNoWrite = CmpMiniNTBoot;
  CmpWorkerDataInitialized = 1;
  CmpWasSetupBoot = a1;
  CmpEnableLazyFlushTimerInitialized = 1;
  result = PoRegisterCoalescingCallback(CmpCoalescingCallback, v10, &CmpCoalescingRegistration, 0LL);
  if ( (int)result >= 0 )
    CmpCoalescingCallbackActive = 1;
  return result;
}

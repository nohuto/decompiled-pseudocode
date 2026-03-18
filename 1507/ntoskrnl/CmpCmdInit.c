/*
 * XREFs of CmpCmdInit @ 0x1405A6AF4
 * Callers:
 *     NtInitializeRegistry @ 0x140583714 (NtInitializeRegistry.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PoRegisterCoalescingCallback @ 0x1405A7100 (PoRegisterCoalescingCallback.c)
 *     CmpInitializeLazyWriters @ 0x1405A74EC (CmpInitializeLazyWriters.c)
 */

__int64 __fastcall CmpCmdInit(char a1)
{
  PVOID PoolWithTag; // rax
  unsigned __int64 v3; // rsi
  void *v9; // r8
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
  result = PoRegisterCoalescingCallback(CmpCoalescingCallback, v10, &CmpCoalescingRegistration, 0LL);
  if ( (int)result >= 0 )
    CmpCoalescingCallbackActive = 1;
  return result;
}

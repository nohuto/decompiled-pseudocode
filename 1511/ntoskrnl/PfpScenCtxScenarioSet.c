/*
 * XREFs of PfpScenCtxScenarioSet @ 0x1403A6580
 * Callers:
 *     PfPowerActionNotify @ 0x1403A46FC (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x14050B304 (PfpProcessScenarioPhase.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PfpServiceMainThreadBoost @ 0x1401175A4 (PfpServiceMainThreadBoost.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140117A70 (PfpScenCtxWaiterTimedOut.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PfpScenCtxPrefetchAbortSet @ 0x14039D54C (PfpScenCtxPrefetchAbortSet.c)
 *     PfpScenCtxPrefetchStateSet @ 0x14039D6DC (PfpScenCtxPrefetchStateSet.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1404F555C (PfpServiceMainThreadBoostPrep.c)
 */

void __fastcall PfpScenCtxScenarioSet(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  KPRIORITY v11; // ebp
  int v12; // edx
  BOOL v13; // eax
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+38h] [rbp-20h]

  Object = 0LL;
  P = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    PfpServiceMainThreadBoostPrep(BugCheckParameter2, &Object);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
  v11 = 1;
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( a3 || *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    v12 = *(_DWORD *)(BugCheckParameter2 + 48);
    if ( v12 )
    {
      PfpScenCtxPrefetchStateSet(BugCheckParameter2, v12, 0, 1);
      PfpScenCtxWaiterTimedOut(BugCheckParameter2);
      PfpScenCtxPrefetchAbortSet(BugCheckParameter2, *(_DWORD *)(BugCheckParameter2 + 48), 0LL, 1, 1);
      *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3;
    }
    v13 = *(_DWORD *)(BugCheckParameter2 + 48) || a3;
    *(_DWORD *)(BugCheckParameter2 + 48) = a3;
    if ( a3 )
      ++*(_DWORD *)(BugCheckParameter2 + 52);
    if ( a3 == 3 )
      *(_QWORD *)(BugCheckParameter2 + 56) = a4;
    if ( v13 )
    {
      if ( a3 )
      {
        if ( Object )
        {
          PfpServiceMainThreadBoost(BugCheckParameter2, (__int64 *)&Object);
          v11 = 0;
        }
        else
        {
          v11 = 4;
        }
      }
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64), v11, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( Object )
    ObDereferenceObjectDeferDelete(Object);
  if ( P )
    ExFreePoolWithTag(P, 0);
}

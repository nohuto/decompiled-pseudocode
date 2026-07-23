/*
 * XREFs of PfpScenCtxScenarioSet @ 0x1403D2AF4
 * Callers:
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x140545928 (PfpProcessScenarioPhase.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     PfpServiceMainThreadBoost @ 0x140126B24 (PfpServiceMainThreadBoost.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140127128 (PfpScenCtxWaiterTimedOut.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PfpScenCtxPrefetchStateSet @ 0x1403D1F5C (PfpScenCtxPrefetchStateSet.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140534B20 (PfpServiceMainThreadBoostPrep.c)
 */

void __fastcall PfpScenCtxScenarioSet(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // r14
  KPRIORITY v11; // ebp
  int v12; // eax
  int v13; // eax
  BOOL v14; // eax
  PVOID Object; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+28h] [rbp-20h]

  Object = 0LL;
  P = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    PfpServiceMainThreadBoostPrep(BugCheckParameter2, &Object);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
  v11 = 1;
  if ( v10 )
    v10[26] |= 1u;
  if ( a3 || *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    v12 = *(_DWORD *)(BugCheckParameter2 + 48);
    v14 = v12
       && (PfpScenCtxPrefetchStateSet(BugCheckParameter2, v12, 0, 1),
           PfpScenCtxWaiterTimedOut(BugCheckParameter2),
           v13 = *(_DWORD *)(BugCheckParameter2 + 48),
           *(_QWORD *)(BugCheckParameter2 + 40) = 0LL,
           *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3,
           v13)
       || a3;
    *(_DWORD *)(BugCheckParameter2 + 48) = a3;
    if ( a3 )
      ++*(_DWORD *)(BugCheckParameter2 + 52);
    if ( a3 == 3 )
      *(_QWORD *)(BugCheckParameter2 + 56) = a4;
    if ( v14 )
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
  KeLeaveCriticalRegion();
  if ( Object )
    ObDereferenceObjectDeferDelete(Object);
  if ( P )
    ExFreePoolWithTag(P, 0);
}

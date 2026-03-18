/*
 * XREFs of PfpScenCtxScenarioSet @ 0x1403F69DC
 * Callers:
 *     PfPowerActionNotify @ 0x1403EE01C (PfPowerActionNotify.c)
 *     PfpProcessScenarioPhase @ 0x140582300 (PfpProcessScenarioPhase.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PfpServiceMainThreadBoost @ 0x14014C308 (PfpServiceMainThreadBoost.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PfpScenCtxPrefetchStateSet @ 0x1403EFAB0 (PfpScenCtxPrefetchStateSet.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140569A28 (PfpServiceMainThreadBoostPrep.c)
 */

void __fastcall PfpScenCtxScenarioSet(ULONG_PTR BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r14
  KPRIORITY v12; // ebp
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  int v15; // eax
  struct _KEVENT *v16; // rcx
  int v17; // eax
  int v18; // eax
  PVOID Object; // [rsp+20h] [rbp-38h] BYREF
  PVOID P; // [rsp+28h] [rbp-30h]

  Object = 0LL;
  P = 0LL;
  if ( ((a3 - 1) & 0xFFFFFFFA) == 0 && a3 != 6 )
    PfpServiceMainThreadBoostPrep(BugCheckParameter2, &Object);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2, v10);
  v12 = 1;
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( a3 || *(_DWORD *)(BugCheckParameter2 + 48) == a2 )
  {
    v15 = *(_DWORD *)(BugCheckParameter2 + 48);
    if ( v15 )
    {
      PfpScenCtxPrefetchStateSet(BugCheckParameter2, v15, 0, 1LL);
      v16 = *(struct _KEVENT **)(BugCheckParameter2 + 40);
      *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFF3 | 8;
      if ( v16 )
        KeSetEvent(v16, 0, 0);
      v17 = *(_DWORD *)(BugCheckParameter2 + 48);
      *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 8) &= 0xFFFFFFF3;
      if ( v17 )
        goto LABEL_22;
    }
    v18 = 0;
    if ( a3 )
LABEL_22:
      v18 = 1;
    *(_DWORD *)(BugCheckParameter2 + 48) = a3;
    if ( a3 )
      ++*(_DWORD *)(BugCheckParameter2 + 52);
    if ( a3 == 3 )
      *(_QWORD *)(BugCheckParameter2 + 56) = a4;
    if ( v18 )
    {
      if ( a3 )
      {
        if ( Object )
        {
          PfpServiceMainThreadBoost(BugCheckParameter2, (__int64 *)&Object);
          v12 = 0;
        }
        else
        {
          v12 = 4;
        }
      }
      KeSetEvent(*(PRKEVENT *)(BugCheckParameter2 + 64), v12, 0);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( Object )
    ObDereferenceObjectDeferDelete(Object);
  if ( P )
    ExFreePoolWithTag(P, 0);
}

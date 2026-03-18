/*
 * XREFs of PspApplyJobLimitsToProcess @ 0x14041B6A4
 * Callers:
 *     PspAddProcessToJobChain @ 0x14041B3E0 (PspAddProcessToJobChain.c)
 *     PspSetJobLimitsProcessCallback @ 0x1406C4C14 (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     KeSetDisableQuantumProcess @ 0x140009814 (KeSetDisableQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x14000ABF8 (KeSetQuantumProcess.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PsSetProcessPriorityByClass @ 0x14041C598 (PsSetProcessPriorityByClass.c)
 *     PspWritePebAffinityInfo @ 0x1404668C8 (PspWritePebAffinityInfo.c)
 *     PspSetProcessAffinitySafe @ 0x1406C0654 (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspApplyJobLimitsToProcess(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rdi
  __int64 v8; // r9
  __int64 v9; // r14
  __int16 v10; // ax
  unsigned int v11; // esi
  _BOOL8 v12; // rdx
  int v13; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 944);
  if ( (a2 & 0x20) == 0 && (*(_DWORD *)(v5 + 856) & 0x20) != 0 )
  {
    v12 = *(_BYTE *)(a1 + 1490) == 2;
    *(_BYTE *)(a1 + 1111) = *(_BYTE *)(v5 + 880);
    PsSetProcessPriorityByClass(a1, v12);
  }
  if ( (a2 & 0x10) == 0
    && (*(_DWORD *)(v5 + 856) & 0x10) != 0
    && (int)PspSetProcessAffinitySafe(a1, 1, (int)v5 + 616, 0, (__int64)&v13) >= 0
    && v13 )
  {
    PspWritePebAffinityInfo(CurrentThread, a1);
  }
  if ( (a2 & 0x100) == 0 )
  {
    if ( CurrentThread )
      --CurrentThread->SpecialApcDisable;
    v9 = KeAbPreAcquire(v5 + 1024, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 1024), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(v5 + 1024), v9, v5 + 1024, v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    if ( (*(_DWORD *)(v5 + 856) & 0x100) != 0 )
      *(_QWORD *)(a1 + 1248) = *(_QWORD *)(v5 + 808);
    else
      *(_QWORD *)(a1 + 1248) = 0LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 1024), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 1024));
    KeAbPostRelease(v5 + 1024);
    if ( CurrentThread )
    {
      v10 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v10;
      if ( !v10
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( (a2 & 0x80u) == 0 && *(_BYTE *)(a1 + 1111) != 1 )
  {
    v11 = *(_DWORD *)(v5 + 860);
    if ( v11 >= 0xA )
      v11 = *(_DWORD *)(v5 + 484);
    if ( PspUseJobSchedulingClasses )
      KeSetQuantumProcess(a1, *((_BYTE *)PspJobSchedulingClasses + v11));
    KeSetDisableQuantumProcess(a1, v11 == 9);
  }
}

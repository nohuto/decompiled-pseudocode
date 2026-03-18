/*
 * XREFs of PsFreezeProcess @ 0x1404EB390
 * Callers:
 *     DbgkpSuspendProcess @ 0x1404091C4 (DbgkpSuspendProcess.c)
 *     PspChangeProcessExecutionState @ 0x14050637C (PspChangeProcessExecutionState.c)
 * Callees:
 *     KeForceResumeProcess @ 0x14000BA84 (KeForceResumeProcess.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KeFreezeProcess @ 0x1400D24F8 (KeFreezeProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x140507404 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x1406E393C (EtwTraceFreezeThawProcess.c)
 */

char __fastcall PsFreezeProcess(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int16 v12; // ax
  int SessionId; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 772) & 8) != 0 )
    return 0;
  KeFreezeProcess(a1, a2);
  if ( (*(_DWORD *)(a1 + 772) & 8) != 0 )
  {
    KeForceResumeProcess(a1, v4, v5);
    return 0;
  }
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire(a1 + 728, 0LL, 0LL, v6);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 728), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 728), v8, a1 + 728, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    *(_QWORD *)(a1 + 1768) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
    KeAbPostRelease(a1 + 728);
    v12 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( *(_QWORD *)(a1 + 936) )
    {
      SessionId = MmGetSessionIdEx((struct _KPROCESS *)a1);
      PsInvokeWin32Callout((_KPROCESS *)0x16, a1, 1, (int)&SessionId);
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v11) = 1;
      EtwTraceFreezeThawProcess(a1, v11);
    }
    PsSetProcessTelemetryAppState(a1, 1LL);
  }
  return 1;
}

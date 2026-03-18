/*
 * XREFs of PsThawProcess @ 0x1404EBD04
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140409B74 (DbgkpSendApiMessageLpc.c)
 *     PspChangeProcessExecutionState @ 0x14050637C (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x140669324 (DbgkpSendApiMessage.c)
 *     DbgkpResumeProcess @ 0x1406696BC (DbgkpResumeProcess.c)
 * Callees:
 *     KeThawProcess @ 0x14000989C (KeThawProcess.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x140507404 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x1406E393C (EtwTraceFreezeThawProcess.c)
 */

__int64 __fastcall PsThawProcess(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int16 v11; // ax
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-40h]
  int SessionId; // [rsp+80h] [rbp+18h] BYREF
  int v16; // [rsp+88h] [rbp+20h]

  v6 = *(_DWORD *)(a1 + 616) + ((*(_DWORD *)(a1 + 440) >> 3) & 1);
  v16 = v6;
  if ( a2 )
  {
    if ( *(_QWORD *)(a1 + 936) && (*(_DWORD *)(a1 + 772) & 8) == 0 )
    {
      SessionId = MmGetSessionIdEx((struct _KPROCESS *)a1);
      PsInvokeWin32Callout((_KPROCESS *)0x17, a1, 1, (int)&SessionId);
    }
    v7 = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire(a1 + 728, 0LL, 0LL, a4);
    v10 = v8;
    v13 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 728), 0LL) )
    {
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 728), v8, a1 + 728, v9);
      v10 = v13;
    }
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    if ( *(_QWORD *)(a1 + 1768) )
    {
      v7 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0] - *(_QWORD *)(a1 + 1768);
      *(_QWORD *)(a1 + 1768) = 0LL;
      *(_QWORD *)(a1 + 1880) += v7;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 728));
    KeAbPostRelease(a1 + 728);
    v11 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v11;
    if ( !v11
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    *(_QWORD *)PspFreezeTimeBiasAddress += v7;
    if ( *(_QWORD *)(a1 + 1064) )
      *(_QWORD *)PspFreezeTimeBiasAddress32 += v7;
  }
  result = KeThawProcess(a1, a2);
  if ( a2 )
  {
    PsSetProcessTelemetryAppState(a1, 2LL);
    result = DWORD2(PerfGlobalGroupMask);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v6 )
        return EtwTraceFreezeThawProcess(a1, 0LL);
    }
  }
  return result;
}

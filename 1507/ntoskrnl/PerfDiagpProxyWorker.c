/*
 * XREFs of PerfDiagpProxyWorker @ 0x140558690
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 *     PerfDiagpIsTracingAllowed @ 0x14055890C (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpRestartCKCL @ 0x140558A0C (PerfDiagpRestartCKCL.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x140558AE8 (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14056950C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x1405C6504 (PerfDiagpUpdateCKCLEnableFlags.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r9
  signed __int8 v6; // cf
  __int64 v7; // rsi
  __int64 v8; // rcx
  const wchar_t *v9; // rcx
  int restarted; // eax
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  const wchar_t *v13; // rdx
  ULONG ReturnLength; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&qword_14032B1E0, 0LL, 0LL, v3);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14032B1E0, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_14032B1E0, v4, (ULONG_PTR)&qword_14032B1E0, v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_38;
  if ( dword_14032B1E8 != v1 - 1 )
  {
    if ( v1 == 3 )
    {
      if ( dword_14032B1E8 == 1 )
        goto LABEL_15;
    }
    else if ( ((v1 - 5) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_8;
    }
    if ( v1 < dword_14032B1E8 )
    {
      v1 = dword_14032B1E8;
      goto LABEL_15;
    }
    if ( (dword_14032B1E8 & 0xFFFFFFF7) != 0 )
      PerfDiagpRestartCKCL(L"WMI\\AutoLogger\\Circular Kernel Context Logger");
LABEL_38:
    dword_14032B1E8 = 8;
    goto LABEL_16;
  }
LABEL_8:
  if ( v1 == 1 )
  {
    PerfDiagpInitializeLoggerInfo(0LL, 0LL);
    NtTraceControl(
      EtwStopLoggerCode,
      &InputBufferLength,
      InputBufferLength,
      &InputBufferLength,
      InputBufferLength,
      &ReturnLength);
    v9 = L"Diagnostics\\Performance\\BootCKCLSettings";
    goto LABEL_13;
  }
  v8 = (unsigned int)(v1 - 2);
  if ( v1 == 2 )
  {
    v13 = L"WaitingForLogonEnableKernelFlags";
  }
  else
  {
    v8 = (unsigned int)(v1 - 3);
    if ( v1 != 3 )
    {
      if ( v1 != 4 )
      {
        if ( v1 == 5 )
        {
          PerfDiagpInitializeLoggerInfo(0LL, 0LL);
          NtTraceControl(
            EtwStopLoggerCode,
            &InputBufferLength,
            InputBufferLength,
            &InputBufferLength,
            InputBufferLength,
            &ReturnLength);
          v9 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
          goto LABEL_13;
        }
        if ( v1 != 6 )
        {
          if ( v1 != 7 )
            goto LABEL_15;
          PerfDiagpSaveActiveDCLLogFileName();
          PerfDiagpInitializeLoggerInfo(0LL, 0LL);
          NtTraceControl(
            EtwStopLoggerCode,
            &InputBufferLength,
            InputBufferLength,
            &InputBufferLength,
            InputBufferLength,
            &ReturnLength);
          v9 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
          goto LABEL_13;
        }
      }
      PerfDiagpInitializeLoggerInfo(0LL, 0LL);
      NtTraceControl(
        EtwStopLoggerCode,
        &InputBufferLength,
        InputBufferLength,
        &InputBufferLength,
        InputBufferLength,
        &ReturnLength);
      v9 = L"WMI\\AutoLogger\\Circular Kernel Context Logger";
LABEL_13:
      restarted = PerfDiagpRestartCKCL(v9);
      goto LABEL_14;
    }
    v13 = L"EnableKernelFlags";
  }
  restarted = PerfDiagpUpdateCKCLEnableFlags(v8, v13);
LABEL_14:
  if ( restarted < 0 )
    goto LABEL_38;
LABEL_15:
  dword_14032B1E8 = v1;
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14032B1E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14032B1E0);
  KeAbPostRelease((ULONG_PTR)&qword_14032B1E0);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}

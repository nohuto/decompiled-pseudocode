/*
 * XREFs of PerfDiagpProxyWorker @ 0x140508358
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     NtTraceControl @ 0x140436E10 (NtTraceControl.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1404F5104 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpIsTracingAllowed @ 0x1405085B0 (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpRestartCKCL @ 0x1405086B0 (PerfDiagpRestartCKCL.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x140508788 (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x140548F90 (PerfDiagpUpdateCKCLEnableFlags.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rsi
  __int64 v6; // rcx
  const wchar_t *v7; // rcx
  int restarted; // eax
  const wchar_t *v9; // rdx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_1402DAE60, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402DAE60, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_1402DAE60, v3, (ULONG_PTR)&qword_1402DAE60);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_37;
  if ( dword_1402DAE68 != v1 - 1 )
  {
    if ( v1 == 3 )
    {
      if ( dword_1402DAE68 == 1 )
        goto LABEL_15;
    }
    else if ( ((v1 - 5) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_8;
    }
    if ( v1 < dword_1402DAE68 )
    {
      v1 = dword_1402DAE68;
      goto LABEL_15;
    }
    if ( (dword_1402DAE68 & 0xFFFFFFF7) != 0 )
      PerfDiagpRestartCKCL(L"WMI\\AutoLogger\\Circular Kernel Context Logger");
LABEL_37:
    dword_1402DAE68 = 8;
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
    v7 = L"Diagnostics\\Performance\\BootCKCLSettings";
    goto LABEL_13;
  }
  v6 = (unsigned int)(v1 - 2);
  if ( v1 == 2 )
  {
    v9 = L"WaitingForLogonEnableKernelFlags";
  }
  else
  {
    v6 = (unsigned int)(v1 - 3);
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
          v7 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
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
          v7 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
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
      v7 = L"WMI\\AutoLogger\\Circular Kernel Context Logger";
LABEL_13:
      restarted = PerfDiagpRestartCKCL(v7);
      goto LABEL_14;
    }
    v9 = L"EnableKernelFlags";
  }
  restarted = PerfDiagpUpdateCKCLEnableFlags(v6, v9);
LABEL_14:
  if ( restarted < 0 )
    goto LABEL_37;
LABEL_15:
  dword_1402DAE68 = v1;
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402DAE60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402DAE60);
  KeAbPostRelease((ULONG_PTR)&qword_1402DAE60);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}

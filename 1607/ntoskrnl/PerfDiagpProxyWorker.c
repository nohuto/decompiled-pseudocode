/*
 * XREFs of PerfDiagpProxyWorker @ 0x1404C3114
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 *     PerfDiagpIsTracingAllowed @ 0x1404C336C (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpRestartCKCL @ 0x1404C346C (PerfDiagpRestartCKCL.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x1404C3524 (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1405345D4 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpUpdateCKCLEnableFlags @ 0x14057E008 (PerfDiagpUpdateCKCLEnableFlags.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rsi
  __int64 v6; // rcx
  const wchar_t *v7; // rcx
  int restarted; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  const wchar_t *v12; // rdx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402FDB80, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FDB80, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FDB80, v3, (ULONG_PTR)&qword_1402FDB80);
  if ( v5 )
    v5[26] |= 1u;
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_37;
  if ( dword_1402FDB88 != v1 - 1 )
  {
    if ( v1 == 3 )
    {
      if ( dword_1402FDB88 == 1 )
        goto LABEL_15;
    }
    else if ( ((v1 - 5) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_8;
    }
    if ( v1 < dword_1402FDB88 )
    {
      v1 = dword_1402FDB88;
      goto LABEL_15;
    }
    if ( (dword_1402FDB88 & 0xFFFFFFF7) != 0 )
      PerfDiagpRestartCKCL(L"WMI\\AutoLogger\\Circular Kernel Context Logger");
LABEL_37:
    dword_1402FDB88 = 8;
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
    v12 = L"WaitingForLogonEnableKernelFlags";
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
    v12 = L"EnableKernelFlags";
  }
  restarted = PerfDiagpUpdateCKCLEnableFlags(v6, v12);
LABEL_14:
  if ( restarted < 0 )
    goto LABEL_37;
LABEL_15:
  dword_1402FDB88 = v1;
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FDB80, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FDB80);
  KeAbPostRelease((ULONG_PTR)&qword_1402FDB80);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
}

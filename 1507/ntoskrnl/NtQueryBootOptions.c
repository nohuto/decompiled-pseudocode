/*
 * XREFs of NtQueryBootOptions @ 0x1406F5A1C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     IoGetEnvironmentVariableEx @ 0x140678A7C (IoGetEnvironmentVariableEx.c)
 */

NTSTATUS __stdcall NtQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  __int64 v2; // r9
  _DWORD *v6; // rcx
  ULONG v7; // ebx
  NTSTATUS v8; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rbx
  NTSTATUS EnvironmentVariable; // eax
  int v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  signed __int32 v17; // eax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  ULONG v20; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-54h] BYREF
  ULONG v22; // [rsp+3Ch] [rbp-4Ch] BYREF
  ULONG v23; // [rsp+40h] [rbp-48h] BYREF
  ULONG v24; // [rsp+44h] [rbp-44h]
  char PreviousMode; // [rsp+A0h] [rbp+18h]

  v20 = 0;
  v22 = 0;
  v23 = 0;
  if ( dword_1403254D0 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = BootOptionsLength;
    if ( (unsigned __int64)BootOptionsLength >= MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    *v6 = *v6;
    v7 = BootOptions != 0LL ? *BootOptionsLength : 0;
    v24 = v7;
    if ( v7 )
      ProbeForWrite(BootOptions, v7, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v7 = BootOptions != 0LL ? *BootOptionsLength : 0;
    v24 = v7;
  }
  if ( v7 >= 0x16 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = KeGetCurrentThread();
    v11 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, v2);
    v12 = v11;
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v11);
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
    qword_140325228 = (__int64)v10;
    v21 = 4;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (__int64)L"Timeout",
                            (__int64)&EfiBootVariablesGuid,
                            (__int64)&v20,
                            (__int64)&v21,
                            0LL);
    v8 = EnvironmentVariable;
    if ( EnvironmentVariable == -1073741789 )
    {
      v20 = -2;
LABEL_28:
      v21 = 4;
      v15 = IoGetEnvironmentVariableEx(
              (__int64)L"BootCurrent",
              (__int64)&EfiBootVariablesGuid,
              (__int64)&v22,
              (__int64)&v21,
              0LL);
      v8 = v15;
      if ( v15 == -1073741789 || v15 == -1073741568 )
      {
        v22 = -2;
LABEL_34:
        v21 = 2;
        v16 = IoGetEnvironmentVariableEx(
                (__int64)L"BootNext",
                (__int64)&EfiBootVariablesGuid,
                (__int64)&v23,
                (__int64)&v21,
                0LL);
        v8 = v16;
        if ( v16 == -1073741789 || v16 == -1073741568 )
        {
          v23 = -2;
          v8 = 0;
        }
        else if ( !v16 && v21 > 2 )
        {
          v23 = (unsigned __int16)v23;
        }
        goto LABEL_40;
      }
      if ( !v15 )
      {
        if ( v21 > 2 )
          v22 = (unsigned __int16)v22;
        goto LABEL_34;
      }
LABEL_40:
      qword_140325228 = 0LL;
      v17 = _InterlockedCompareExchange((volatile signed __int32 *)&ExpEnvironmentLock, 1, 0);
      if ( v17 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&ExpEnvironmentLock, v17);
      KeAbPostRelease((ULONG_PTR)&ExpEnvironmentLock);
      v18 = KeGetCurrentThread();
      v19 = v18->KernelApcDisable + 1;
      v18->KernelApcDisable = v19;
      if ( !v19
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
        && !v18->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      goto LABEL_46;
    }
    if ( EnvironmentVariable != -1073741568 )
    {
      if ( EnvironmentVariable )
        goto LABEL_40;
      if ( v21 <= 2 )
      {
LABEL_25:
        if ( v20 != 0xFFFF )
          goto LABEL_28;
        goto LABEL_26;
      }
      v14 = v20;
      if ( v20 != -1 )
      {
        if ( v20 > 0xFFFE )
          v14 = 65534;
        v20 = v14;
        goto LABEL_25;
      }
    }
LABEL_26:
    v20 = -1;
    goto LABEL_28;
  }
  v8 = -1073741789;
LABEL_46:
  if ( !v8 )
  {
    if ( BootOptions )
    {
      BootOptions->Version = 1;
      BootOptions->Length = 22;
      BootOptions->Timeout = v20;
      BootOptions->CurrentBootEntryId = v22;
      BootOptions->NextBootEntryId = v23;
      BootOptions->HeadlessRedirection[0] = 0;
    }
  }
  *BootOptionsLength = 22;
  return v8;
}

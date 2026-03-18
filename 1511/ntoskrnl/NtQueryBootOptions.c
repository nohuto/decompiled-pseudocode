/*
 * XREFs of NtQueryBootOptions @ 0x140671A24
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     IoGetEnvironmentVariableEx @ 0x1405FE10C (IoGetEnvironmentVariableEx.c)
 */

NTSTATUS __stdcall NtQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _DWORD *v5; // rcx
  ULONG v6; // ebx
  NTSTATUS v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS EnvironmentVariable; // eax
  int v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  ULONG v13; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-44h] BYREF
  ULONG v15; // [rsp+3Ch] [rbp-3Ch] BYREF
  ULONG v16; // [rsp+40h] [rbp-38h] BYREF
  ULONG v17; // [rsp+44h] [rbp-34h]
  char PreviousMode; // [rsp+90h] [rbp+18h]

  v13 = 0;
  v15 = 0;
  v16 = 0;
  if ( dword_1402D6390 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = BootOptionsLength;
    if ( (unsigned __int64)BootOptionsLength >= MmUserProbeAddress )
      v5 = (_DWORD *)MmUserProbeAddress;
    *v5 = *v5;
    v6 = BootOptions != 0LL ? *BootOptionsLength : 0;
    v17 = v6;
    if ( v6 )
      ProbeForWrite(BootOptions, v6, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v6 = BootOptions != 0LL ? *BootOptionsLength : 0;
    v17 = v6;
  }
  if ( v6 >= 0x16 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v14 = 4;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (__int64)L"Timeout",
                            (__int64)&EfiBootVariablesGuid,
                            (__int64)&v13,
                            (__int64)&v14,
                            0LL);
    v7 = EnvironmentVariable;
    if ( EnvironmentVariable == -1073741789 )
    {
      v13 = -2;
LABEL_24:
      v14 = 4;
      v11 = IoGetEnvironmentVariableEx(
              (__int64)L"BootCurrent",
              (__int64)&EfiBootVariablesGuid,
              (__int64)&v15,
              (__int64)&v14,
              0LL);
      v7 = v11;
      if ( v11 == -1073741789 || v11 == -1073741568 )
      {
        v15 = -2;
LABEL_30:
        v14 = 2;
        v12 = IoGetEnvironmentVariableEx(
                (__int64)L"BootNext",
                (__int64)&EfiBootVariablesGuid,
                (__int64)&v16,
                (__int64)&v14,
                0LL);
        v7 = v12;
        if ( v12 == -1073741789 || v12 == -1073741568 )
        {
          v16 = -2;
          v7 = 0;
        }
        else if ( !v12 && v14 > 2 )
        {
          v16 = (unsigned __int16)v16;
        }
        goto LABEL_36;
      }
      if ( !v11 )
      {
        if ( v14 > 2 )
          v15 = (unsigned __int16)v15;
        goto LABEL_30;
      }
LABEL_36:
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_37;
    }
    if ( EnvironmentVariable != -1073741568 )
    {
      if ( EnvironmentVariable )
        goto LABEL_36;
      if ( v14 <= 2 )
      {
LABEL_21:
        if ( v13 != 0xFFFF )
          goto LABEL_24;
        goto LABEL_22;
      }
      v10 = v13;
      if ( v13 != -1 )
      {
        if ( v13 > 0xFFFE )
          v10 = 65534;
        v13 = v10;
        goto LABEL_21;
      }
    }
LABEL_22:
    v13 = -1;
    goto LABEL_24;
  }
  v7 = -1073741789;
LABEL_37:
  if ( !v7 )
  {
    if ( BootOptions )
    {
      BootOptions->Version = 1;
      BootOptions->Length = 22;
      BootOptions->Timeout = v13;
      BootOptions->CurrentBootEntryId = v15;
      BootOptions->NextBootEntryId = v16;
      BootOptions->HeadlessRedirection[0] = 0;
    }
  }
  *BootOptionsLength = 22;
  return v7;
}

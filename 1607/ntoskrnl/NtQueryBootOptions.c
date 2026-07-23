/*
 * XREFs of NtQueryBootOptions @ 0x1406B4854
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     IoGetEnvironmentVariableEx @ 0x1406281EC (IoGetEnvironmentVariableEx.c)
 */

NTSTATUS __stdcall NtQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  __int64 v5; // rcx
  ULONG v6; // ebx
  NTSTATUS v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS EnvironmentVariable; // eax
  int v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // [rsp+30h] [rbp-48h] BYREF
  ULONG v17[2]; // [rsp+34h] [rbp-44h] BYREF
  ULONG v18; // [rsp+3Ch] [rbp-3Ch] BYREF
  ULONG v19; // [rsp+40h] [rbp-38h] BYREF
  ULONG v20; // [rsp+44h] [rbp-34h]
  char PreviousMode; // [rsp+90h] [rbp+18h]

  v17[0] = 0;
  v18 = 0;
  v19 = 0;
  if ( dword_1402FD030 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = (__int64)BootOptionsLength;
    if ( (unsigned __int64)BootOptionsLength >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v5 = *(_DWORD *)v5;
    v6 = BootOptions != 0LL ? *BootOptionsLength : 0;
    v20 = v6;
    if ( v6 )
      ProbeForWrite(BootOptions, v6, 4u);
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  else
  {
    v6 = BootOptions != 0LL ? *BootOptionsLength : 0;
    v20 = v6;
  }
  if ( v6 >= 0x16 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
    v16 = 4;
    EnvironmentVariable = IoGetEnvironmentVariableEx(
                            (__int64)L"Timeout",
                            (__int64)&EfiBootVariablesGuid,
                            (__int64)v17,
                            (__int64)&v16,
                            0LL);
    v7 = EnvironmentVariable;
    if ( EnvironmentVariable == -1073741789 )
    {
      v17[0] = -2;
LABEL_24:
      v16 = 4;
      v11 = IoGetEnvironmentVariableEx(
              (__int64)L"BootCurrent",
              (__int64)&EfiBootVariablesGuid,
              (__int64)&v18,
              (__int64)&v16,
              0LL);
      v7 = v11;
      if ( v11 == -1073741789 || v11 == -1073741568 )
      {
        v18 = -2;
LABEL_30:
        v16 = 2;
        v12 = IoGetEnvironmentVariableEx(
                (__int64)L"BootNext",
                (__int64)&EfiBootVariablesGuid,
                (__int64)&v19,
                (__int64)&v16,
                0LL);
        v7 = v12;
        if ( v12 == -1073741789 || v12 == -1073741568 )
        {
          v19 = -2;
          v7 = 0;
        }
        else if ( !v12 && v16 > 2 )
        {
          v19 = (unsigned __int16)v19;
        }
        goto LABEL_36;
      }
      if ( !v11 )
      {
        if ( v16 > 2 )
          v18 = (unsigned __int16)v18;
        goto LABEL_30;
      }
LABEL_36:
      ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
      goto LABEL_37;
    }
    if ( EnvironmentVariable != -1073741568 )
    {
      if ( EnvironmentVariable )
        goto LABEL_36;
      if ( v16 <= 2 )
      {
LABEL_21:
        if ( v17[0] != 0xFFFF )
          goto LABEL_24;
        goto LABEL_22;
      }
      v10 = v17[0];
      if ( v17[0] != -1 )
      {
        if ( v17[0] > 0xFFFE )
          v10 = 65534;
        v17[0] = v10;
        goto LABEL_21;
      }
    }
LABEL_22:
    v17[0] = -1;
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
      BootOptions->Timeout = v17[0];
      BootOptions->CurrentBootEntryId = v18;
      BootOptions->NextBootEntryId = v19;
      BootOptions->HeadlessRedirection[0] = 0;
    }
  }
  *BootOptionsLength = 22;
  return v7;
}

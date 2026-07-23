/*
 * XREFs of NtSetBootOptions @ 0x1406B5388
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x140628318 (IoSetEnvironmentVariableEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  char v2; // si
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 p_Length; // rax
  __int64 Length; // rcx
  char *v8; // rcx
  ULONG NextBootEntryId; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG Timeout; // [rsp+34h] [rbp-24h] BYREF
  _DWORD v17[8]; // [rsp+38h] [rbp-20h] BYREF

  v2 = FieldsToChange;
  Timeout = 0;
  v17[0] = 0;
  if ( dword_1402FD030 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    p_Length = (__int64)&BootOptions->Length;
    if ( (unsigned __int64)&BootOptions->Length >= 0x7FFFFFFF0000LL )
      p_Length = 0x7FFFFFFF0000LL;
    Length = *(unsigned int *)p_Length;
  }
  else
  {
    Length = BootOptions->Length;
  }
  v17[1] = Length;
  if ( (unsigned int)Length < 0x14 )
    return -1073741811;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)BootOptions & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (char *)BootOptions + Length;
    if ( (unsigned __int64)v8 > 0x7FFFFFFF0000LL || v8 < (char *)BootOptions )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  if ( BootOptions->Version != 1 )
    return -1073741811;
  Timeout = BootOptions->Timeout;
  NextBootEntryId = BootOptions->NextBootEntryId;
  v17[0] = NextBootEntryId;
  if ( (v2 & 2) != 0 && NextBootEntryId > 0xFFFF )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v11 = 0;
  if ( (v2 & 1) != 0 )
  {
    v12 = Timeout;
    if ( Timeout == -1 )
    {
      Timeout = 0xFFFF;
    }
    else
    {
      if ( Timeout > 0xFFFE )
        v12 = 65534;
      Timeout = v12;
    }
    v11 = IoSetEnvironmentVariableEx((__int64)L"Timeout", (__int64)&EfiBootVariablesGuid, (__int64)&Timeout, 2, 1);
  }
  if ( v11 >= 0 && (v2 & 2) != 0 )
    v11 = IoSetEnvironmentVariableEx((__int64)L"BootNext", (__int64)&EfiBootVariablesGuid, (__int64)v17, 2, 1);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  return v11;
}

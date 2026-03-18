/*
 * XREFs of NtSetBootOptions @ 0x1406F6858
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     IoSetEnvironmentVariableEx @ 0x140678BA8 (IoSetEnvironmentVariableEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  __int64 v2; // r9
  char v3; // si
  KPROCESSOR_MODE PreviousMode; // dl
  ULONG *p_Length; // rcx
  ULONG Length; // eax
  char *v9; // rcx
  ULONG NextBootEntryId; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  NTSTATUS v15; // ebx
  int v16; // eax
  signed __int32 v17; // eax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  ULONG Timeout; // [rsp+34h] [rbp-44h] BYREF
  _DWORD v21[16]; // [rsp+38h] [rbp-40h] BYREF

  v3 = FieldsToChange;
  Timeout = 0;
  v21[0] = 0;
  if ( dword_1403254D0 != 2 )
    return -1073741822;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    p_Length = &BootOptions->Length;
    if ( (unsigned __int64)p_Length >= MmUserProbeAddress )
      p_Length = (ULONG *)MmUserProbeAddress;
    Length = *p_Length;
  }
  else
  {
    Length = BootOptions->Length;
  }
  v21[1] = Length;
  if ( Length < 0x14 )
    return -1073741811;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)BootOptions & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (char *)BootOptions + Length;
    if ( (unsigned __int64)v9 > MmUserProbeAddress || v9 < (char *)BootOptions )
      *(_BYTE *)MmUserProbeAddress = 0;
    if ( !SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, PreviousMode) )
      return -1073741727;
  }
  if ( BootOptions->Version != 1 )
    return -1073741811;
  Timeout = BootOptions->Timeout;
  NextBootEntryId = BootOptions->NextBootEntryId;
  v21[0] = NextBootEntryId;
  if ( (v3 & 2) != 0 && NextBootEntryId > 0xFFFF )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = KeGetCurrentThread();
  v13 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, v2);
  v14 = v13;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v13);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  qword_140325228 = (__int64)v12;
  v15 = 0;
  if ( (v3 & 1) != 0 )
  {
    v16 = Timeout;
    if ( Timeout == -1 )
    {
      Timeout = 0xFFFF;
    }
    else
    {
      if ( Timeout > 0xFFFE )
        v16 = 65534;
      Timeout = v16;
    }
    v15 = IoSetEnvironmentVariableEx((__int64)L"Timeout", (__int64)&EfiBootVariablesGuid, (__int64)&Timeout, 2, 1);
  }
  if ( v15 >= 0 && (v3 & 2) != 0 )
    v15 = IoSetEnvironmentVariableEx((__int64)L"BootNext", (__int64)&EfiBootVariablesGuid, (__int64)v21, 2, 1);
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
  return v15;
}

/*
 * XREFs of NtGetNextProcess @ 0x14056803C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x1400F36C0 (ExfReleasePushLockExclusive.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x1404CDC7C (SeCreateAccessState.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtGetNextProcess(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewProcessHandle)
{
  KPROCESSOR_MODE PreviousMode; // r15
  ULONG v7; // r12d
  _QWORD *v8; // rcx
  NTSTATUS result; // eax
  unsigned __int64 NextProcess; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS v15; // esi
  __int64 v16; // r15
  __int64 v17; // r9
  __int16 v18; // ax
  signed __int32 v19[8]; // [rsp+0h] [rbp-238h] BYREF
  KPROCESSOR_MODE v20; // [rsp+40h] [rbp-1F8h]
  bool v21; // [rsp+43h] [rbp-1F5h]
  ACCESS_MASK v22; // [rsp+44h] [rbp-1F4h]
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-1E8h]
  HANDLE Handle; // [rsp+68h] [rbp-1D0h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+70h] [rbp-1C8h] BYREF
  _QWORD v27[28]; // [rsp+110h] [rbp-128h] BYREF

  v22 = DesiredAccess;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v20 = PreviousMode;
  if ( PreviousMode )
    v7 = HandleAttributes & 0xDF2;
  else
    v7 = HandleAttributes & 0x10FF2;
  if ( PreviousMode )
  {
    v8 = NewProcessHandle;
    if ( (unsigned __int64)NewProcessHandle >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = *v8;
  }
  *NewProcessHandle = 0LL;
  if ( Flags )
    return -1073741811;
  if ( ProcessHandle )
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x6E457350u,
               &Object,
               0LL);
    if ( result < 0 )
      return result;
  }
  else
  {
    Object = 0LL;
  }
  NextProcess = PsGetNextProcess(Object, *(__int64 *)&DesiredAccess, *(__int64 *)&HandleAttributes, *(__int64 *)&Flags);
  v24 = NextProcess;
  if ( !NextProcess )
    return -2147483622;
  v21 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) != 0;
  CurrentThread = KeGetCurrentThread();
  do
  {
    if ( (*(_DWORD *)(NextProcess + 772) & 0x4000000) != 0 )
      goto LABEL_13;
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v19, 0);
    if ( (*(_QWORD *)(NextProcess + 728) & 1) != 0 )
    {
      v16 = KeAbPreAcquire(NextProcess + 728, 0LL, 0LL, v13);
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(NextProcess + 728), v16, NextProcess + 728, v17);
      if ( v16 )
        *(_BYTE *)(v16 + 26) |= 1u;
      ExfReleasePushLockExclusive((volatile signed __int64 *)(NextProcess + 728));
      if ( v16 )
        KeAbPostRelease(NextProcess + 728);
      PreviousMode = v20;
    }
    v18 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( (*(_DWORD *)(NextProcess + 772) & 0x4000000) != 0 )
    {
LABEL_13:
      v15 = SeCreateAccessState(&PassedAccessState, v27, v22, (GENERIC_MAPPING *)((char *)PsProcessType + 76));
      if ( v15 < 0 )
        goto LABEL_20;
      if ( v21 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      v15 = ObOpenObjectByPointer(
              (PVOID)NextProcess,
              v7,
              &PassedAccessState,
              0,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              &Handle);
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
      if ( v15 >= 0 )
      {
        *NewProcessHandle = Handle;
        goto LABEL_20;
      }
      if ( v15 != -1073741790 )
        goto LABEL_20;
    }
    NextProcess = PsGetNextProcess((_QWORD *)NextProcess, v11, v12, v13);
    v24 = NextProcess;
  }
  while ( NextProcess );
  v15 = -2147483622;
LABEL_20:
  if ( NextProcess )
    ObfDereferenceObjectWithTag((PVOID)NextProcess, 0x6E457350u);
  return v15;
}

/*
 * XREFs of NtGetNextProcess @ 0x1404F3D3C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PspLockUnlockProcessExclusive @ 0x140096778 (PspLockUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     PsGetNextProcess @ 0x14044B810 (PsGetNextProcess.c)
 *     SeCreateAccessState @ 0x1404704A0 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 */

NTSTATUS __cdecl NtGetNextProcess(
        HANDLE ProcessHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewProcessHandle)
{
  ACCESS_MASK v5; // edi
  KPROCESSOR_MODE PreviousMode; // r15
  ULONG v8; // esi
  _QWORD *v9; // rcx
  NTSTATUS result; // eax
  _DWORD *NextProcess; // rbx
  bool v12; // r12
  struct _KTHREAD *CurrentThread; // r13
  NTSTATUS v14; // edi
  PVOID Object; // [rsp+50h] [rbp-1E8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-1D0h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+70h] [rbp-1C8h] BYREF
  _QWORD v19[28]; // [rsp+110h] [rbp-128h] BYREF

  v5 = DesiredAccess;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    v8 = HandleAttributes & 0x1DF2;
  else
    v8 = HandleAttributes & 0x11FF2;
  if ( PreviousMode )
  {
    v9 = NewProcessHandle;
    if ( (unsigned __int64)NewProcessHandle >= MmUserProbeAddress )
      v9 = (_QWORD *)MmUserProbeAddress;
    *v9 = *v9;
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
  NextProcess = (_DWORD *)PsGetNextProcess(Object);
  if ( !NextProcess )
    return -2147483622;
  v12 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) != 0;
  CurrentThread = KeGetCurrentThread();
  do
  {
    if ( (NextProcess[193] & 0x4000000) != 0
      || (PspLockUnlockProcessExclusive((__int64)NextProcess, (__int64)CurrentThread),
          (NextProcess[193] & 0x4000000) != 0) )
    {
      v14 = SeCreateAccessState(&PassedAccessState, v19, v5, (GENERIC_MAPPING *)((char *)PsProcessType + 76));
      if ( v14 < 0 )
        goto LABEL_20;
      if ( v12 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      v14 = ObOpenObjectByPointer(
              NextProcess,
              v8,
              &PassedAccessState,
              0,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              &Handle);
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
      if ( v14 >= 0 )
      {
        *NewProcessHandle = Handle;
        goto LABEL_20;
      }
      if ( v14 != -1073741790 )
        goto LABEL_20;
      v5 = DesiredAccess;
    }
    NextProcess = (_DWORD *)PsGetNextProcess(NextProcess);
  }
  while ( NextProcess );
  v14 = -2147483622;
LABEL_20:
  if ( NextProcess )
    ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
  return v14;
}

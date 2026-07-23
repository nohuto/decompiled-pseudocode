/*
 * XREFs of NtGetNextProcess @ 0x14053F9D8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PspLockUnlockProcessExclusive @ 0x1400A8F34 (PspLockUnlockProcessExclusive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsGetNextProcess @ 0x1404EBF8C (PsGetNextProcess.c)
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
  __int64 v9; // rcx
  NTSTATUS result; // eax
  _DWORD *NextProcess; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  bool v14; // r12
  struct _KTHREAD *CurrentThread; // r13
  NTSTATUS v16; // edi
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  _DWORD *v19; // [rsp+50h] [rbp-1E8h]
  HANDLE Handle; // [rsp+58h] [rbp-1E0h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+70h] [rbp-1C8h] BYREF
  _QWORD v22[28]; // [rsp+110h] [rbp-128h] BYREF

  v5 = DesiredAccess;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    v8 = HandleAttributes & 0x1DF2;
  else
    v8 = HandleAttributes & 0x11FF2;
  if ( PreviousMode )
  {
    v9 = (__int64)NewProcessHandle;
    if ( (unsigned __int64)NewProcessHandle >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
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
  v19 = NextProcess;
  if ( !NextProcess )
    return -2147483622;
  v14 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) != 0;
  CurrentThread = KeGetCurrentThread();
  do
  {
    if ( (NextProcess[193] & 0x4000000) != 0
      || (PspLockUnlockProcessExclusive((__int64)NextProcess, (__int64)CurrentThread, v12, v13),
          (NextProcess[193] & 0x4000000) != 0) )
    {
      v16 = SeCreateAccessState(&PassedAccessState, v22, v5, (GENERIC_MAPPING *)((char *)PsProcessType + 76));
      if ( v16 < 0 )
        goto LABEL_20;
      if ( v14 )
      {
        if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
          PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
        else
          PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
        PassedAccessState.RemainingDesiredAccess = 0;
      }
      v16 = ObOpenObjectByPointer(
              NextProcess,
              v8,
              &PassedAccessState,
              0,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              &Handle);
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
      if ( v16 >= 0 )
      {
        *NewProcessHandle = Handle;
        goto LABEL_20;
      }
      if ( v16 != -1073741790 )
        goto LABEL_20;
      v5 = DesiredAccess;
    }
    NextProcess = (_DWORD *)PsGetNextProcess(NextProcess);
    v19 = NextProcess;
  }
  while ( NextProcess );
  v16 = -2147483622;
LABEL_20:
  if ( NextProcess )
    ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
  return v16;
}

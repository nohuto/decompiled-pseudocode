/*
 * XREFs of NtGetNextThread @ 0x1404B8554
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14067D3B4 (PsSynchronizeWithThreadInsertion.c)
 */

NTSTATUS __cdecl NtGetNextThread(
        HANDLE ProcessHandle,
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Flags,
        PHANDLE NewThreadHandle)
{
  ACCESS_MASK v6; // esi
  KPROCESSOR_MODE PreviousMode; // r13
  ULONG v10; // r12d
  __int64 v11; // rcx
  NTSTATUS result; // eax
  NTSTATUS v13; // esi
  PVOID v14; // r14
  PVOID v15; // rax
  _DWORD *NextProcessThread; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v18; // r14
  void *v19; // rcx
  bool v20; // [rsp+40h] [rbp-208h]
  PVOID Object; // [rsp+48h] [rbp-200h] BYREF
  PVOID v23; // [rsp+50h] [rbp-1F8h] BYREF
  _DWORD *v24; // [rsp+58h] [rbp-1F0h]
  HANDLE Handle; // [rsp+60h] [rbp-1E8h] BYREF
  PHANDLE v26; // [rsp+68h] [rbp-1E0h]
  struct _KTHREAD *v27; // [rsp+78h] [rbp-1D0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _QWORD v29[28]; // [rsp+130h] [rbp-118h] BYREF

  v6 = DesiredAccess;
  v26 = NewThreadHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    v10 = HandleAttributes & 0x1DF2;
  else
    v10 = HandleAttributes & 0x11FF2;
  if ( PreviousMode )
  {
    v11 = (__int64)NewThreadHandle;
    if ( (unsigned __int64)NewThreadHandle >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
  }
  *NewThreadHandle = 0LL;
  if ( Flags )
    return -1073741811;
  result = ObReferenceObjectByHandleWithTag(
             ProcessHandle,
             0x400u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x6E457350u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    if ( ThreadHandle )
    {
      v13 = ObReferenceObjectByHandleWithTag(
              ThreadHandle,
              0,
              (POBJECT_TYPE)PsThreadType,
              PreviousMode,
              0x6E457350u,
              &v23,
              0LL);
      v14 = Object;
      if ( v13 < 0 )
        goto LABEL_27;
      v15 = v23;
      if ( *((PVOID *)v23 + 68) != Object )
      {
        ObfDereferenceObjectWithTag(v23, 0x6E457350u);
        v13 = -1073741811;
        goto LABEL_27;
      }
      v6 = DesiredAccess;
    }
    else
    {
      v15 = 0LL;
      v23 = 0LL;
      v14 = Object;
    }
    NextProcessThread = (_DWORD *)PsGetNextProcessThread(v14, v15);
    v24 = NextProcessThread;
    if ( NextProcessThread )
    {
      v20 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) != 0;
      CurrentThread = KeGetCurrentThread();
      v27 = CurrentThread;
      v18 = Object;
      do
      {
        if ( (NextProcessThread[432] & 2) != 0
          || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[432] & 2) != 0) )
        {
          v13 = SeCreateAccessState(&PassedAccessState, v29, v6, (GENERIC_MAPPING *)((char *)PsProcessType + 76));
          if ( v13 < 0 )
            goto LABEL_20;
          if ( v20 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          v13 = ObOpenObjectByPointer(
                  NextProcessThread,
                  v10,
                  &PassedAccessState,
                  0,
                  (POBJECT_TYPE)PsThreadType,
                  PreviousMode,
                  &Handle);
          SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
          if ( v13 >= 0 )
          {
            *v26 = Handle;
            goto LABEL_20;
          }
          if ( v13 != -1073741790 )
            goto LABEL_20;
        }
        NextProcessThread = (_DWORD *)PsGetNextProcessThread(v18, NextProcessThread);
        v24 = NextProcessThread;
        CurrentThread = v27;
        v6 = DesiredAccess;
      }
      while ( NextProcessThread );
      v13 = -2147483622;
LABEL_20:
      ObfDereferenceObjectWithTag(v18, 0x6E457350u);
      if ( !NextProcessThread )
        return v13;
      v19 = NextProcessThread;
LABEL_22:
      ObfDereferenceObjectWithTag(v19, 0x6E457350u);
      return v13;
    }
    v13 = -2147483622;
LABEL_27:
    v19 = v14;
    goto LABEL_22;
  }
  return result;
}

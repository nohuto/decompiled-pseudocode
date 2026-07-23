/*
 * XREFs of NtGetNextThread @ 0x1404BE9DC
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     PsGetNextProcessThread @ 0x140424290 (PsGetNextProcessThread.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x1404704A0 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     PsSynchronizeWithThreadInsertion @ 0x14063EC60 (PsSynchronizeWithThreadInsertion.c)
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
  _QWORD *v11; // rcx
  NTSTATUS result; // eax
  NTSTATUS v13; // esi
  PVOID v14; // r14
  _QWORD *v15; // rax
  _DWORD *NextProcessThread; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v18; // r14
  void *v19; // rcx
  bool v20; // [rsp+41h] [rbp-207h]
  PVOID Object; // [rsp+48h] [rbp-200h] BYREF
  _DWORD *v23; // [rsp+50h] [rbp-1F8h]
  PVOID v24; // [rsp+58h] [rbp-1F0h] BYREF
  struct _KTHREAD *v25; // [rsp+68h] [rbp-1E0h]
  HANDLE Handle; // [rsp+78h] [rbp-1D0h] BYREF
  PHANDLE v27; // [rsp+80h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _QWORD v29[28]; // [rsp+130h] [rbp-118h] BYREF

  v6 = DesiredAccess;
  v27 = NewThreadHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    v10 = HandleAttributes & 0x1DF2;
  else
    v10 = HandleAttributes & 0x11FF2;
  if ( PreviousMode )
  {
    v11 = NewThreadHandle;
    if ( (unsigned __int64)NewThreadHandle >= MmUserProbeAddress )
      v11 = (_QWORD *)MmUserProbeAddress;
    *v11 = *v11;
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
              &v24,
              0LL);
      v14 = Object;
      if ( v13 < 0 )
        goto LABEL_30;
      v15 = v24;
      if ( *((PVOID *)v24 + 68) != Object )
      {
        ObfDereferenceObjectWithTag(v24, 0x6E457350u);
        v13 = -1073741811;
        goto LABEL_30;
      }
      v6 = DesiredAccess;
    }
    else
    {
      v15 = 0LL;
      v24 = 0LL;
      v14 = Object;
    }
    NextProcessThread = PsGetNextProcessThread((__int64)v14, v15);
    v23 = NextProcessThread;
    if ( NextProcessThread )
    {
      v20 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) != 0;
      CurrentThread = KeGetCurrentThread();
      v25 = CurrentThread;
      v18 = Object;
      do
      {
        if ( (NextProcessThread[431] & 2) != 0
          || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[431] & 2) != 0) )
        {
          v13 = SeCreateAccessState(&PassedAccessState, v29, v6, (GENERIC_MAPPING *)((char *)PsProcessType + 76));
          if ( v13 < 0 )
            goto LABEL_23;
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
            *v27 = Handle;
            goto LABEL_23;
          }
          if ( v13 != -1073741790 )
            goto LABEL_23;
        }
        NextProcessThread = PsGetNextProcessThread((__int64)v18, NextProcessThread);
        v23 = NextProcessThread;
        CurrentThread = v25;
        v6 = DesiredAccess;
      }
      while ( NextProcessThread );
      v13 = -2147483622;
LABEL_23:
      ObfDereferenceObjectWithTag(v18, 0x6E457350u);
      if ( !NextProcessThread )
        return v13;
      v19 = NextProcessThread;
LABEL_25:
      ObfDereferenceObjectWithTag(v19, 0x6E457350u);
      return v13;
    }
    v13 = -2147483622;
LABEL_30:
    v19 = v14;
    goto LABEL_25;
  }
  return result;
}

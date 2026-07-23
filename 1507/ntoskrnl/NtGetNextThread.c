/*
 * XREFs of NtGetNextThread @ 0x140554914
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x1404CDC7C (SeCreateAccessState.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1406BF7F4 (PsSynchronizeWithThreadInsertion.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // esi
  PVOID v16; // r14
  _QWORD *v17; // rax
  _DWORD *NextProcessThread; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  PVOID v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rcx
  bool v24; // [rsp+41h] [rbp-207h]
  PVOID Object; // [rsp+48h] [rbp-200h] BYREF
  _DWORD *v27; // [rsp+50h] [rbp-1F8h]
  PVOID v28; // [rsp+58h] [rbp-1F0h] BYREF
  struct _KTHREAD *v29; // [rsp+68h] [rbp-1E0h]
  HANDLE Handle; // [rsp+78h] [rbp-1D0h] BYREF
  PHANDLE v31; // [rsp+80h] [rbp-1C8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+90h] [rbp-1B8h] BYREF
  _QWORD v33[28]; // [rsp+130h] [rbp-118h] BYREF

  v6 = DesiredAccess;
  v31 = NewThreadHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    v10 = HandleAttributes & 0xDF2;
  else
    v10 = HandleAttributes & 0x10FF2;
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
      v15 = ObReferenceObjectByHandleWithTag(
              ThreadHandle,
              0,
              (POBJECT_TYPE)PsThreadType,
              PreviousMode,
              0x6E457350u,
              &v28,
              0LL);
      v16 = Object;
      if ( v15 < 0 )
        goto LABEL_30;
      v17 = v28;
      if ( *((PVOID *)v28 + 68) != Object )
      {
        ObfDereferenceObjectWithTag(v28, 0x6E457350u);
        v15 = -1073741811;
        goto LABEL_30;
      }
      v6 = DesiredAccess;
    }
    else
    {
      v17 = 0LL;
      v28 = 0LL;
      v16 = Object;
    }
    NextProcessThread = PsGetNextProcessThread((__int64)v16, v17, v13, v14);
    v27 = NextProcessThread;
    if ( NextProcessThread )
    {
      v24 = SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) != 0;
      CurrentThread = KeGetCurrentThread();
      v29 = CurrentThread;
      v20 = Object;
      do
      {
        if ( (NextProcessThread[431] & 2) != 0
          || (PsSynchronizeWithThreadInsertion(NextProcessThread, CurrentThread), (NextProcessThread[431] & 2) != 0) )
        {
          v15 = SeCreateAccessState(&PassedAccessState, v33, v6, (GENERIC_MAPPING *)((char *)PsProcessType + 76));
          if ( v15 < 0 )
            goto LABEL_23;
          if ( v24 )
          {
            if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
              PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
            else
              PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
            PassedAccessState.RemainingDesiredAccess = 0;
          }
          v15 = ObOpenObjectByPointer(
                  NextProcessThread,
                  v10,
                  &PassedAccessState,
                  0,
                  (POBJECT_TYPE)PsThreadType,
                  PreviousMode,
                  &Handle);
          SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
          if ( v15 >= 0 )
          {
            *v31 = Handle;
            goto LABEL_23;
          }
          if ( v15 != -1073741790 )
            goto LABEL_23;
        }
        NextProcessThread = PsGetNextProcessThread((__int64)v20, NextProcessThread, v21, v22);
        v27 = NextProcessThread;
        CurrentThread = v29;
        v6 = DesiredAccess;
      }
      while ( NextProcessThread );
      v15 = -2147483622;
LABEL_23:
      ObfDereferenceObjectWithTag(v20, 0x6E457350u);
      if ( !NextProcessThread )
        return v15;
      v23 = NextProcessThread;
LABEL_25:
      ObfDereferenceObjectWithTag(v23, 0x6E457350u);
      return v15;
    }
    v15 = -2147483622;
LABEL_30:
    v23 = v16;
    goto LABEL_25;
  }
  return result;
}

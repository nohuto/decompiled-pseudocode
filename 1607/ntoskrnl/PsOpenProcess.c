/*
 * XREFs of PsOpenProcess @ 0x14041E2D0
 * Callers:
 *     NtOpenProcess @ 0x14041F590 (NtOpenProcess.c)
 *     NtAlpcOpenSenderProcess @ 0x14049E4AC (NtAlpcOpenSenderProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14000F260 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14000F3E0 (SepCreateAccessStateFromSubjectContext.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14041423C (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140414350 (SePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     PsLookupProcessByProcessId @ 0x14041F5C0 (PsLookupProcessByProcessId.c)
 *     PsLookupProcessThreadByCid @ 0x1404B6B78 (PsLookupProcessThreadByCid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenProcess(
        unsigned __int64 a1,
        ACCESS_MASK a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE a6)
{
  _QWORD *v7; // r14
  bool v8; // cl
  KPROCESSOR_MODE v9; // di
  int v10; // eax
  char v11; // al
  GENERIC_MAPPING *v12; // rbx
  int v13; // ebx
  BOOLEAN v14; // al
  BOOLEAN v15; // bl
  PEPROCESS v16; // rdi
  KPROCESSOR_MODE AccessMode; // [rsp+28h] [rbp-2B0h]
  int HandleAttributes; // [rsp+44h] [rbp-294h]
  int Blink; // [rsp+50h] [rbp-288h]
  int v21; // [rsp+58h] [rbp-280h] BYREF
  ACCESS_MASK v22; // [rsp+60h] [rbp-278h] BYREF
  int v23; // [rsp+68h] [rbp-270h] BYREF
  PEPROCESS Process; // [rsp+70h] [rbp-268h] BYREF
  HANDLE ProcessId[2]; // [rsp+78h] [rbp-260h] BYREF
  PVOID Object; // [rsp+88h] [rbp-250h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-248h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+98h] [rbp-240h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-220h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+D8h] [rbp-200h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+F0h] [rbp-1E8h] BYREF
  __int64 v32[28]; // [rsp+190h] [rbp-148h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+270h] [rbp-68h] BYREF
  ACCESS_MASK *v34; // [rsp+280h] [rbp-58h]
  __int64 v35; // [rsp+288h] [rbp-50h]
  int *v36; // [rsp+290h] [rbp-48h]
  __int64 v37; // [rsp+298h] [rbp-40h]

  v7 = (_QWORD *)a1;
  *(_OWORD *)ProcessId = 0LL;
  Blink = -1;
  if ( a5 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = *(_QWORD *)(a3 + 16) != 0LL;
    HandleAttributes = *(_DWORD *)(a3 + 24) & 0x1DF2;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)ProcessId = *a4;
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    v9 = a6;
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 16) != 0LL;
    v9 = a6;
    if ( a6 )
      v10 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    else
      v10 = *(_DWORD *)(a3 + 24) & 0x11FF2;
    HandleAttributes = v10;
    if ( a4 )
    {
      *(_OWORD *)ProcessId = *a4;
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( v8 || !v11 )
  {
    v13 = -1073741776;
    goto LABEL_19;
  }
  v12 = (GENERIC_MAPPING *)((char *)PsProcessType + 76);
  SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
  v13 = SepCreateAccessStateFromSubjectContext(&SubjectContext, &PassedAccessState, v32, a2, v12);
  if ( v13 >= 0 )
  {
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectSecurityContext);
    v14 = SePrivilegeCheck(&RequiredPrivileges, &SubjectSecurityContext, v9);
    v15 = v14;
    if ( v9 )
      SePrivilegedServiceAuditAlarm(0LL, (__int64 *)&SubjectSecurityContext, (int *)&RequiredPrivileges, v14);
    SeReleaseSubjectContext(&SubjectSecurityContext);
    if ( v15 )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    if ( ProcessId[1] )
    {
      v13 = PsLookupProcessThreadByCid(ProcessId, &Process, &Object);
      if ( v13 >= 0 )
      {
        ObfDereferenceObject(Object);
LABEL_17:
        AccessMode = v9;
        v16 = Process;
        v13 = ObOpenObjectByPointer(
                Process,
                HandleAttributes,
                &PassedAccessState,
                0,
                (POBJECT_TYPE)PsProcessType,
                AccessMode,
                &Handle);
        SepDeleteAccessState((__int64)&PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState.SubjectSecurityContext);
        Blink = (int)v16[1].Header.WaitListHead.Blink;
        ObfDereferenceObjectWithTag(v16, 0x746C6644u);
        if ( v13 >= 0 )
          *v7 = Handle;
        goto LABEL_19;
      }
    }
    else
    {
      v13 = PsLookupProcessByProcessId(ProcessId[0], &Process);
      if ( v13 >= 0 )
        goto LABEL_17;
    }
    SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
  }
LABEL_19:
  v23 = v13;
  v22 = a2;
  v21 = Blink;
  UserData.Ptr = (ULONGLONG)&v21;
  *(_QWORD *)&UserData.Size = 4LL;
  v34 = &v22;
  v35 = 4LL;
  v36 = &v23;
  v37 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENPROCESS, 0LL, 3u, &UserData);
  return (unsigned int)v13;
}

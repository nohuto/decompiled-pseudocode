/*
 * XREFs of PsOpenThread @ 0x140470C60
 * Callers:
 *     NtOpenThread @ 0x14046F934 (NtOpenThread.c)
 *     NtAlpcOpenSenderThread @ 0x1404B1A58 (NtAlpcOpenSenderThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     PsLookupThreadByThreadId @ 0x140436060 (PsLookupThreadByThreadId.c)
 *     SeCreateAccessState @ 0x1404704A0 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     PsLookupProcessThreadByCid @ 0x1404AFDB0 (PsLookupProcessThreadByCid.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenThread(HANDLE *a1, ACCESS_MASK a2, __int64 a3, _OWORD *a4, char a5, KPROCESSOR_MODE a6)
{
  HANDLE *v7; // r14
  bool v8; // al
  ULONG v9; // edi
  char v10; // cl
  KPROCESSOR_MODE AccessMode; // r15
  int v12; // ebx
  PETHREAD v13; // rsi
  HANDLE ThreadId[2]; // [rsp+50h] [rbp-258h] BYREF
  ACCESS_MASK v16; // [rsp+60h] [rbp-248h] BYREF
  int v17; // [rsp+68h] [rbp-240h] BYREF
  int v18; // [rsp+70h] [rbp-238h] BYREF
  PETHREAD Thread; // [rsp+78h] [rbp-230h] BYREF
  ULONG HandleAttributes; // [rsp+80h] [rbp-228h]
  int v21; // [rsp+88h] [rbp-220h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-218h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+A0h] [rbp-208h] BYREF
  __int64 v24[28]; // [rsp+140h] [rbp-168h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+220h] [rbp-88h] BYREF
  int *v26; // [rsp+230h] [rbp-78h]
  __int64 v27; // [rsp+238h] [rbp-70h]
  ACCESS_MASK *v28; // [rsp+240h] [rbp-68h]
  __int64 v29; // [rsp+248h] [rbp-60h]
  int *v30; // [rsp+250h] [rbp-58h]
  __int64 v31; // [rsp+258h] [rbp-50h]

  v7 = a1;
  *(_OWORD *)ThreadId = 0LL;
  if ( a5 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (HANDLE *)MmUserProbeAddress;
    *a1 = *a1;
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = *(_QWORD *)(a3 + 16) != 0LL;
    v9 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    HandleAttributes = v9;
    if ( a4 )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *(_OWORD *)ThreadId = *a4;
      v10 = 1;
      v9 = HandleAttributes;
    }
    else
    {
      v10 = 0;
    }
    AccessMode = a6;
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 16) != 0LL;
    AccessMode = a6;
    if ( a6 )
      v9 = *(_DWORD *)(a3 + 24) & 0x1DF2;
    else
      v9 = *(_DWORD *)(a3 + 24) & 0x11FF2;
    if ( a4 )
    {
      *(_OWORD *)ThreadId = *a4;
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( v8 || !v10 )
  {
    v12 = -1073741776;
    goto LABEL_24;
  }
  v12 = SeCreateAccessState(&PassedAccessState, v24, a2, (GENERIC_MAPPING *)((char *)PsThreadType + 76));
  if ( v12 >= 0 )
  {
    if ( SeSinglePrivilegeCheck(SeDebugPrivilege, AccessMode) )
    {
      if ( (PassedAccessState.RemainingDesiredAccess & 0x2000000) != 0 )
        PassedAccessState.PreviouslyGrantedAccess |= 0x1FFFFFu;
      else
        PassedAccessState.PreviouslyGrantedAccess |= PassedAccessState.RemainingDesiredAccess;
      PassedAccessState.RemainingDesiredAccess = 0;
    }
    if ( ThreadId[0] )
    {
      v12 = PsLookupProcessThreadByCid(ThreadId, 0LL, &Thread);
      if ( v12 >= 0 )
      {
        v13 = Thread;
LABEL_22:
        v12 = ObOpenObjectByPointer(v13, v9, &PassedAccessState, 0, (POBJECT_TYPE)PsThreadType, AccessMode, &Handle);
        SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
        ObfDereferenceObject(v13);
        if ( v12 >= 0 )
          *v7 = Handle;
        goto LABEL_24;
      }
    }
    else
    {
      v12 = PsLookupThreadByThreadId(ThreadId[1], &Thread);
      if ( v12 >= 0 )
      {
        v13 = Thread;
        ThreadId[0] = *(HANDLE *)&Thread[1].CurrentRunTime;
        goto LABEL_22;
      }
    }
    SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
  }
LABEL_24:
  v17 = v12;
  v16 = a2;
  v21 = (int)ThreadId[1];
  v18 = (int)ThreadId[0];
  UserData.Ptr = (ULONGLONG)&v18;
  *(_QWORD *)&UserData.Size = 4LL;
  v26 = &v21;
  v27 = 4LL;
  v28 = &v16;
  v29 = 4LL;
  v30 = &v17;
  v31 = 4LL;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, &UserData);
  return (unsigned int)v12;
}

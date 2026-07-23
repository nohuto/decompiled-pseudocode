/*
 * XREFs of PsOpenThread @ 0x1404040D0
 * Callers:
 *     NtOpenThread @ 0x1404040A8 (NtOpenThread.c)
 *     NtAlpcOpenSenderThread @ 0x14049DD94 (NtAlpcOpenSenderThread.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     PsLookupThreadByThreadId @ 0x14041F6B0 (PsLookupThreadByThreadId.c)
 *     PsLookupProcessThreadByCid @ 0x1404B6B78 (PsLookupProcessThreadByCid.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsOpenThread(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        char a5,
        KPROCESSOR_MODE PreviousMode)
{
  _QWORD *v7; // r12
  bool v8; // cl
  ULONG v9; // esi
  char v10; // al
  KPROCESSOR_MODE AccessMode; // r14
  NTSTATUS v12; // edi
  PETHREAD Thread; // [rsp+50h] [rbp-248h] BYREF
  HANDLE ThreadId[2]; // [rsp+58h] [rbp-240h] BYREF
  ULONG HandleAttributes; // [rsp+68h] [rbp-230h]
  int v17; // [rsp+70h] [rbp-228h] BYREF
  int v18; // [rsp+78h] [rbp-220h] BYREF
  unsigned int v19; // [rsp+80h] [rbp-218h] BYREF
  NTSTATUS v20; // [rsp+88h] [rbp-210h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-208h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+A0h] [rbp-1F8h] BYREF
  char v23[224]; // [rsp+140h] [rbp-158h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+220h] [rbp-78h] BYREF
  int *v25; // [rsp+230h] [rbp-68h]
  int v26; // [rsp+238h] [rbp-60h]
  int v27; // [rsp+23Ch] [rbp-5Ch]
  int *v28; // [rsp+240h] [rbp-58h]
  int v29; // [rsp+248h] [rbp-50h]
  int v30; // [rsp+24Ch] [rbp-4Ch]
  NTSTATUS *v31; // [rsp+250h] [rbp-48h]
  int v32; // [rsp+258h] [rbp-40h]
  int v33; // [rsp+25Ch] [rbp-3Ch]

  v7 = (_QWORD *)a1;
  *(_OWORD *)ThreadId = 0LL;
  if ( a5 )
  {
    if ( a1 >= 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    *(_QWORD *)a1 = *(_QWORD *)a1;
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
    AccessMode = PreviousMode;
  }
  else
  {
    v8 = *(_QWORD *)(a3 + 16) != 0LL;
    AccessMode = PreviousMode;
    if ( PreviousMode )
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
  v12 = SeCreateAccessState(&PassedAccessState, v23, a2, (char *)PsThreadType + 76);
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
LABEL_22:
        v12 = ObOpenObjectByPointer(Thread, v9, &PassedAccessState, 0, (POBJECT_TYPE)PsThreadType, AccessMode, &Handle);
        SeDeleteAccessState(&PassedAccessState);
        ObfDereferenceObject(Thread);
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
        ThreadId[0] = *(HANDLE *)&Thread[1].CurrentRunTime;
        goto LABEL_22;
      }
    }
    SeDeleteAccessState(&PassedAccessState);
  }
LABEL_24:
  v20 = v12;
  v19 = a2;
  v18 = (int)ThreadId[1];
  v17 = (int)ThreadId[0];
  UserData.Ptr = (ULONGLONG)&v17;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v25 = &v18;
  v26 = 4;
  v27 = 0;
  v28 = (int *)&v19;
  v29 = 4;
  v30 = 0;
  v31 = &v20;
  v32 = 4;
  v33 = 0;
  EtwWrite(EtwApiCallsProvRegHandle, &KERNEL_AUDIT_API_OPENTHREAD, 0LL, 4u, &UserData);
  return (unsigned int)v12;
}

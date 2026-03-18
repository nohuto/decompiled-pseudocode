/*
 * XREFs of xxxSetProcessWindowStation @ 0x1C00E3150
 * Callers:
 *     NtUserSetProcessWindowStation @ 0x1C00E3110 (NtUserSetProcessWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopW32ThreadLock @ 0x1C00829E0 (PopW32ThreadLock.c)
 *     xxxDisownClipboard @ 0x1C01F0B0C (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // r12d
  KPROCESSOR_MODE v6; // r13
  __int64 CurrentProcess; // r14
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rbx
  int v11; // eax
  _DWORD *v12; // rsi
  unsigned int v13; // edi
  ULONG v14; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rcx
  void *ProcessWin32WindowStation; // rdi
  PVOID v28; // [rsp+48h] [rbp-19h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  void *TargetHandle; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v32[3]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v33[3]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v34; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  v6 = a2;
  CurrentProcess = PsGetCurrentProcess(SourceHandle, a2, a3, a4);
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v11 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, v6, &Object, &HandleInformation);
  v12 = Object;
  v13 = v11;
  if ( v11 < 0 )
  {
    v14 = RtlNtStatusToDosError(v11);
    UserSetLastError(v14);
    return v13;
  }
  if ( *(_DWORD *)Object != gSessionId )
  {
    UserSetLastError(87);
    ObfDereferenceObject(v12);
    return 3221225485LL;
  }
  if ( ProcessWin32Process )
  {
    v16 = *(_QWORD **)(ProcessWin32Process + 640);
    if ( v16 )
    {
      if ( v16 != Object )
      {
        v17 = v16 + 10;
        v18 = v16[10];
        if ( v18 && *(_QWORD *)(*(_QWORD *)(v18 + 16) + 376LL) == ProcessWin32Process )
        {
          if ( v5 )
          {
            HMAssignmentUnlock(v17);
          }
          else
          {
            PushW32ThreadLock((__int64)Object, v33, UserDereferenceObject);
            v19 = *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 640) + 80LL);
            v32[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v32;
            v32[1] = v19;
            ++*(_DWORD *)(v19 + 8);
            xxxDisownClipboard(*(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 640) + 80LL));
            ThreadUnlock1(v21, v20);
            PopW32ThreadLock(v33);
          }
        }
        v22 = *(_QWORD *)(ProcessWin32Process + 640) + 64LL;
        if ( *(_QWORD *)v22 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 16LL) + 376LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v22);
          *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 640) + 48LL) = 0LL;
        }
        v23 = *(_QWORD *)(ProcessWin32Process + 640) + 72LL;
        if ( *(_QWORD *)v23 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v23 + 16LL) + 376LL) == ProcessWin32Process )
          HMAssignmentUnlock(v23);
        v24 = *(_QWORD *)(ProcessWin32Process + 640) + 120LL;
        while ( *(_QWORD *)v24 )
        {
          v25 = *(_QWORD *)v24;
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 16LL) + 376LL) == ProcessWin32Process )
          {
            v34 = *(_QWORD *)v24;
            *(_QWORD *)v24 = *(_QWORD *)(v25 + 280);
            *(_QWORD *)(v25 + 280) = 0LL;
            *(_DWORD *)(v34 + 288) &= ~1u;
            HMAssignmentUnlock(&v34);
          }
          else
          {
            v24 = v25 + 280;
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(ProcessWin32Process + 648) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL, 1LL) )
    {
      ObfDereferenceObject(v12);
      return 3221225495LL;
    }
    v26 = *(_QWORD *)(ProcessWin32Process + 648);
    if ( v26 )
      SetHandleFlag(v26, 1LL, 0LL);
  }
  LockObjectAssignment(ProcessWin32Process + 640, v12);
  ObfDereferenceObject(v12);
  *(_QWORD *)(ProcessWin32Process + 648) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  if ( ProcessWin32WindowStation )
  {
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, v6, &v28, 0LL) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0LL);
    }
    else
    {
      if ( v12 != v28 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(CurrentProcess, 0LL);
      }
      ObfDereferenceObject(v28);
    }
  }
  if ( !PsGetProcessWin32WindowStation(CurrentProcess)
    && ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         SourceHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0,
         2u) >= 0 )
  {
    PsSetProcessWindowStation(CurrentProcess, TargetHandle);
  }
  *(_DWORD *)(ProcessWin32Process + 656) = HandleInformation.GrantedAccess;
  if ( (v12[8] & 4) != 0 )
    *(_DWORD *)(ProcessWin32Process + 12) &= ~0x40000u;
  else
    *(_DWORD *)(ProcessWin32Process + 12) |= 0x40000u;
  if ( RtlAreAllAccessesGranted(HandleInformation.GrantedAccess, 0x200u) )
    *(_DWORD *)(ProcessWin32Process + 12) |= 0x10u;
  else
    *(_DWORD *)(ProcessWin32Process + 12) &= ~0x10u;
  return 0LL;
}

/*
 * XREFs of xxxSetProcessWindowStation @ 0x1C00DFB80
 * Callers:
 *     NtUserSetProcessWindowStation @ 0x1C00DFB40 (NtUserSetProcessWindowStation.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxDisownClipboard @ 0x1C01F0BAC (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE v5; // r13
  __int64 CurrentProcess; // r14
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rbx
  int v10; // eax
  _DWORD *v11; // rsi
  unsigned int v12; // edi
  ULONG v13; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rcx
  void *ProcessWin32WindowStation; // rdi
  PVOID v29; // [rsp+48h] [rbp-19h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  void *TargetHandle; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v33[3]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v34[3]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v35; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  CurrentProcess = PsGetCurrentProcess(SourceHandle, a2);
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v10 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, v5, &Object, &HandleInformation);
  v11 = Object;
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = RtlNtStatusToDosError(v10);
    UserSetLastError(v13);
    return v12;
  }
  if ( *(_DWORD *)Object != gSessionId )
  {
    UserSetLastError(87);
    ObfDereferenceObject(v11);
    return 3221225485LL;
  }
  if ( ProcessWin32Process )
  {
    v15 = *(_QWORD **)(ProcessWin32Process + 640);
    if ( v15 )
    {
      if ( v15 != Object )
      {
        v16 = v15 + 10;
        v17 = v15[10];
        if ( v17 && *(_QWORD *)(*(_QWORD *)(v17 + 16) + 384LL) == ProcessWin32Process )
        {
          if ( a3 )
          {
            HMAssignmentUnlock(v16);
          }
          else
          {
            PushW32ThreadLock((__int64)Object, v34, UserDereferenceObject);
            v18 = *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 640) + 80LL);
            v33[0] = *(_QWORD *)(gptiCurrent + 376LL);
            *(_QWORD *)(gptiCurrent + 376LL) = v33;
            v33[1] = v18;
            ++*(_DWORD *)(v18 + 8);
            xxxDisownClipboard(*(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 640) + 80LL));
            ThreadUnlock1(v20, v19);
            PopW32ThreadLock(v34);
          }
        }
        v21 = *(_QWORD *)(ProcessWin32Process + 640) + 64LL;
        if ( *(_QWORD *)v21 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 16LL) + 384LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v21);
          *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 640) + 48LL) = 0LL;
        }
        v22 = *(_QWORD *)(ProcessWin32Process + 640);
        v23 = *(_QWORD *)(v22 + 48);
        if ( v23 && *(_QWORD *)(v23 + 384) == ProcessWin32Process )
          *(_QWORD *)(v22 + 48) = 0LL;
        v24 = *(_QWORD *)(ProcessWin32Process + 640) + 72LL;
        if ( *(_QWORD *)v24 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 16LL) + 384LL) == ProcessWin32Process )
          HMAssignmentUnlock(v24);
        v25 = *(_QWORD *)(ProcessWin32Process + 640) + 120LL;
        while ( *(_QWORD *)v25 )
        {
          v26 = *(_QWORD *)v25;
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 16LL) + 384LL) == ProcessWin32Process )
          {
            v35 = *(_QWORD *)v25;
            *(_QWORD *)v25 = *(_QWORD *)(v26 + 280);
            *(_QWORD *)(v26 + 280) = 0LL;
            *(_DWORD *)(v35 + 288) &= ~1u;
            HMAssignmentUnlock(&v35);
          }
          else
          {
            v25 = v26 + 280;
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(ProcessWin32Process + 648) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL, 1LL) )
    {
      ObfDereferenceObject(v11);
      return 3221225495LL;
    }
    v27 = *(_QWORD *)(ProcessWin32Process + 648);
    if ( v27 )
      SetHandleFlag(v27, 1LL, 0LL);
  }
  LockObjectAssignment(ProcessWin32Process + 640, v11);
  ObfDereferenceObject(v11);
  *(_QWORD *)(ProcessWin32Process + 648) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  if ( ProcessWin32WindowStation )
  {
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, v5, &v29, 0LL) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0LL);
    }
    else
    {
      if ( v11 != v29 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(CurrentProcess, 0LL);
      }
      ObfDereferenceObject(v29);
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
  if ( (v11[8] & 4) != 0 )
    *(_DWORD *)(ProcessWin32Process + 12) &= ~0x40000u;
  else
    *(_DWORD *)(ProcessWin32Process + 12) |= 0x40000u;
  if ( RtlAreAllAccessesGranted(HandleInformation.GrantedAccess, 0x200u) )
    *(_DWORD *)(ProcessWin32Process + 12) |= 0x10u;
  else
    *(_DWORD *)(ProcessWin32Process + 12) &= ~0x10u;
  return 0LL;
}

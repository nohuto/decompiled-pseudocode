/*
 * XREFs of xxxSetProcessWindowStation @ 0x1C0105760
 * Callers:
 *     NtUserSetProcessWindowStation @ 0x1C0105720 (NtUserSetProcessWindowStation.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     xxxDisownClipboard @ 0x1C01E684C (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, KPROCESSOR_MODE a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 CurrentProcess; // r14
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rbx
  int v10; // eax
  __int64 v11; // r9
  _DWORD *v12; // rsi
  unsigned int v13; // edi
  ULONG v14; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rcx
  void *ProcessWin32WindowStation; // rdi
  PVOID v33; // [rsp+48h] [rbp-19h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  void *TargetHandle; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v37[3]; // [rsp+68h] [rbp+7h] BYREF
  _QWORD v38[3]; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v39; // [rsp+E0h] [rbp+7Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentProcess = PsGetCurrentProcess(SourceHandle);
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v10 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, a2, &Object, &HandleInformation);
  v12 = Object;
  v13 = v10;
  if ( v10 < 0 )
  {
    v14 = RtlNtStatusToDosError(v10);
    UserSetLastError(v14);
    return v13;
  }
  if ( *(_DWORD *)Object != gSessionId )
  {
    UserSetLastError(87LL);
    ObfDereferenceObject(v12);
    return 3221225485LL;
  }
  if ( ProcessWin32Process )
  {
    v16 = *(_QWORD **)(ProcessWin32Process + 632);
    if ( v16 )
    {
      if ( v16 != Object )
      {
        v17 = v16 + 10;
        v18 = v16[10];
        if ( v18 && *(_QWORD *)(*(_QWORD *)(v18 + 16) + 376LL) == ProcessWin32Process )
        {
          if ( a3 )
          {
            HMAssignmentUnlock(v17);
          }
          else
          {
            PushW32ThreadLock((__int64)Object, v38, UserDereferenceObject, v11);
            v19 = *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 632) + 80LL);
            v37[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v37;
            v37[1] = v19;
            ++*(_DWORD *)(v19 + 8);
            xxxDisownClipboard(*(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 632) + 80LL));
            ThreadUnlock1(v21, v20);
            PopW32ThreadLock(v38, v22, v23, v24);
          }
        }
        v25 = *(_QWORD *)(ProcessWin32Process + 632) + 64LL;
        if ( *(_QWORD *)v25 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 16LL) + 376LL) == ProcessWin32Process )
        {
          HMAssignmentUnlock(v25);
          *(_QWORD *)(*(_QWORD *)(ProcessWin32Process + 632) + 48LL) = 0LL;
        }
        v26 = *(_QWORD *)(ProcessWin32Process + 632);
        v27 = *(_QWORD *)(v26 + 48);
        if ( v27 && *(_QWORD *)(v27 + 376) == ProcessWin32Process )
          *(_QWORD *)(v26 + 48) = 0LL;
        v28 = *(_QWORD *)(ProcessWin32Process + 632) + 72LL;
        if ( *(_QWORD *)v28 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 16LL) + 376LL) == ProcessWin32Process )
          HMAssignmentUnlock(v28);
        v29 = *(_QWORD *)(ProcessWin32Process + 632) + 120LL;
        while ( *(_QWORD *)v29 )
        {
          v30 = *(_QWORD *)v29;
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v29 + 16LL) + 376LL) == ProcessWin32Process )
          {
            v39 = *(_QWORD *)v29;
            *(_QWORD *)v29 = *(_QWORD *)(v30 + 280);
            *(_QWORD *)(v30 + 280) = 0LL;
            *(_DWORD *)(v39 + 288) &= ~1u;
            HMAssignmentUnlock(&v39);
          }
          else
          {
            v29 = v30 + 280;
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(ProcessWin32Process + 640) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL, 1LL) )
    {
      ObfDereferenceObject(v12);
      return 3221225495LL;
    }
    v31 = *(_QWORD *)(ProcessWin32Process + 640);
    if ( v31 )
      SetHandleFlag(v31, 1LL, 0LL);
  }
  LockObjectAssignment(ProcessWin32Process + 632, v12);
  ObfDereferenceObject(v12);
  *(_QWORD *)(ProcessWin32Process + 640) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  if ( ProcessWin32WindowStation )
  {
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, a2, &v33, 0LL) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0LL);
    }
    else
    {
      if ( v12 != v33 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(CurrentProcess, 0LL);
      }
      ObfDereferenceObject(v33);
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
  *(_DWORD *)(ProcessWin32Process + 648) = HandleInformation.GrantedAccess;
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

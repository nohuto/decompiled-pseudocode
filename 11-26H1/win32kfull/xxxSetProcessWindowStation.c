/*
 * XREFs of xxxSetProcessWindowStation @ 0x14022F3A0
 * Callers:
 *     EditionSetProcessWindowStationEntryPoint @ 0x14022F2D0 (EditionSetProcessWindowStationEntryPoint.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400FC820 (W32GetCurrentWin32kSessionId.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x14029419C (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxSetProcessWindowStation(HANDLE SourceHandle, KPROCESSOR_MODE a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 CurrentProcess; // rsi
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  _BYTE *v13; // r14
  unsigned int v14; // ebx
  __int64 result; // rax
  struct tagTHREADINFO *v16; // rax
  int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  PVOID *v24; // rbx
  PVOID *v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  void *ProcessWin32WindowStation; // rbx
  int v29; // eax
  unsigned int v30; // edx
  int v31; // eax
  BOOLEAN v32; // al
  unsigned int v33; // edx
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-40h] BYREF
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  void *TargetHandle; // [rsp+50h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v38[3]; // [rsp+68h] [rbp-18h] BYREF
  PVOID v39; // [rsp+C8h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentProcess = PsGetCurrentProcess(SourceHandle);
  TargetHandle = 0LL;
  HandleInformation = 0LL;
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v10 = ProcessWin32Process;
  if ( ProcessWin32Process )
    v10 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, a2, &Object, &HandleInformation);
  v13 = Object;
  v14 = v11;
  if ( v11 < 0 )
  {
    SetLastNtError(v11);
    return v14;
  }
  v16 = PtiCurrent(v12);
  v38[0] = *((_QWORD *)v16 + 47);
  *((_QWORD *)v16 + 47) = v38;
  v17 = *(_DWORD *)v13;
  v38[2] = UserDereferenceObject;
  v38[1] = v13;
  if ( v17 != (unsigned int)W32GetCurrentWin32kSessionId((__int64)v38) )
  {
    UserSetLastError(87);
    v14 = -1073741811;
LABEL_33:
    PopAndFreeAlwaysW32ThreadLock((__int64)v38);
    return v14;
  }
  if ( v10 )
  {
    v18 = *(_QWORD *)(v10 + 656);
    if ( v18 )
    {
      if ( (_BYTE *)v18 != v13 )
      {
        v19 = *(_QWORD *)(v18 + 80);
        if ( v19 && *(_QWORD *)(*(_QWORD *)(v19 + 16) + 456LL) == v10 )
        {
          if ( a3 )
          {
            HMAssignmentUnlock(v18 + 80);
          }
          else
          {
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, v19);
            xxxDisownClipboard(*(struct tagWND **)(*(_QWORD *)(v10 + 656) + 80LL));
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
          }
        }
        v20 = *(_QWORD *)(v10 + 656) + 64LL;
        if ( *(_QWORD *)v20 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 16LL) + 456LL) == v10 )
        {
          HMAssignmentUnlock(v20);
          *(_QWORD *)(*(_QWORD *)(v10 + 656) + 48LL) = 0LL;
        }
        v21 = *(_QWORD *)(v10 + 656);
        v22 = *(_QWORD *)(v21 + 48);
        if ( v22 && *(_QWORD *)(v22 + 456) == v10 )
          *(_QWORD *)(v21 + 48) = 0LL;
        v23 = *(_QWORD *)(v10 + 656) + 72LL;
        if ( *(_QWORD *)v23 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v23 + 16LL) + 456LL) == v10 )
          HMAssignmentUnlock(v23);
        v24 = (PVOID *)(*(_QWORD *)(v10 + 656) + 120LL);
        while ( 1 )
        {
          v26 = *v24;
          if ( !*v24 )
            break;
          v25 = (PVOID *)(v26 + 30);
          if ( *(_QWORD *)(v26[2] + 456LL) == v10 )
          {
            v39 = *v24;
            *v24 = *v25;
            *v25 = 0LL;
            *((_DWORD *)v39 + 95) &= ~0x800000u;
            HMAssignmentUnlock(&v39);
          }
          else
          {
            v24 = (PVOID *)(v26 + 30);
          }
        }
      }
    }
  }
  if ( *(HANDLE *)(v10 + 664) != SourceHandle )
  {
    if ( !(unsigned int)SetHandleFlag(SourceHandle, 1LL) )
    {
      v14 = -1073741801;
      goto LABEL_33;
    }
    v27 = *(_QWORD *)(v10 + 664);
    if ( v27 )
      SetHandleFlag(v27, 1LL);
  }
  LockObjectAssignment(v10 + 656, v13);
  PopAndFreeAlwaysW32ThreadLock((__int64)v38);
  *(_QWORD *)(v10 + 664) = SourceHandle;
  ProcessWin32WindowStation = (void *)PsGetProcessWin32WindowStation(CurrentProcess);
  if ( ProcessWin32WindowStation )
  {
    v39 = 0LL;
    if ( ObReferenceObjectByHandle(ProcessWin32WindowStation, 0, ExWindowStationObjectType, a2, &v39, 0LL) < 0 )
    {
      PsSetProcessWindowStation(CurrentProcess, 0LL);
    }
    else
    {
      if ( v13 != v39 )
      {
        ObCloseHandle(ProcessWin32WindowStation, 1);
        PsSetProcessWindowStation(CurrentProcess, 0LL);
      }
      ObfDereferenceObject(v39);
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
  *(_DWORD *)(v10 + 672) = HandleInformation.GrantedAccess;
  v29 = *(_DWORD *)(v10 + 12);
  v30 = v29 & 0xFFFBFFFF;
  v31 = v29 | 0x40000;
  if ( (v13[32] & 4) == 0 )
    v30 = v31;
  *(_DWORD *)(v10 + 12) = v30;
  v32 = RtlAreAllAccessesGranted(HandleInformation.GrantedAccess, 0x200u);
  v33 = *(_DWORD *)(v10 + 12) | 0x10;
  if ( !v32 )
    v33 = *(_DWORD *)(v10 + 12) & 0xFFFFFFEF;
  result = 0LL;
  *(_DWORD *)(v10 + 12) = v33;
  return result;
}

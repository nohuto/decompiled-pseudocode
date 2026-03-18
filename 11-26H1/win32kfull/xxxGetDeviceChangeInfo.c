/*
 * XREFs of xxxGetDeviceChangeInfo @ 0x1402A023C
 * Callers:
 *     NtUserGetDeviceChangeInfo @ 0x1402B33B0 (NtUserGetDeviceChangeInfo.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x140138DEC (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 __fastcall xxxGetDeviceChangeInfo(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rcx
  PFILE_OBJECT v19; // rbx
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  IRP *v22; // rbx
  NTSTATUS Status; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v28[3]; // [rsp+88h] [rbp-1h] BYREF
  _QWORD v29[8]; // [rsp+A0h] [rbp+17h] BYREF
  char v30; // [rsp+F0h] [rbp+67h] BYREF
  __int16 OutputBuffer; // [rsp+F8h] [rbp+6Fh] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+100h] [rbp+77h] BYREF
  PFILE_OBJECT FileObject; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = 0;
  FileObject = 0LL;
  DestinationString = 0LL;
  DeviceObject = 0LL;
  memset(&Event, 0, sizeof(Event));
  OutputBuffer = 0;
  IoStatusBlock = 0LL;
  v2 = *(_QWORD *)(W32GetUserGdiSessionState(a1) + 40);
  if ( PsGetCurrentProcess(v3) != v2 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v5, v4);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(UserSessionState + 69920));
  v9 = W32GetUserSessionState(v8, v7);
  if ( *(_QWORD *)(v9 + 69896) == v9 + 69896 )
  {
    v13 = 0LL;
  }
  else
  {
    v12 = W32GetUserSessionState(v11, v10) + 69896;
    v13 = *(_QWORD *)(v12 + 8);
    if ( *(_QWORD *)v13 != v12 || (v11 = *(__int64 **)(v13 + 8), *v11 != v13) )
      __fastfail(3u);
    *(_QWORD *)(v12 + 8) = v11;
    *v11 = v12;
  }
  v14 = W32GetUserSessionState(v11, v10);
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v14 + 69920));
  if ( !v13 )
    return 0LL;
  PtiCurrent(v15);
  v17 = PtiCurrent(v16);
  v29[0] = *((_QWORD *)v17 + 47);
  *((_QWORD *)v17 + 47) = v29;
  v29[2] = Win32FreePool;
  v29[1] = v13;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    v19 = FileObject;
    v20 = PtiCurrent(v18);
    v28[0] = *((_QWORD *)v20 + 47);
    *((_QWORD *)v20 + 47) = v28;
    v28[2] = UserDereferenceObject;
    v28[1] = v19;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v22 = IoBuildDeviceIoControlRequest(
            0x6DC010u,
            DeviceObject,
            (PVOID)(v13 + 40),
            (unsigned int)*(unsigned __int16 *)(v13 + 40) + 4,
            &OutputBuffer,
            2u,
            0,
            &Event,
            &IoStatusBlock);
    if ( v22 )
    {
      LOBYTE(v21) = 1;
      LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v30, v21);
      Status = IofCallDriver(DeviceObject, v22);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v30);
      if ( !Status && HIBYTE(OutputBuffer) )
      {
        v1 = 1 << (HIBYTE(OutputBuffer) - 65);
        if ( (*(_DWORD *)(v13 + 32) & 1) != 0 )
          v1 |= 0x80000000;
      }
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v28);
  }
  PopAndFreeW32ThreadLock((__int64)v29);
  return v1;
}

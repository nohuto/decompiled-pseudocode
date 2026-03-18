/*
 * XREFs of xxxGetDeviceChangeInfo @ 0x1C01E0D70
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxGetDeviceChangeInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  IRP *v10; // rsi
  NTSTATUS Status; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v15[3]; // [rsp+88h] [rbp+Fh] BYREF
  _QWORD v16[6]; // [rsp+A0h] [rbp+27h] BYREF
  char OutputBuffer; // [rsp+E0h] [rbp+67h] BYREF
  char v18; // [rsp+E1h] [rbp+68h]
  PDEVICE_OBJECT DeviceObject; // [rsp+E8h] [rbp+6Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+F0h] [rbp+77h] BYREF

  v4 = 0;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    return 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  if ( gMediaChangeList.Flink == &gMediaChangeList )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = qword_1C0323FF0;
    v7 = *(_QWORD **)(qword_1C0323FF0 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C0323FF0 != &gMediaChangeList || *v7 != qword_1C0323FF0 )
      __fastfail(3u);
    qword_1C0323FF0 = *(_QWORD *)(qword_1C0323FF0 + 8);
    *v7 = &gMediaChangeList;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
  if ( !v6 )
    return 0LL;
  PushW32ThreadLock(v6, v16, (__int64)Win32FreePool);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    PushW32ThreadLock((__int64)FileObject, v15, (__int64)UserDereferenceObject);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v10 = IoBuildDeviceIoControlRequest(
            0x6DC010u,
            DeviceObject,
            (PVOID)(v6 + 36),
            (unsigned int)*(unsigned __int16 *)(v6 + 36) + 4,
            &OutputBuffer,
            2u,
            0,
            &Event,
            &IoStatusBlock);
    if ( v10 )
    {
      UserSessionSwitchLeaveCrit(v9, v8);
      Status = IofCallDriver(DeviceObject, v10);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      EnterCrit(0LL, 1LL);
      if ( !Status && v18 )
      {
        v4 = 1 << (v18 - 65);
        if ( (*(_DWORD *)(v6 + 32) & 1) != 0 )
          v4 |= 0x80000000;
      }
    }
    PopAndFreeW32ThreadLock((__int64)v15);
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v16);
  return v4;
}

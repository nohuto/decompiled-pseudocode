/*
 * XREFs of xxxGetDeviceChangeInfo @ 0x1C01D7090
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 */

__int64 __fastcall xxxGetDeviceChangeInfo(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  IRP *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  NTSTATUS Status; // esi
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v18[3]; // [rsp+88h] [rbp+Fh] BYREF
  _QWORD v19[6]; // [rsp+A0h] [rbp+27h] BYREF
  char OutputBuffer; // [rsp+E0h] [rbp+67h] BYREF
  char v21; // [rsp+E1h] [rbp+68h]
  PDEVICE_OBJECT DeviceObject; // [rsp+E8h] [rbp+6Fh] BYREF
  PFILE_OBJECT FileObject; // [rsp+F0h] [rbp+77h] BYREF

  v1 = 0;
  if ( PsGetCurrentProcess(a1) != gpepCSRSS )
    return 0LL;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gMediaChangeMutex);
  if ( gMediaChangeList.Flink == &gMediaChangeList )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = qword_1C03296A8;
    v4 = *(_QWORD **)(qword_1C03296A8 + 8);
    if ( *(struct _LIST_ENTRY **)qword_1C03296A8 != &gMediaChangeList || *v4 != qword_1C03296A8 )
      __fastfail(3u);
    qword_1C03296A8 = *(_QWORD *)(qword_1C03296A8 + 8);
    *v4 = &gMediaChangeList;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gMediaChangeMutex);
  if ( !v3 )
    return 0LL;
  PushW32ThreadLock(v3, v19, (__int64)Win32FreePool, v5);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  if ( IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject) >= 0 )
  {
    PushW32ThreadLock((__int64)FileObject, v18, UserDereferenceObject, v8);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = IoBuildDeviceIoControlRequest(
            0x6DC010u,
            DeviceObject,
            (PVOID)(v3 + 36),
            (unsigned int)*(unsigned __int16 *)(v3 + 36) + 4,
            &OutputBuffer,
            2u,
            0,
            &Event,
            &IoStatusBlock);
    if ( v11 )
    {
      if ( gdwInAtomicOperation )
      {
        v10 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation);
      Status = IofCallDriver(DeviceObject, v11);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      EnterCrit(0LL, 1LL);
      if ( !Status && v21 )
      {
        v1 = 1 << (v21 - 65);
        if ( (*(_DWORD *)(v3 + 32) & 1) != 0 )
          v1 |= 0x80000000;
      }
    }
    PopAndFreeW32ThreadLock((__int64)v18, v9, v12, v13);
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v19, v6, v7, v8);
  return v1;
}

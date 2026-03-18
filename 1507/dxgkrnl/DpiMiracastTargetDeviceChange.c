/*
 * XREFs of DpiMiracastTargetDeviceChange @ 0x1C0025700
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0024FA0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00251B0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0025B74 (DpiMiracastTearDownAssociation.c)
 *     DxgkFreeUnicodeString @ 0x1C00B4374 (DxgkFreeUnicodeString.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0168BD0 (DpiMiracastBroadcastDeviceStateChange.c)
 */

__int64 __fastcall DpiMiracastTargetDeviceChange(char *NotificationStructure, char *Context)
{
  __int64 v3; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  void *v7; // rcx
  __int64 v8; // rax
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v13; // rax
  char *v14; // r14
  void *v15; // rbx
  bool v16; // r15
  void *v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  _QWORD *v21; // rax
  int v22; // eax
  _QWORD *v23; // rcx
  PVOID *v24; // rax
  __int64 **v25; // rax
  void *v26; // rcx
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v3) = 0;
  if ( !NotificationStructure )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
    v5 = -1073741585LL;
LABEL_47:
    v4[3] = DpiMiracastTargetDeviceChange;
    v4[4] = 0LL;
    v4[5] = v5;
    WdLogEvent5_WdError(v4);
    return (unsigned int)v5;
  }
  if ( !Context || *((_DWORD *)Context + 4) != 1953656900 || *((_DWORD *)Context + 5) != 14 )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdError(NotificationStructure);
    v5 = -1073741584LL;
    goto LABEL_47;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v6 )
  {
    v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( v8 )
    {
      v13 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
      if ( !v13 )
        v13 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
      if ( v13 )
      {
        LODWORD(v3) = -1073741811;
      }
      else
      {
        v14 = Context + 32;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
        v15 = (void *)*((_QWORD *)Context + 35);
        v16 = *((_DWORD *)Context + 72) == 0;
        *((_QWORD *)Context + 35) = 0LL;
        *((_QWORD *)Context + 11) = 0LL;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v14);
        if ( v15 )
        {
          IoUnregisterPlugPlayNotificationEx(v15);
          IoSetDeviceInterfaceState((PUNICODE_STRING)Context + 8, 0);
          if ( !v16 )
          {
            DpiMiracastStopMiracastSessionSync(Context, 0, 0LL, 0LL, 0x87u, 0);
            v17 = (void *)*((_QWORD *)Context + 42);
            Timeout.QuadPart = -300000000LL;
            v18 = KeWaitForSingleObject(v17, Executive, 0, 0, &Timeout);
            v20 = v18;
            if ( v18 )
            {
              v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
              v21[3] = DpiMiracastTargetDeviceChange;
              v21[4] = KeWaitForSingleObject;
              v21[5] = v20;
              WdLogEvent5_WdError(v21);
              DpiMiracastTearDownAssociation(Context, 0);
            }
          }
          AcquireMiniportListMutex();
          ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v14);
          *((_QWORD *)Context + 11) = KeGetCurrentThread();
          v22 = *((_DWORD *)Context + 72);
          if ( v22 )
          {
            *((_DWORD *)Context + 73) = v22;
            *((_DWORD *)Context + 72) = 0;
            DpiMiracastBroadcastDeviceStateChange(Context);
          }
          KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
          v23 = *(_QWORD **)Context;
          v24 = (PVOID *)*((_QWORD *)Context + 1);
          if ( *(char **)(*(_QWORD *)Context + 8LL) != Context || *v24 != Context )
            __fastfail(3u);
          *v24 = v23;
          v23[1] = v24;
          v25 = (__int64 **)qword_1C0046FA8;
          *(_QWORD *)Context = &qword_1C0046FA0;
          *((_QWORD *)Context + 1) = v25;
          if ( *v25 != &qword_1C0046FA0 )
            __fastfail(3u);
          *v25 = (__int64 *)Context;
          qword_1C0046FA8 = (__int64)Context;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v26 = (void *)*((_QWORD *)Context + 22);
          if ( v26 )
          {
            ObfDereferenceObject(v26);
            *((_QWORD *)Context + 22) = 0LL;
            *((_QWORD *)Context + 23) = 0LL;
          }
          DxgkFreeUnicodeString(Context + 160);
          v27 = (void *)*((_QWORD *)Context + 27);
          if ( v27 )
          {
            ExFreePoolWithTag(v27, 0);
            *((_QWORD *)Context + 27) = 0LL;
          }
          v28 = (void *)*((_QWORD *)Context + 28);
          if ( v28 )
          {
            ExFreePoolWithTag(v28, 0);
            *((_QWORD *)Context + 28) = 0LL;
          }
          v29 = (void *)*((_QWORD *)Context + 29);
          if ( v29 )
          {
            ExFreePoolWithTag(v29, 0);
            *((_QWORD *)Context + 29) = 0LL;
          }
          v30 = (void *)*((_QWORD *)Context + 30);
          if ( v30 )
          {
            ExFreePoolWithTag(v30, 0);
            *((_QWORD *)Context + 30) = 0LL;
          }
          v31 = (void *)*((_QWORD *)Context + 31);
          if ( v31 )
          {
            ExFreePoolWithTag(v31, 0);
            *((_QWORD *)Context + 31) = 0LL;
          }
          RtlFreeUnicodeString((PUNICODE_STRING)Context + 8);
          *((_QWORD *)Context + 11) = 0LL;
          ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v14);
          _InterlockedExchange64(&qword_1C0046C88, 0LL);
          KeReleaseMutex((PRKMUTEX)Mutex, 0);
          DpiMiracastReleaseMiracastDeviceContext((int *)Context, 0);
        }
      }
    }
    else
    {
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
      *((_QWORD *)Context + 11) = KeGetCurrentThread();
      DeviceObjectPointer = IoGetDeviceObjectPointer(
                              (PUNICODE_STRING)Context + 9,
                              0x80000000,
                              (PFILE_OBJECT *)Context + 22,
                              (PDEVICE_OBJECT *)Context + 23);
      *((_QWORD *)Context + 11) = 0LL;
      v3 = DeviceObjectPointer;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(Context + 32);
      if ( (int)v3 < 0 )
      {
        v11 = (_QWORD *)WdLogNewEntry5_WdError(v10);
        v11[3] = DpiMiracastTargetDeviceChange;
        v11[4] = IoGetDeviceObjectPointer;
        v11[5] = v3;
        WdLogEvent5_WdError(v11);
      }
    }
  }
  else
  {
    DpiMiracastStopMiracastSessionSync(Context, 0, 0LL, 0LL, 0x84u, 0);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(Context + 32);
    v7 = (void *)*((_QWORD *)Context + 22);
    *((_QWORD *)Context + 11) = KeGetCurrentThread();
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      *((_QWORD *)Context + 22) = 0LL;
      *((_QWORD *)Context + 23) = 0LL;
    }
    *((_QWORD *)Context + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(Context + 32);
  }
  return (unsigned int)v3;
}

/*
 * XREFs of DpiMiracastInterfaceChange @ 0x1C0024520
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkFreeUnicodeString @ 0x1C00B4374 (DxgkFreeUnicodeString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C00C6CA0 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C00C6DF0 (DpiGetDevicePropertyString.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C016A120 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiGetDeviceInstanceId @ 0x1C016B930 (DpiGetDeviceInstanceId.c)
 */

__int64 __fastcall DpiMiracastInterfaceChange(_QWORD *NotificationStructure, PVOID Context)
{
  _QWORD *v2; // r14
  __int64 v3; // rax
  __int64 v4; // rax
  SIZE_T v5; // rdx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r15
  char v7; // r13
  _DWORD *PoolWithTag; // rax
  __int64 v9; // rcx
  _DWORD *v10; // rsi
  _QWORD *v11; // rax
  __int16 v12; // dx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  _QWORD *v16; // rcx
  char v17; // bl
  PKEVENT NotificationEvent; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  ULONG v26; // ebx
  int DevicePropertyDataString; // eax
  ULONG v28; // edx
  ULONG v29; // ebx
  SIZE_T v30; // rdx
  PVOID v31; // rax
  size_t v32; // r8
  unsigned __int16 Length; // ax
  int DeviceInstanceId; // eax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  void *v40; // rcx
  _QWORD *v41; // rax
  NTSTATUS v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rbx
  NTSTATUS LocallyUniqueId; // eax
  __int64 v46; // rcx
  NTSTATUS v47; // eax
  __int64 v48; // rcx
  __int64 **v49; // rax
  NTSTATUS v50; // eax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  void *v54; // rcx
  void *v55; // rcx
  void *v56; // rcx
  void *v57; // rcx
  void *v58; // rcx
  void *v59; // rcx
  __int64 v60; // rcx
  _QWORD *v61; // rax
  _QWORD *v63; // rax
  char v64; // [rsp+48h] [rbp-39h]
  ULONG RequiredSize; // [rsp+4Ch] [rbp-35h] BYREF
  char v66; // [rsp+50h] [rbp-31h]
  char v67; // [rsp+51h] [rbp-30h]
  ULONG Type; // [rsp+54h] [rbp-2Dh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  void *EventHandle[2]; // [rsp+68h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v72[8]; // [rsp+90h] [rbp+Fh] BYREF
  unsigned __int64 v73; // [rsp+98h] [rbp+17h]
  int v74; // [rsp+A0h] [rbp+1Fh] BYREF
  _BYTE v75[8]; // [rsp+A4h] [rbp+23h] BYREF
  HANDLE ProcessId; // [rsp+ACh] [rbp+2Bh]

  v2 = NotificationStructure;
  if ( NotificationStructure )
  {
    v3 = *(_QWORD *)((char *)NotificationStructure + 20)
       - *(_QWORD *)&GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data1;
    if ( !v3 )
      v3 = *(_QWORD *)((char *)NotificationStructure + 28)
         - *(_QWORD *)GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data4;
    if ( !v3 )
    {
      NotificationStructure = (_QWORD *)NotificationStructure[5];
      if ( NotificationStructure )
      {
        v4 = *(_QWORD *)((char *)v2 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
        if ( !v4 )
          v4 = *(_QWORD *)((char *)v2 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
        if ( v4 )
          return 0LL;
        v64 = 0;
        v5 = *((unsigned __int16 *)NotificationStructure + 1) + 1984LL;
        v66 = 0;
        v67 = 0;
        DeviceAttachmentBaseRef = 0LL;
        v7 = 0;
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v5, 0x74727044u);
        v10 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v11 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9);
          v11[3] = DpiMiracastInterfaceChange;
          v11[4] = ExAllocatePoolWithTag;
          v11[5] = -1073741801LL;
          WdLogEvent5_WdLowResource(v11);
          return 0LL;
        }
        memset(PoolWithTag, 0, 0x7C0uLL);
        v10[4] = 1953656900;
        v10[75] = -1;
        v10[82] = -1;
        v10[5] = 14;
        *((_QWORD *)v10 + 3) = 1LL;
        *((_QWORD *)v10 + 36) = 0LL;
        v10[74] = 0;
        *((_QWORD *)v10 + 11) = 0LL;
        v10[8] = 1;
        *((_QWORD *)v10 + 5) = 0LL;
        v10[12] = 0;
        KeInitializeEvent((PRKEVENT)(v10 + 14), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v10 + 98), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, v10);
        *((_WORD *)v10 + 72) = 0;
        v12 = *(_WORD *)(v2[5] + 2LL);
        *((_QWORD *)v10 + 19) = v10 + 496;
        *((_WORD *)v10 + 73) = v12;
        RtlCopyUnicodeString((PUNICODE_STRING)v10 + 9, (PCUNICODE_STRING)v2[5]);
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                (PUNICODE_STRING)v10 + 9,
                                0x80000000,
                                (PFILE_OBJECT *)v10 + 22,
                                (PDEVICE_OBJECT *)v10 + 23);
        v15 = DeviceObjectPointer;
        if ( DeviceObjectPointer < 0 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          v16[3] = DpiMiracastInterfaceChange;
          v16[4] = IoGetDeviceObjectPointer;
          v16[5] = v15;
LABEL_54:
          WdLogEvent5_WdError(v16);
          goto LABEL_58;
        }
        v17 = 1;
        v64 = 1;
        NotificationEvent = IoCreateNotificationEvent(0LL, EventHandle);
        *((_QWORD *)v10 + 42) = NotificationEvent;
        if ( !NotificationEvent )
        {
          v20 = (_QWORD *)WdLogNewEntry5_WdError(v19);
          v20[3] = DpiMiracastInterfaceChange;
          v20[4] = IoCreateNotificationEvent;
          v20[5] = -1073741801LL;
          WdLogEvent5_WdError(v20);
LABEL_62:
          v54 = (void *)*((_QWORD *)v10 + 27);
          if ( v54 )
          {
            ExFreePoolWithTag(v54, 0);
            *((_QWORD *)v10 + 27) = 0LL;
          }
          v55 = (void *)*((_QWORD *)v10 + 28);
          if ( v55 )
          {
            ExFreePoolWithTag(v55, 0);
            *((_QWORD *)v10 + 28) = 0LL;
          }
          v56 = (void *)*((_QWORD *)v10 + 29);
          if ( v56 )
          {
            ExFreePoolWithTag(v56, 0);
            *((_QWORD *)v10 + 29) = 0LL;
          }
          v57 = (void *)*((_QWORD *)v10 + 30);
          if ( v57 )
          {
            ExFreePoolWithTag(v57, 0);
            *((_QWORD *)v10 + 30) = 0LL;
          }
          v58 = (void *)*((_QWORD *)v10 + 31);
          if ( v58 )
          {
            ExFreePoolWithTag(v58, 0);
            *((_QWORD *)v10 + 31) = 0LL;
          }
          if ( v17 )
            ObfDereferenceObject(*((PVOID *)v10 + 22));
          v59 = (void *)*((_QWORD *)v10 + 42);
          if ( v59 )
            ObfDereferenceObject(v59);
          if ( *((_QWORD *)v10 + 17) )
            RtlFreeUnicodeString((PUNICODE_STRING)v10 + 8);
          if ( v67 )
          {
            KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
            v60 = *(_QWORD *)v10;
            v61 = (_QWORD *)*((_QWORD *)v10 + 1);
            if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) != v10 || (_DWORD *)*v61 != v10 )
              __fastfail(3u);
            *v61 = v60;
            *(_QWORD *)(v60 + 8) = v61;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
          ExFreePoolWithTag(v10, 0);
          goto LABEL_83;
        }
        ObfReferenceObject(NotificationEvent);
        ZwClose(EventHandle[0]);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*((PDEVICE_OBJECT *)v10 + 23));
        DevicePropertyData = IoGetDevicePropertyData(
                               DeviceAttachmentBaseRef,
                               &DEVPKEY_WiFiDirect_MiracastVersion,
                               0,
                               0,
                               4u,
                               v10 + 48,
                               &RequiredSize,
                               &Type);
        v15 = DevicePropertyData;
        if ( DevicePropertyData >= 0 && Type == 7 )
        {
          v23 = IoGetDevicePropertyData(
                  DeviceAttachmentBaseRef,
                  &DEVPKEY_WiFiDirect_DeviceAddress,
                  0,
                  0,
                  6u,
                  v10 + 52,
                  &RequiredSize,
                  &Type);
          v25 = v23;
          if ( v23 < 0 || Type != 4099 )
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdError(v24);
            v52[4] = IoGetDevicePropertyData;
            v52[3] = DpiMiracastInterfaceChange;
            v52[5] = v25;
            WdLogEvent5_WdError(v52);
LABEL_61:
            v17 = v64;
            goto LABEL_62;
          }
          if ( (int)DpiGetDevicePropertyDataString(
                      DeviceAttachmentBaseRef,
                      (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                      0,
                      PagedPool,
                      (__int64)(v10 + 54),
                      (__int64)&RequiredSize) >= 0
            || (v26 = 0,
                (int)DpiGetDevicePropertyString(
                       DeviceAttachmentBaseRef,
                       DevicePropertyManufacturer,
                       PagedPool,
                       (__int64)&RequiredSize) >= 0) )
          {
            v26 = RequiredSize;
          }
          DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                       DeviceAttachmentBaseRef,
                                       (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                       0,
                                       PagedPool,
                                       (__int64)(v10 + 56),
                                       (__int64)&RequiredSize);
          v28 = RequiredSize;
          if ( DevicePropertyDataString < 0 )
            v28 = 0;
          RequiredSize = v28;
          v29 = v28 + v26;
          if ( v29 )
          {
            v30 = v29 + 4LL;
            if ( v30 < 0xFFFF )
            {
              v31 = ExAllocatePoolWithTag((POOL_TYPE)512, v30, 0x74727044u);
              *((_QWORD *)v10 + 29) = v31;
              if ( v31 )
              {
                v32 = RequiredSize;
                *(_QWORD *)&DestinationString.Length = 0LL;
                DestinationString.Buffer = 0LL;
                if ( v29 == RequiredSize )
                {
                  Length = DestinationString.Length;
                }
                else
                {
                  memmove(v31, *((const void **)v10 + 27), v29 - RequiredSize);
                  *(_WORD *)(*((_QWORD *)v10 + 29) + 2 * ((unsigned __int64)(v29 - RequiredSize) >> 1)) = 0;
                  RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v10 + 29));
                  *(_WORD *)(*((_QWORD *)v10 + 29) + 2 * ((unsigned __int64)DestinationString.Length >> 1)) = 32;
                  v32 = RequiredSize;
                  Length = DestinationString.Length + 2;
                  DestinationString.Length += 2;
                }
                DestinationString.MaximumLength = v29 + 4;
                if ( (_DWORD)v32 )
                {
                  memmove(
                    (void *)(*((_QWORD *)v10 + 29) + 2 * ((unsigned __int64)Length >> 1)),
                    *((const void **)v10 + 28),
                    v32);
                  LODWORD(v32) = RequiredSize;
                  Length = DestinationString.Length;
                }
                *(_WORD *)(*((_QWORD *)v10 + 29) + 2 * ((unsigned __int64)((unsigned int)v32 + Length) >> 1)) = 0;
              }
            }
          }
          DpiGetDevicePropertyDataString(
            DeviceAttachmentBaseRef,
            (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
            0,
            PagedPool,
            (__int64)(v10 + 60),
            (__int64)&RequiredSize);
          DpiGetDevicePropertyDataString(
            DeviceAttachmentBaseRef,
            (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName,
            0,
            PagedPool,
            (__int64)(v10 + 62),
            (__int64)&RequiredSize);
          DeviceInstanceId = DpiGetDeviceInstanceId(DeviceAttachmentBaseRef);
          v15 = DeviceInstanceId;
          if ( DeviceInstanceId < 0 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdError(v35);
            v36[4] = DpiGetDeviceInstanceId;
            v36[3] = DpiMiracastInterfaceChange;
            v36[5] = v15;
            WdLogEvent5_WdError(v36);
            v7 = 0;
            goto LABEL_58;
          }
          RtlInitUnicodeString((PUNICODE_STRING)v10 + 10, (PCWSTR)EventHandle[1]);
          v74 = v10[48];
          v7 = 1;
          memmove(v75, v10 + 52, 6uLL);
          v37 = DpiMiracastSendSyncUserModeRequest(v10, 2295808LL, &v74, 16LL, &v74, 16, v72);
          v15 = v37;
          if ( v37 < 0 )
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v38);
            v40 = DpiMiracastSendSyncUserModeRequest;
LABEL_53:
            v39[3] = DpiMiracastInterfaceChange;
            v39[4] = v40;
            v16 = v39;
            v39[5] = v15;
            goto LABEL_54;
          }
          if ( v73 < 0x10 )
          {
            v41 = (_QWORD *)WdLogNewEntry5_WdError(v38);
            v41[4] = DpiMiracastSendSyncUserModeRequest;
            v41[3] = DpiMiracastInterfaceChange;
            v41[5] = -1073741811LL;
            WdLogEvent5_WdError(v41);
LABEL_60:
            DxgkFreeUnicodeString(v10 + 40);
            goto LABEL_61;
          }
          v42 = PsLookupProcessByProcessId((HANDLE)(unsigned int)ProcessId, (PEPROCESS *)v10 + 13);
          v15 = v42;
          if ( v42 < 0 )
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v43);
            v40 = PsLookupProcessByProcessId;
            goto LABEL_53;
          }
          ObfDereferenceObject(*((PVOID *)v10 + 13));
          AcquireMiniportListMutex();
          v44 = qword_1C0046F90;
          v66 = 1;
          while ( (__int64 *)v44 != &qword_1C0046F90 )
          {
            if ( !RtlCompareUnicodeString((PCUNICODE_STRING)v2[5], (PCUNICODE_STRING)(v44 + 144), 0) )
              goto LABEL_60;
            v44 = *(_QWORD *)v44;
          }
          LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)v10 + 12);
          v15 = LocallyUniqueId;
          if ( LocallyUniqueId < 0 )
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v46);
            v40 = ZwAllocateLocallyUniqueId;
            goto LABEL_53;
          }
          v47 = IoRegisterDeviceInterface(
                  DeviceAttachmentBaseRef,
                  &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                  0LL,
                  (PUNICODE_STRING)v10 + 8);
          v15 = v47;
          if ( v47 < 0 )
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v48);
            v40 = IoRegisterDeviceInterface;
            goto LABEL_53;
          }
          KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
          v49 = (__int64 **)qword_1C0046F98;
          *(_QWORD *)v10 = &qword_1C0046F90;
          *((_QWORD *)v10 + 1) = v49;
          if ( *v49 != &qword_1C0046F90 )
            __fastfail(3u);
          *v49 = (__int64 *)v10;
          qword_1C0046F98 = (__int64)v10;
          v67 = 1;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v50 = IoRegisterPlugPlayNotification(
                  EventCategoryTargetDeviceChange,
                  0,
                  *((PVOID *)v10 + 22),
                  g_pDriverObject,
                  DpiMiracastTargetDeviceChange,
                  v10,
                  (PVOID *)v10 + 35);
          v15 = v50;
          if ( v50 < 0 )
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v51);
            v40 = IoRegisterPlugPlayNotification;
            goto LABEL_53;
          }
          IoSetDeviceInterfaceState((PUNICODE_STRING)v10 + 8, 1u);
        }
        else
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v22);
          v53[4] = IoGetDevicePropertyData;
          v53[3] = DpiMiracastInterfaceChange;
          v53[5] = v15;
          WdLogEvent5_WdError(v53);
          LODWORD(v15) = -1073741811;
        }
LABEL_58:
        if ( (int)v15 >= 0 )
        {
LABEL_83:
          if ( DeviceAttachmentBaseRef )
            ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( v66 )
          {
            _InterlockedExchange64(&qword_1C0046C88, 0LL);
            KeReleaseMutex((PRKMUTEX)Mutex, 0);
          }
          return 0LL;
        }
        if ( !v7 )
          goto LABEL_61;
        goto LABEL_60;
      }
    }
  }
  v63 = (_QWORD *)WdLogNewEntry5_WdError(NotificationStructure);
  v63[3] = DpiMiracastInterfaceChange;
  v63[4] = 0LL;
  v63[5] = -1073741585LL;
  WdLogEvent5_WdError(v63);
  return 3221225711LL;
}

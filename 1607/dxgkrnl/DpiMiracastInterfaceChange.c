/*
 * XREFs of DpiMiracastInterfaceChange @ 0x1C002B510
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DpiGetDevicePropertyDataString @ 0x1C00EBEA4 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C00EBFE8 (DpiGetDevicePropertyString.c)
 *     DxgkFreeUnicodeString @ 0x1C01936B8 (DxgkFreeUnicodeString.c)
 *     DpiGetDeviceInstanceId @ 0x1C0196658 (DpiGetDeviceInstanceId.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C0197E9C (DpiMiracastSendSyncUserModeRequest.c)
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
  __int64 v11; // rax
  __int16 v12; // dx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  char v17; // bl
  PKEVENT NotificationEvent; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v22; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  NTSTATUS v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rbx
  ULONG v30; // ebx
  int DevicePropertyDataString; // eax
  ULONG v32; // edx
  ULONG v33; // ebx
  SIZE_T v34; // rdx
  PVOID v35; // rax
  size_t v36; // r8
  unsigned __int16 Length; // ax
  int DeviceInstanceId; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rax
  NTSTATUS v44; // eax
  __int64 v45; // rbx
  NTSTATUS LocallyUniqueId; // eax
  NTSTATUS v47; // eax
  _QWORD *v48; // rax
  NTSTATUS v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  void *v52; // rcx
  void *v53; // rcx
  void *v54; // rcx
  void *v55; // rcx
  void *v56; // rcx
  void *v57; // rcx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v61; // rax
  char v62; // [rsp+48h] [rbp-C0h]
  ULONG RequiredSize; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG Type[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  void *EventHandle[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v68; // [rsp+98h] [rbp-70h]
  int v69; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v70[6]; // [rsp+ACh] [rbp-5Ch] BYREF
  _BYTE v71[130]; // [rsp+B2h] [rbp-56h] BYREF
  char v72; // [rsp+134h] [rbp+2Ch]
  HANDLE ProcessId; // [rsp+138h] [rbp+30h]

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
        v62 = 0;
        v5 = *((unsigned __int16 *)NotificationStructure + 1) + 2080LL;
        LOWORD(Type[0]) = 0;
        DeviceAttachmentBaseRef = 0LL;
        v7 = 0;
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v5, 0x74727044u);
        v10 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v11 = WdLogNewEntry5_WdLowResource(v9);
          *(_QWORD *)(v11 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v11);
          return 0LL;
        }
        memset(PoolWithTag, 0, 0x820uLL);
        v10[4] = 1953656900;
        v10[107] = -1;
        v10[116] = -1;
        v10[5] = 14;
        *((_QWORD *)v10 + 3) = 1LL;
        *((_QWORD *)v10 + 52) = 0LL;
        v10[106] = 0;
        *((_QWORD *)v10 + 11) = 0LL;
        v10[8] = 1;
        *((_QWORD *)v10 + 5) = 0LL;
        v10[12] = 0;
        KeInitializeEvent((PRKEVENT)(v10 + 14), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v10 + 132), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, v10);
        *((_WORD *)v10 + 72) = 0;
        v12 = *(_WORD *)(v2[5] + 2LL);
        *((_QWORD *)v10 + 19) = v10 + 520;
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
LABEL_12:
          v16 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v16 + 24) = v15;
          WdLogEvent5_WdError(v16);
          goto LABEL_58;
        }
        v17 = 1;
        v62 = 1;
        NotificationEvent = IoCreateNotificationEvent(0LL, EventHandle);
        *((_QWORD *)v10 + 59) = NotificationEvent;
        if ( !NotificationEvent )
        {
          v20 = WdLogNewEntry5_WdError(v19);
          *(_QWORD *)(v20 + 24) = -1073741801LL;
          WdLogEvent5_WdError(v20);
LABEL_62:
          v52 = (void *)*((_QWORD *)v10 + 43);
          if ( v52 )
          {
            ExFreePoolWithTag(v52, 0);
            *((_QWORD *)v10 + 43) = 0LL;
          }
          v53 = (void *)*((_QWORD *)v10 + 44);
          if ( v53 )
          {
            ExFreePoolWithTag(v53, 0);
            *((_QWORD *)v10 + 44) = 0LL;
          }
          v54 = (void *)*((_QWORD *)v10 + 45);
          if ( v54 )
          {
            ExFreePoolWithTag(v54, 0);
            *((_QWORD *)v10 + 45) = 0LL;
          }
          v55 = (void *)*((_QWORD *)v10 + 46);
          if ( v55 )
          {
            ExFreePoolWithTag(v55, 0);
            *((_QWORD *)v10 + 46) = 0LL;
          }
          v56 = (void *)*((_QWORD *)v10 + 47);
          if ( v56 )
          {
            ExFreePoolWithTag(v56, 0);
            *((_QWORD *)v10 + 47) = 0LL;
          }
          if ( v17 )
            ObfDereferenceObject(*((PVOID *)v10 + 22));
          v57 = (void *)*((_QWORD *)v10 + 59);
          if ( v57 )
            ObfDereferenceObject(v57);
          if ( *((_QWORD *)v10 + 17) )
            RtlFreeUnicodeString((PUNICODE_STRING)v10 + 8);
          if ( LOBYTE(Type[0]) )
          {
            KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, &LockHandle);
            v58 = *(_QWORD *)v10;
            v59 = (_QWORD *)*((_QWORD *)v10 + 1);
            if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) != v10 || (_DWORD *)*v59 != v10 )
              __fastfail(3u);
            *v59 = v58;
            *(_QWORD *)(v58 + 8) = v59;
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
                               &Type[1]);
        v15 = DevicePropertyData;
        if ( DevicePropertyData >= 0 && Type[1] == 7 )
        {
          v23 = IoGetDevicePropertyData(
                  DeviceAttachmentBaseRef,
                  &DEVPKEY_WiFiDirect_DeviceAddress,
                  0,
                  0,
                  6u,
                  v10 + 52,
                  &RequiredSize,
                  &Type[1]);
          v25 = v23;
          if ( v23 >= 0 && Type[1] == 4099 )
          {
            *((_BYTE *)v10 + 400) = 0;
          }
          else
          {
            v26 = WdLogNewEntry5_WdError(v24);
            *(_QWORD *)(v26 + 24) = v25;
            WdLogEvent5_WdError(v26);
            memset((char *)v10 + 214, 0, 0x82uLL);
            v27 = IoGetDevicePropertyData(
                    DeviceAttachmentBaseRef,
                    &DEVPKEY_InfraCast_DeviceAddress,
                    0,
                    0,
                    0x82u,
                    (char *)v10 + 214,
                    &RequiredSize,
                    &Type[1]);
            v29 = v27;
            if ( v27 < 0 || Type[1] != 18 )
            {
              v50 = WdLogNewEntry5_WdError(v28);
              *(_QWORD *)(v50 + 24) = v29;
              WdLogEvent5_WdError(v50);
LABEL_61:
              v17 = v62;
              goto LABEL_62;
            }
            *((_BYTE *)v10 + 400) = 1;
          }
          if ( (int)DpiGetDevicePropertyDataString(
                      DeviceAttachmentBaseRef,
                      (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                      (__int64)(v10 + 86),
                      (__int64)&RequiredSize) >= 0
            || (v30 = 0,
                (int)DpiGetDevicePropertyString(
                       DeviceAttachmentBaseRef,
                       DevicePropertyManufacturer,
                       PagedPool,
                       (__int64)&RequiredSize) >= 0) )
          {
            v30 = RequiredSize;
          }
          DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                       DeviceAttachmentBaseRef,
                                       (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                       (__int64)(v10 + 88),
                                       (__int64)&RequiredSize);
          v32 = RequiredSize;
          if ( DevicePropertyDataString < 0 )
            v32 = 0;
          RequiredSize = v32;
          v33 = v32 + v30;
          if ( v33 )
          {
            v34 = v33 + 4LL;
            if ( v34 < 0xFFFF )
            {
              v35 = ExAllocatePoolWithTag((POOL_TYPE)512, v34, 0x74727044u);
              *((_QWORD *)v10 + 45) = v35;
              if ( v35 )
              {
                v36 = RequiredSize;
                *(_QWORD *)&DestinationString.Length = 0LL;
                DestinationString.Buffer = 0LL;
                if ( v33 == RequiredSize )
                {
                  Length = DestinationString.Length;
                }
                else
                {
                  memmove(v35, *((const void **)v10 + 43), v33 - RequiredSize);
                  *(_WORD *)(*((_QWORD *)v10 + 45) + 2 * ((unsigned __int64)(v33 - RequiredSize) >> 1)) = 0;
                  RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v10 + 45));
                  *(_WORD *)(*((_QWORD *)v10 + 45) + 2 * ((unsigned __int64)DestinationString.Length >> 1)) = 32;
                  v36 = RequiredSize;
                  Length = DestinationString.Length + 2;
                  DestinationString.Length += 2;
                }
                DestinationString.MaximumLength = v33 + 4;
                if ( (_DWORD)v36 )
                {
                  memmove(
                    (void *)(*((_QWORD *)v10 + 45) + 2 * ((unsigned __int64)Length >> 1)),
                    *((const void **)v10 + 44),
                    v36);
                  LODWORD(v36) = RequiredSize;
                  Length = DestinationString.Length;
                }
                *(_WORD *)(*((_QWORD *)v10 + 45) + 2 * ((unsigned __int64)((unsigned int)v36 + Length) >> 1)) = 0;
              }
            }
          }
          DpiGetDevicePropertyDataString(
            DeviceAttachmentBaseRef,
            (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
            (__int64)(v10 + 92),
            (__int64)&RequiredSize);
          DpiGetDevicePropertyDataString(
            DeviceAttachmentBaseRef,
            (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName,
            (__int64)(v10 + 94),
            (__int64)&RequiredSize);
          DeviceInstanceId = DpiGetDeviceInstanceId(DeviceAttachmentBaseRef);
          v15 = DeviceInstanceId;
          if ( DeviceInstanceId >= 0 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)v10 + 10, (PCWSTR)EventHandle[1]);
            v7 = 1;
            v69 = v10[48];
            if ( *((_BYTE *)v10 + 400) )
            {
              memmove(v71, (char *)v10 + 214, 0x82uLL);
              v72 = 1;
            }
            else
            {
              memmove(v70, v10 + 52, 6uLL);
              v72 = 0;
            }
            v42 = DpiMiracastSendSyncUserModeRequest(v10, v41, &v69);
            v15 = v42;
            if ( v42 < 0 )
              goto LABEL_12;
            if ( v68 < 0x94 )
            {
              v43 = WdLogNewEntry5_WdError(v14);
              *(_QWORD *)(v43 + 24) = -1073741811LL;
              WdLogEvent5_WdError(v43);
LABEL_60:
              DxgkFreeUnicodeString(v10 + 40);
              goto LABEL_61;
            }
            v44 = PsLookupProcessByProcessId((HANDLE)(unsigned int)ProcessId, (PEPROCESS *)v10 + 13);
            v15 = v44;
            if ( v44 < 0 )
              goto LABEL_12;
            ObfDereferenceObject(*((PVOID *)v10 + 13));
            AcquireMiniportListMutex();
            v45 = qword_1C00571D0;
            BYTE1(Type[0]) = 1;
            while ( (__int64 *)v45 != &qword_1C00571D0 )
            {
              if ( !RtlCompareUnicodeString((PCUNICODE_STRING)v2[5], (PCUNICODE_STRING)(v45 + 144), 0) )
                goto LABEL_60;
              v45 = *(_QWORD *)v45;
            }
            LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)v10 + 12);
            v15 = LocallyUniqueId;
            if ( LocallyUniqueId < 0 )
              goto LABEL_12;
            v47 = IoRegisterDeviceInterface(
                    DeviceAttachmentBaseRef,
                    &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                    0LL,
                    (PUNICODE_STRING)v10 + 8);
            v15 = v47;
            if ( v47 < 0 )
              goto LABEL_12;
            KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, &LockHandle);
            v48 = (_QWORD *)qword_1C00571D8;
            if ( *(__int64 **)qword_1C00571D8 != &qword_1C00571D0 )
              __fastfail(3u);
            *(_QWORD *)v10 = &qword_1C00571D0;
            *((_QWORD *)v10 + 1) = v48;
            *v48 = v10;
            qword_1C00571D8 = (__int64)v10;
            LOBYTE(Type[0]) = 1;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v49 = IoRegisterPlugPlayNotification(
                    EventCategoryTargetDeviceChange,
                    0,
                    *((PVOID *)v10 + 22),
                    g_pDriverObject,
                    DpiMiracastTargetDeviceChange,
                    v10,
                    (PVOID *)v10 + 51);
            v15 = v49;
            if ( v49 < 0 )
              goto LABEL_12;
            IoSetDeviceInterfaceState((PUNICODE_STRING)v10 + 8, 1u);
          }
          else
          {
            v40 = WdLogNewEntry5_WdError(v39);
            *(_QWORD *)(v40 + 24) = v15;
            WdLogEvent5_WdError(v40);
            v7 = 0;
          }
        }
        else
        {
          v51 = WdLogNewEntry5_WdError(v22);
          *(_QWORD *)(v51 + 24) = v15;
          WdLogEvent5_WdError(v51);
          LODWORD(v15) = -1073741811;
        }
LABEL_58:
        if ( (int)v15 >= 0 )
        {
LABEL_83:
          if ( DeviceAttachmentBaseRef )
            ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( BYTE1(Type[0]) )
          {
            _InterlockedExchange64(&qword_1C0056EC8, 0LL);
            KeReleaseMutex(Mutex, 0);
          }
          return 0LL;
        }
        if ( !v7 )
          goto LABEL_61;
        goto LABEL_60;
      }
    }
  }
  v61 = WdLogNewEntry5_WdError(NotificationStructure);
  *(_QWORD *)(v61 + 24) = -1073741585LL;
  WdLogEvent5_WdError(v61);
  return 3221225711LL;
}

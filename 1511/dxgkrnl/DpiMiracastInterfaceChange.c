/*
 * XREFs of DpiMiracastInterfaceChange @ 0x1C0024050
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiGetDevicePropertyDataString @ 0x1C00D3F10 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C00D4060 (DpiGetDevicePropertyString.c)
 *     DxgkFreeUnicodeString @ 0x1C016B92C (DxgkFreeUnicodeString.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C016E8E0 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiGetDeviceInstanceId @ 0x1C0170140 (DpiGetDeviceInstanceId.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rsi
  _QWORD *v14; // rax
  __int16 v15; // dx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  _QWORD *v19; // rcx
  char v20; // bl
  PKEVENT NotificationEvent; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  NTSTATUS DevicePropertyData; // eax
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  ULONG v29; // ebx
  int DevicePropertyDataString; // eax
  ULONG v31; // edx
  ULONG v32; // ebx
  SIZE_T v33; // rdx
  PVOID v34; // rax
  size_t v35; // r8
  unsigned __int16 Length; // ax
  int DeviceInstanceId; // eax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  void *v43; // rcx
  _QWORD *v44; // rax
  NTSTATUS v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rbx
  NTSTATUS LocallyUniqueId; // eax
  __int64 v49; // rcx
  NTSTATUS v50; // eax
  __int64 v51; // rcx
  __int64 **v52; // rax
  NTSTATUS v53; // eax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  void *v57; // rcx
  void *v58; // rcx
  void *v59; // rcx
  void *v60; // rcx
  void *v61; // rcx
  void *v62; // rcx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v66; // rax
  char v67; // [rsp+48h] [rbp-39h]
  ULONG RequiredSize; // [rsp+4Ch] [rbp-35h] BYREF
  char v69; // [rsp+50h] [rbp-31h]
  char v70; // [rsp+51h] [rbp-30h]
  ULONG Type; // [rsp+54h] [rbp-2Dh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  void *EventHandle[2]; // [rsp+68h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v75[8]; // [rsp+90h] [rbp+Fh] BYREF
  unsigned __int64 v76; // [rsp+98h] [rbp+17h]
  int v77; // [rsp+A0h] [rbp+1Fh] BYREF
  _BYTE v78[8]; // [rsp+A4h] [rbp+23h] BYREF
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
        v67 = 0;
        v5 = *((unsigned __int16 *)NotificationStructure + 1) + 1992LL;
        v69 = 0;
        v70 = 0;
        DeviceAttachmentBaseRef = 0LL;
        v7 = 0;
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v5, 0x74727044u);
        v13 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
          v14[3] = DpiMiracastInterfaceChange;
          v14[4] = ExAllocatePoolWithTag;
          v14[5] = -1073741801LL;
          WdLogEvent5_WdLowResource(v14);
          return 0LL;
        }
        memset(PoolWithTag, 0, 0x7C8uLL);
        v13[4] = 1953656900;
        v13[75] = -1;
        v13[84] = -1;
        v13[5] = 14;
        *((_QWORD *)v13 + 3) = 1LL;
        *((_QWORD *)v13 + 36) = 0LL;
        v13[74] = 0;
        *((_QWORD *)v13 + 11) = 0LL;
        v13[8] = 1;
        *((_QWORD *)v13 + 5) = 0LL;
        v13[12] = 0;
        KeInitializeEvent((PRKEVENT)(v13 + 14), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v13 + 100), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, v13);
        *((_WORD *)v13 + 72) = 0;
        v15 = *(_WORD *)(v2[5] + 2LL);
        *((_QWORD *)v13 + 19) = v13 + 498;
        *((_WORD *)v13 + 73) = v15;
        RtlCopyUnicodeString((PUNICODE_STRING)v13 + 9, (PCUNICODE_STRING)v2[5]);
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                (PUNICODE_STRING)v13 + 9,
                                0x80000000,
                                (PFILE_OBJECT *)v13 + 22,
                                (PDEVICE_OBJECT *)v13 + 23);
        v18 = DeviceObjectPointer;
        if ( DeviceObjectPointer < 0 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdError(v17);
          v19[3] = DpiMiracastInterfaceChange;
          v19[4] = IoGetDeviceObjectPointer;
          v19[5] = v18;
LABEL_54:
          WdLogEvent5_WdError(v19);
          goto LABEL_58;
        }
        v20 = 1;
        v67 = 1;
        NotificationEvent = IoCreateNotificationEvent(0LL, EventHandle);
        *((_QWORD *)v13 + 43) = NotificationEvent;
        if ( !NotificationEvent )
        {
          v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
          v23[3] = DpiMiracastInterfaceChange;
          v23[4] = IoCreateNotificationEvent;
          v23[5] = -1073741801LL;
          WdLogEvent5_WdError(v23);
LABEL_62:
          v57 = (void *)*((_QWORD *)v13 + 27);
          if ( v57 )
          {
            ExFreePoolWithTag(v57, 0);
            *((_QWORD *)v13 + 27) = 0LL;
          }
          v58 = (void *)*((_QWORD *)v13 + 28);
          if ( v58 )
          {
            ExFreePoolWithTag(v58, 0);
            *((_QWORD *)v13 + 28) = 0LL;
          }
          v59 = (void *)*((_QWORD *)v13 + 29);
          if ( v59 )
          {
            ExFreePoolWithTag(v59, 0);
            *((_QWORD *)v13 + 29) = 0LL;
          }
          v60 = (void *)*((_QWORD *)v13 + 30);
          if ( v60 )
          {
            ExFreePoolWithTag(v60, 0);
            *((_QWORD *)v13 + 30) = 0LL;
          }
          v61 = (void *)*((_QWORD *)v13 + 31);
          if ( v61 )
          {
            ExFreePoolWithTag(v61, 0);
            *((_QWORD *)v13 + 31) = 0LL;
          }
          if ( v20 )
            ObfDereferenceObject(*((PVOID *)v13 + 22));
          v62 = (void *)*((_QWORD *)v13 + 43);
          if ( v62 )
            ObfDereferenceObject(v62);
          if ( *((_QWORD *)v13 + 17) )
            RtlFreeUnicodeString((PUNICODE_STRING)v13 + 8);
          if ( v70 )
          {
            KeAcquireInStackQueuedSpinLock(&qword_1C0047008, &LockHandle);
            v63 = *(_QWORD *)v13;
            v64 = (_QWORD *)*((_QWORD *)v13 + 1);
            if ( *(_DWORD **)(*(_QWORD *)v13 + 8LL) != v13 || (_DWORD *)*v64 != v13 )
              __fastfail(3u);
            *v64 = v63;
            *(_QWORD *)(v63 + 8) = v64;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
          ExFreePoolWithTag(v13, 0);
          goto LABEL_83;
        }
        ObfReferenceObject(NotificationEvent);
        ZwClose(EventHandle[0]);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*((PDEVICE_OBJECT *)v13 + 23));
        DevicePropertyData = IoGetDevicePropertyData(
                               DeviceAttachmentBaseRef,
                               &DEVPKEY_WiFiDirect_MiracastVersion,
                               0,
                               0,
                               4u,
                               v13 + 48,
                               &RequiredSize,
                               &Type);
        v18 = DevicePropertyData;
        if ( DevicePropertyData >= 0 && Type == 7 )
        {
          v26 = IoGetDevicePropertyData(
                  DeviceAttachmentBaseRef,
                  &DEVPKEY_WiFiDirect_DeviceAddress,
                  0,
                  0,
                  6u,
                  v13 + 52,
                  &RequiredSize,
                  &Type);
          v28 = v26;
          if ( v26 < 0 || Type != 4099 )
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdError(v27);
            v55[4] = IoGetDevicePropertyData;
            v55[3] = DpiMiracastInterfaceChange;
            v55[5] = v28;
            WdLogEvent5_WdError(v55);
LABEL_61:
            v20 = v67;
            goto LABEL_62;
          }
          if ( (int)DpiGetDevicePropertyDataString(
                      DeviceAttachmentBaseRef,
                      (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                      0,
                      PagedPool,
                      (__int64)(v13 + 54),
                      (__int64)&RequiredSize) >= 0
            || (v29 = 0,
                (int)DpiGetDevicePropertyString(
                       DeviceAttachmentBaseRef,
                       DevicePropertyManufacturer,
                       PagedPool,
                       (__int64)&RequiredSize) >= 0) )
          {
            v29 = RequiredSize;
          }
          DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                       DeviceAttachmentBaseRef,
                                       (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                       0,
                                       PagedPool,
                                       (__int64)(v13 + 56),
                                       (__int64)&RequiredSize);
          v31 = RequiredSize;
          if ( DevicePropertyDataString < 0 )
            v31 = 0;
          RequiredSize = v31;
          v32 = v31 + v29;
          if ( v32 )
          {
            v33 = v32 + 4LL;
            if ( v33 < 0xFFFF )
            {
              v34 = ExAllocatePoolWithTag((POOL_TYPE)512, v33, 0x74727044u);
              *((_QWORD *)v13 + 29) = v34;
              if ( v34 )
              {
                v35 = RequiredSize;
                *(_QWORD *)&DestinationString.Length = 0LL;
                DestinationString.Buffer = 0LL;
                if ( v32 == RequiredSize )
                {
                  Length = DestinationString.Length;
                }
                else
                {
                  memmove(v34, *((const void **)v13 + 27), v32 - RequiredSize);
                  *(_WORD *)(*((_QWORD *)v13 + 29) + 2 * ((unsigned __int64)(v32 - RequiredSize) >> 1)) = 0;
                  RtlInitUnicodeString(&DestinationString, *((PCWSTR *)v13 + 29));
                  *(_WORD *)(*((_QWORD *)v13 + 29) + 2 * ((unsigned __int64)DestinationString.Length >> 1)) = 32;
                  v35 = RequiredSize;
                  Length = DestinationString.Length + 2;
                  DestinationString.Length += 2;
                }
                DestinationString.MaximumLength = v32 + 4;
                if ( (_DWORD)v35 )
                {
                  memmove(
                    (void *)(*((_QWORD *)v13 + 29) + 2 * ((unsigned __int64)Length >> 1)),
                    *((const void **)v13 + 28),
                    v35);
                  LODWORD(v35) = RequiredSize;
                  Length = DestinationString.Length;
                }
                *(_WORD *)(*((_QWORD *)v13 + 29) + 2 * ((unsigned __int64)((unsigned int)v35 + Length) >> 1)) = 0;
              }
            }
          }
          DpiGetDevicePropertyDataString(
            DeviceAttachmentBaseRef,
            (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
            0,
            PagedPool,
            (__int64)(v13 + 60),
            (__int64)&RequiredSize);
          DpiGetDevicePropertyDataString(
            DeviceAttachmentBaseRef,
            (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName,
            0,
            PagedPool,
            (__int64)(v13 + 62),
            (__int64)&RequiredSize);
          DeviceInstanceId = DpiGetDeviceInstanceId(DeviceAttachmentBaseRef);
          v18 = DeviceInstanceId;
          if ( DeviceInstanceId < 0 )
          {
            v39 = (_QWORD *)WdLogNewEntry5_WdError(v38);
            v39[4] = DpiGetDeviceInstanceId;
            v39[3] = DpiMiracastInterfaceChange;
            v39[5] = v18;
            WdLogEvent5_WdError(v39);
            v7 = 0;
            goto LABEL_58;
          }
          RtlInitUnicodeString((PUNICODE_STRING)v13 + 10, (PCWSTR)EventHandle[1]);
          v77 = v13[48];
          v7 = 1;
          memmove(v78, v13 + 52, 6uLL);
          v40 = DpiMiracastSendSyncUserModeRequest(v13, 2295808LL, &v77, 16LL, &v77, 16, v75);
          v18 = v40;
          if ( v40 < 0 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdError(v41);
            v43 = DpiMiracastSendSyncUserModeRequest;
LABEL_53:
            v42[3] = DpiMiracastInterfaceChange;
            v42[4] = v43;
            v19 = v42;
            v42[5] = v18;
            goto LABEL_54;
          }
          if ( v76 < 0x10 )
          {
            v44 = (_QWORD *)WdLogNewEntry5_WdError(v41);
            v44[4] = DpiMiracastSendSyncUserModeRequest;
            v44[3] = DpiMiracastInterfaceChange;
            v44[5] = -1073741811LL;
            WdLogEvent5_WdError(v44);
LABEL_60:
            DxgkFreeUnicodeString(v13 + 40);
            goto LABEL_61;
          }
          v45 = PsLookupProcessByProcessId((HANDLE)(unsigned int)ProcessId, (PEPROCESS *)v13 + 13);
          v18 = v45;
          if ( v45 < 0 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdError(v46);
            v43 = PsLookupProcessByProcessId;
            goto LABEL_53;
          }
          ObfDereferenceObject(*((PVOID *)v13 + 13));
          AcquireMiniportListMutex();
          v47 = qword_1C0047010;
          v69 = 1;
          while ( (__int64 *)v47 != &qword_1C0047010 )
          {
            if ( !RtlCompareUnicodeString((PCUNICODE_STRING)v2[5], (PCUNICODE_STRING)(v47 + 144), 0) )
              goto LABEL_60;
            v47 = *(_QWORD *)v47;
          }
          LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)v13 + 12);
          v18 = LocallyUniqueId;
          if ( LocallyUniqueId < 0 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdError(v49);
            v43 = ZwAllocateLocallyUniqueId;
            goto LABEL_53;
          }
          v50 = IoRegisterDeviceInterface(
                  DeviceAttachmentBaseRef,
                  &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                  0LL,
                  (PUNICODE_STRING)v13 + 8);
          v18 = v50;
          if ( v50 < 0 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdError(v51);
            v43 = IoRegisterDeviceInterface;
            goto LABEL_53;
          }
          KeAcquireInStackQueuedSpinLock(&qword_1C0047008, &LockHandle);
          v52 = (__int64 **)qword_1C0047018;
          *(_QWORD *)v13 = &qword_1C0047010;
          *((_QWORD *)v13 + 1) = v52;
          if ( *v52 != &qword_1C0047010 )
            __fastfail(3u);
          *v52 = (__int64 *)v13;
          qword_1C0047018 = (__int64)v13;
          v70 = 1;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v53 = IoRegisterPlugPlayNotification(
                  EventCategoryTargetDeviceChange,
                  0,
                  *((PVOID *)v13 + 22),
                  g_pDriverObject,
                  DpiMiracastTargetDeviceChange,
                  v13,
                  (PVOID *)v13 + 35);
          v18 = v53;
          if ( v53 < 0 )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdError(v54);
            v43 = IoRegisterPlugPlayNotification;
            goto LABEL_53;
          }
          IoSetDeviceInterfaceState((PUNICODE_STRING)v13 + 8, 1u);
        }
        else
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdError(v25);
          v56[4] = IoGetDevicePropertyData;
          v56[3] = DpiMiracastInterfaceChange;
          v56[5] = v18;
          WdLogEvent5_WdError(v56);
          LODWORD(v18) = -1073741811;
        }
LABEL_58:
        if ( (int)v18 >= 0 )
        {
LABEL_83:
          if ( DeviceAttachmentBaseRef )
            ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( v69 )
          {
            _InterlockedExchange64(&qword_1C0046D08, 0LL);
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
  v66 = (_QWORD *)WdLogNewEntry5_WdError(NotificationStructure);
  v66[3] = DpiMiracastInterfaceChange;
  v66[4] = 0LL;
  v66[5] = -1073741585LL;
  WdLogEvent5_WdError(v66);
  return 3221225711LL;
}

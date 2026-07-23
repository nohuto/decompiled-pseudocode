/*
 * XREFs of PiUEventProcessBroadcastNotifications @ 0x140489978
 * Callers:
 *     PiUEventProcessEventWorker @ 0x140489744 (PiUEventProcessEventWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlStringCchLengthW @ 0x1400C2600 (RtlStringCchLengthW.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1404887EC (PiUEventQueueBroadcastEventEntry.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     IopGetSessionIdFromSymbolicName @ 0x1405436D8 (IopGetSessionIdFromSymbolicName.c)
 */

__int64 __fastcall PiUEventProcessBroadcastNotifications(__int64 a1)
{
  NTSTATUS ObjectProperty; // ebx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // r14d
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v11; // zf
  __int64 v12; // rax
  char *v13; // rax
  char *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _DWORD *v23; // rax
  _DWORD *v24; // rdi
  char *v25; // rax
  char *v26; // rax
  char *PoolWithTag; // rax
  UNICODE_STRING pcchLength; // [rsp+60h] [rbp-10h] BYREF
  int v29; // [rsp+A8h] [rbp+38h] BYREF
  int v30; // [rsp+B0h] [rbp+40h] BYREF
  int v31; // [rsp+B8h] [rbp+48h] BYREF

  ObjectProperty = 0;
  *(_QWORD *)&pcchLength.Length = 0LL;
  v30 = 0;
  if ( !PiUEventBroadcastSubscriberPresent )
    return (unsigned int)ObjectProperty;
  v3 = *(_DWORD *)(a1 + 88);
  if ( !v3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x1C0uLL);
    *((_DWORD *)v14 + 6) = -1;
    *((_DWORD *)v14 + 5) = 2;
    *(_OWORD *)(v14 + 28) = *(_OWORD *)(a1 + 72);
    goto LABEL_23;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v12 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
    if ( !v12 )
      v12 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
    if ( !v12 )
      goto LABEL_20;
    v20 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1;
    if ( !v20 )
      v20 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4;
    if ( !v20 )
    {
LABEL_20:
      v13 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v14 = v13;
      if ( !v13 )
        return (unsigned int)-1073741670;
      memset(v13, 0, 0x1C0uLL);
      *((_DWORD *)v14 + 5) = 0;
      ObjectProperty = PnpGetObjectProperty(
                         PiPnpRtlCtx,
                         (int)a1 + 120,
                         1,
                         0,
                         0LL,
                         (__int64)&DEVPKEY_Device_SessionId,
                         (__int64)&v29,
                         (__int64)(v14 + 24),
                         4,
                         (__int64)&v30,
                         0);
      if ( ObjectProperty < 0 || v30 != 4 )
      {
        *((_DWORD *)v14 + 6) = -1;
        ObjectProperty = 0;
      }
      goto LABEL_23;
    }
    v21 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
    if ( !v21 )
      v21 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
    v11 = v21 == 0;
LABEL_15:
    if ( !v11 )
      return (unsigned int)ObjectProperty;
    goto LABEL_20;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v16 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( !v16 )
      v16 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( v16 )
    {
      v22 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
      if ( !v22 )
        v22 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
      if ( v22 )
        return (unsigned int)ObjectProperty;
    }
    v17 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVINTERFACE_VOLUME.Data1;
    if ( !v17 )
      v17 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVINTERFACE_VOLUME.Data4;
    if ( v17 )
    {
      v18 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVINTERFACE_PARALLEL.Data1;
      if ( !v18 )
        v18 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVINTERFACE_PARALLEL.Data4;
      if ( v18 )
      {
        v19 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVINTERFACE_COMPORT.Data1;
        if ( !v19 )
          v19 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVINTERFACE_COMPORT.Data4;
        if ( v19 )
          return (unsigned int)ObjectProperty;
      }
      v26 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v14 = v26;
      if ( !v26 )
        return (unsigned int)-1073741670;
      memset(v26, 0, 0x1C0uLL);
      RtlInitUnicodeString(&pcchLength, (PCWSTR)(a1 + 136));
      *((_DWORD *)v14 + 5) = 3;
      *(_OWORD *)(v14 + 28) = *(_OWORD *)(a1 + 72);
      v31 = 400;
      ObjectProperty = PnpGetObjectProperty(
                         PiPnpRtlCtx,
                         (int)a1 + 136,
                         3,
                         0,
                         0LL,
                         (__int64)&DEVPKEY_Device_InstanceId,
                         (__int64)&v29,
                         (__int64)(v14 + 44),
                         400,
                         (__int64)&v31,
                         0);
      if ( ObjectProperty < 0 || v29 != 18 )
      {
        ExFreePoolWithTag(v14, 0x59706E50u);
        return (unsigned int)ObjectProperty;
      }
      v31 = 4;
      ObjectProperty = PnpGetObjectProperty(
                         PiPnpRtlCtx,
                         (int)v14 + 44,
                         1,
                         0,
                         0LL,
                         (__int64)&DEVPKEY_Device_SessionId,
                         (__int64)&v29,
                         (__int64)(v14 + 24),
                         4,
                         (__int64)&v31,
                         0);
      if ( ObjectProperty < 0 || v29 != 7 )
        *((_DWORD *)v14 + 6) = -1;
    }
    else
    {
      v25 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v14 = v25;
      if ( !v25 )
        return (unsigned int)-1073741670;
      memset(v25, 0, 0x1C0uLL);
      RtlInitUnicodeString(&pcchLength, (PCWSTR)(a1 + 136));
      *((_DWORD *)v14 + 5) = 1;
      *((_DWORD *)v14 + 6) = IopGetSessionIdFromSymbolicName(&pcchLength);
    }
LABEL_23:
    v15 = (__int64)v14;
LABEL_24:
    PiUEventQueueBroadcastEventEntry(v15);
    return (unsigned int)ObjectProperty;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v11 = v6 == 1;
    goto LABEL_15;
  }
  v7 = a1 + 128;
  ObjectProperty = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a1 + 128), 0xC8uLL, (size_t *)&pcchLength.Length);
  if ( ObjectProperty >= 0 && *(_QWORD *)&pcchLength.Length )
  {
    if ( (unsigned int)(2 * (*(_DWORD *)&pcchLength.Length + 1) + 80) < 0x50
      || 2 * (*(_DWORD *)&pcchLength.Length + 1) + 87 < (unsigned int)(2 * (*(_DWORD *)&pcchLength.Length + 1) + 80) )
    {
      return (unsigned int)-1073741675;
    }
    ObjectProperty = 0;
    v8 = (2 * (*(_DWORD *)&pcchLength.Length + 1) + 87) & 0xFFFFFFF8;
    v9 = *(_QWORD *)(v8 + a1 + 76) - *(_QWORD *)&GUID_IO_VOLUME_NAME_CHANGE.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(v8 + a1 + 84) - *(_QWORD *)GUID_IO_VOLUME_NAME_CHANGE.Data4;
    if ( !v9 )
    {
      v23 = ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v24 = v23;
      if ( v23 )
      {
        memset(v23, 0, 0x1C0uLL);
        v24[5] = 1;
        ObjectProperty = PnpGetObjectProperty(
                           PiPnpRtlCtx,
                           v7,
                           1,
                           0,
                           0LL,
                           (__int64)&DEVPKEY_Device_SessionId,
                           (__int64)&v29,
                           (__int64)(v24 + 6),
                           4,
                           (__int64)&v30,
                           0);
        if ( ObjectProperty < 0 || v30 != 4 )
        {
          v24[6] = -1;
          ObjectProperty = 0;
        }
        v15 = (__int64)v24;
        goto LABEL_24;
      }
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)ObjectProperty;
}

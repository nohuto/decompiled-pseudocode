/*
 * XREFs of PiUEventProcessBroadcastNotifications @ 0x14045DC54
 * Callers:
 *     PiUEventProcessEventWorker @ 0x14045D8BC (PiUEventProcessEventWorker.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140008670 (RtlStringCchLengthW.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14045BF70 (IopGetSessionIdFromSymbolicName.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14045D730 (PiUEventQueueBroadcastEventEntry.c)
 */

__int64 __fastcall PiUEventProcessBroadcastNotifications(__int64 a1)
{
  int ObjectProperty; // ebx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  bool v7; // zf
  char *v8; // rax
  char *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rcx
  _DWORD *v15; // rax
  _DWORD *v16; // rdi
  __int64 v17; // rcx
  char *v18; // rax
  char *v19; // rax
  char *PoolWithTag; // rax
  UNICODE_STRING pcchLength; // [rsp+60h] [rbp-10h] BYREF
  int v23; // [rsp+A8h] [rbp+38h] BYREF
  int v24; // [rsp+B0h] [rbp+40h] BYREF
  int v25; // [rsp+B8h] [rbp+48h] BYREF

  ObjectProperty = 0;
  *(_QWORD *)&pcchLength.Length = 0LL;
  v24 = 0;
  if ( !PiUEventBroadcastSubscriberPresent )
    return (unsigned int)ObjectProperty;
  v3 = *(_DWORD *)(a1 + 88);
  if ( !v3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
    v9 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x1C0uLL);
    *((_DWORD *)v9 + 6) = -1;
    *((_DWORD *)v9 + 5) = 2;
    *(_OWORD *)(v9 + 28) = *(_OWORD *)(a1 + 72);
    goto LABEL_52;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 72) == *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1
      && *(_QWORD *)(a1 + 80) == *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4
      || *(_QWORD *)(a1 + 72) == *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1
      && *(_QWORD *)(a1 + 80) == *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4 )
    {
      goto LABEL_8;
    }
    if ( *(_QWORD *)(a1 + 72) != *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 )
      return (unsigned int)ObjectProperty;
    v7 = *(_QWORD *)(a1 + 80) == *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
    goto LABEL_7;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( (*(_QWORD *)(a1 + 72) != *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1
       || *(_QWORD *)(a1 + 80) != *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4)
      && (*(_QWORD *)(a1 + 72) != *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1
       || *(_QWORD *)(a1 + 80) != *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4) )
    {
      return (unsigned int)ObjectProperty;
    }
    if ( *(_QWORD *)(a1 + 120) == *(_QWORD *)&GUID_DEVINTERFACE_VOLUME.Data1
      && *(_QWORD *)(a1 + 128) == *(_QWORD *)GUID_DEVINTERFACE_VOLUME.Data4 )
    {
      v18 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v9 = v18;
      if ( !v18 )
        return (unsigned int)-1073741670;
      memset(v18, 0, 0x1C0uLL);
      RtlInitUnicodeString(&pcchLength, (PCWSTR)(a1 + 136));
      *((_DWORD *)v9 + 5) = 1;
      *((_DWORD *)v9 + 6) = IopGetSessionIdFromSymbolicName();
    }
    else
    {
      if ( (*(_QWORD *)(a1 + 120) != *(_QWORD *)&GUID_DEVINTERFACE_PARALLEL.Data1
         || *(_QWORD *)(a1 + 128) != *(_QWORD *)GUID_DEVINTERFACE_PARALLEL.Data4)
        && (*(_QWORD *)(a1 + 120) != *(_QWORD *)&GUID_DEVINTERFACE_COMPORT.Data1
         || *(_QWORD *)(a1 + 128) != *(_QWORD *)GUID_DEVINTERFACE_COMPORT.Data4) )
      {
        return (unsigned int)ObjectProperty;
      }
      v19 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v9 = v19;
      if ( !v19 )
        return (unsigned int)-1073741670;
      memset(v19, 0, 0x1C0uLL);
      RtlInitUnicodeString(&pcchLength, (PCWSTR)(a1 + 136));
      *((_DWORD *)v9 + 5) = 3;
      *(_OWORD *)(v9 + 28) = *(_OWORD *)(a1 + 72);
      v25 = 400;
      ObjectProperty = PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         a1 + 136,
                         3u,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_InstanceId,
                         (__int64)&v23,
                         (__int64)(v9 + 44),
                         400,
                         (__int64)&v25,
                         0);
      if ( ObjectProperty < 0 || v23 != 18 )
      {
        ExFreePoolWithTag(v9, 0x59706E50u);
        return (unsigned int)ObjectProperty;
      }
      v25 = 4;
      ObjectProperty = PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)(v9 + 44),
                         1u,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_SessionId,
                         (__int64)&v23,
                         (__int64)(v9 + 24),
                         4,
                         (__int64)&v25,
                         0);
      if ( ObjectProperty < 0 || v23 != 7 )
        *((_DWORD *)v9 + 6) = -1;
    }
LABEL_52:
    v17 = (__int64)v9;
    goto LABEL_53;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v13 = a1 + 128;
    ObjectProperty = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a1 + 128), 0xC8uLL, (size_t *)&pcchLength.Length);
    if ( ObjectProperty >= 0 && *(_QWORD *)&pcchLength.Length )
    {
      if ( (unsigned int)(2 * (*(_DWORD *)&pcchLength.Length + 1) + 80) < 0x50
        || 2 * (*(_DWORD *)&pcchLength.Length + 1) + 87 < (unsigned int)(2 * (*(_DWORD *)&pcchLength.Length + 1) + 80) )
      {
        return (unsigned int)-1073741675;
      }
      ObjectProperty = 0;
      v14 = (2 * (*(_DWORD *)&pcchLength.Length + 1) + 87) & 0xFFFFFFF8;
      if ( *(_QWORD *)(v14 + a1 + 76) == *(_QWORD *)&GUID_IO_VOLUME_NAME_CHANGE.Data1
        && *(_QWORD *)(v14 + a1 + 84) == *(_QWORD *)GUID_IO_VOLUME_NAME_CHANGE.Data4 )
      {
        v15 = ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
        v16 = v15;
        if ( !v15 )
          return (unsigned int)-1073741670;
        memset(v15, 0, 0x1C0uLL);
        v16[5] = 1;
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v13,
                           1u,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_Device_SessionId,
                           (__int64)&v23,
                           (__int64)(v16 + 6),
                           4,
                           (__int64)&v24,
                           0);
        if ( ObjectProperty < 0 || v24 != 4 )
        {
          v16[6] = -1;
          ObjectProperty = 0;
        }
        v17 = (__int64)v16;
LABEL_53:
        PiUEventQueueBroadcastEventEntry(v17, v10, v11, v12);
        return (unsigned int)ObjectProperty;
      }
    }
    return (unsigned int)ObjectProperty;
  }
  v7 = v6 == 1;
LABEL_7:
  if ( v7 )
  {
LABEL_8:
    v8 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
    v9 = v8;
    if ( !v8 )
      return (unsigned int)-1073741670;
    memset(v8, 0, 0x1C0uLL);
    *((_DWORD *)v9 + 5) = 0;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a1 + 120,
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_SessionId,
                       (__int64)&v23,
                       (__int64)(v9 + 24),
                       4,
                       (__int64)&v24,
                       0);
    if ( ObjectProperty < 0 || v24 != 4 )
    {
      *((_DWORD *)v9 + 6) = -1;
      ObjectProperty = 0;
    }
    goto LABEL_52;
  }
  return (unsigned int)ObjectProperty;
}

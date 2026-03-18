/*
 * XREFs of IoRegisterPlugPlayNotification @ 0x1404E90BC
 * Callers:
 *     PopConnectToPolicyDevice @ 0x14054BF5C (PopConnectToPolicyDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140633814 (PopRegisterCoolingExtensionProtection.c)
 *     SmKmStoreFileCreate @ 0x14065AEBC (SmKmStoreFileCreate.c)
 *     VerifierIoRegisterPlugPlayNotification @ 0x1406C07FC (VerifierIoRegisterPlugPlayNotification.c)
 *     PoInitDriverServices @ 0x1407710B0 (PoInitDriverServices.c)
 *     SbpWaitForVmbus @ 0x140787A64 (SbpWaitForVmbus.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140003910 (ObReferenceObjectByPointer.c)
 *     PnpGetRelatedTargetDevice @ 0x14001AC00 (PnpGetRelatedTargetDevice.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopGetSessionIdFromSymbolicName @ 0x1404C2040 (IopGetSessionIdFromSymbolicName.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     PnpNotifyDriverCallback @ 0x1404E2024 (PnpNotifyDriverCallback.c)
 *     PnpDeferNotification @ 0x1404E9464 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x1404E9528 (PnpInitializeNotifyEntry.c)
 */

NTSTATUS __stdcall IoRegisterPlugPlayNotification(
        IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
        ULONG EventCategoryFlags,
        PVOID EventCategoryData,
        PDRIVER_OBJECT DriverObject,
        PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Context,
        PVOID *NotificationEntry)
{
  NTSTATUS result; // eax
  __int32 v11; // ebx
  __int32 v12; // ebx
  NTSTATUS RelatedTargetDevice; // ebx
  _QWORD *PoolWithTag; // rdi
  _QWORD *v15; // rsi
  PVOID *v16; // rcx
  struct _FAST_MUTEX *v17; // rcx
  _DWORD *v18; // r14
  char *v19; // rax
  char **v20; // rcx
  __int128 v21; // xmm1
  PVOID v22; // r14
  const WCHAR *i; // rsi
  int SessionIdFromSymbolicName; // eax
  __int64 **v25; // rax
  void *v26; // rcx
  ULONG v27; // edx
  PVOID P; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  int v30; // [rsp+48h] [rbp-38h] BYREF
  GUID v31; // [rsp+4Ch] [rbp-34h]
  __int128 v32; // [rsp+5Ch] [rbp-24h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-10h]

  LODWORD(P) = EventCategoryFlags;
  *NotificationEntry = 0LL;
  result = ObReferenceObjectByPointer(DriverObject, 0, IoDriverObjectType, 0);
  if ( result >= 0 )
  {
    v11 = EventCategory - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
        {
          RelatedTargetDevice = -1073741585;
          goto LABEL_34;
        }
        RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)EventCategoryData, &P);
        if ( RelatedTargetDevice < 0 )
        {
LABEL_34:
          ObfDereferenceObject(DriverObject);
          return RelatedTargetDevice;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x43706E50u);
        if ( PoolWithTag )
        {
          RelatedTargetDevice = PnpInitializeNotifyEntry(
                                  (_DWORD)PoolWithTag,
                                  3,
                                  (_DWORD)CallbackRoutine,
                                  (_DWORD)Context,
                                  (__int64)DriverObject,
                                  (__int64)&PnpTargetDeviceNotifyLock);
          if ( RelatedTargetDevice < 0 )
          {
            ExFreePoolWithTag(PoolWithTag, 0x43706E50u);
            v26 = (void *)*((_QWORD *)P + 4);
          }
          else
          {
            v15 = P;
            PoolWithTag[10] = EventCategoryData;
            PoolWithTag[11] = v15[4];
            RelatedTargetDevice = PnpDeferNotification(PoolWithTag);
            if ( RelatedTargetDevice >= 0 )
            {
              ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
              v16 = (PVOID *)v15[60];
              *PoolWithTag = v15 + 59;
              PoolWithTag[1] = v16;
              if ( *v16 != v15 + 59 )
                __fastfail(3u);
              *v16 = PoolWithTag;
              v17 = &PnpTargetDeviceNotifyLock;
              v15[60] = PoolWithTag;
LABEL_11:
              KeReleaseGuardedMutex(v17);
LABEL_12:
              *NotificationEntry = PoolWithTag;
              goto LABEL_13;
            }
            ExFreePoolWithTag(PoolWithTag, 0x43706E50u);
            v26 = (void *)v15[4];
          }
          ObfDereferenceObject(v26);
LABEL_13:
          if ( RelatedTargetDevice >= 0 )
            return RelatedTargetDevice;
          goto LABEL_34;
        }
        ObfDereferenceObject(*((PVOID *)P + 4));
LABEL_37:
        RelatedTargetDevice = -1073741670;
        goto LABEL_34;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x44706E50u);
      if ( !PoolWithTag )
        goto LABEL_37;
      RelatedTargetDevice = PnpInitializeNotifyEntry(
                              (_DWORD)PoolWithTag,
                              2,
                              (_DWORD)CallbackRoutine,
                              (_DWORD)Context,
                              (__int64)DriverObject,
                              (__int64)&PnpDeviceClassNotifyLock);
      if ( RelatedTargetDevice < 0 )
        goto LABEL_34;
      v18 = PoolWithTag + 10;
      *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)EventCategoryData;
      RelatedTargetDevice = PnpDeferNotification(PoolWithTag);
      if ( RelatedTargetDevice >= 0 )
      {
        ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
        v19 = (char *)&PnpDeviceClassNotifyList
            + 16
            * ((*v18 + *((_DWORD *)PoolWithTag + 21) + *((_DWORD *)PoolWithTag + 22) + *((_DWORD *)PoolWithTag + 23))
             % 0xDu);
        v20 = (char **)*((_QWORD *)v19 + 1);
        *PoolWithTag = v19;
        PoolWithTag[1] = v20;
        if ( *v20 != v19 )
          __fastfail(3u);
        *v20 = (char *)PoolWithTag;
        *((_QWORD *)v19 + 1) = PoolWithTag;
        KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
        if ( ((unsigned __int8)P & 1) != 0 )
        {
          v21 = *(_OWORD *)v18;
          v30 = 3145729;
          v31 = GUID_DEVICE_INTERFACE_ARRIVAL;
          v32 = v21;
          RelatedTargetDevice = IopGetDeviceInterfaces((int *)PoolWithTag + 20, 0LL, 0, 0, &P, 0LL);
          if ( RelatedTargetDevice < 0 )
            goto LABEL_34;
          v22 = P;
          for ( i = (const WCHAR *)P; *i; i += ((unsigned __int64)DestinationString.Length >> 1) + 1 )
          {
            RtlInitUnicodeString(&DestinationString, i);
            p_DestinationString = &DestinationString;
            if ( *((_DWORD *)PoolWithTag + 5) != *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL) )
            {
              SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName();
              if ( SessionIdFromSymbolicName != -1 && *((_DWORD *)PoolWithTag + 5) != SessionIdFromSymbolicName )
                continue;
            }
            PnpNotifyDriverCallback((__int64)PoolWithTag, (__int64)&v30, &P);
          }
          ExFreePoolWithTag(v22, 0);
        }
        goto LABEL_12;
      }
      v27 = 1148218960;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x39706E50u);
      if ( !PoolWithTag )
        goto LABEL_37;
      RelatedTargetDevice = PnpInitializeNotifyEntry(
                              (_DWORD)PoolWithTag,
                              1,
                              (_DWORD)CallbackRoutine,
                              (_DWORD)Context,
                              (__int64)DriverObject,
                              (__int64)&PnpHwProfileNotifyLock);
      if ( RelatedTargetDevice < 0 )
        goto LABEL_34;
      RelatedTargetDevice = PnpDeferNotification(PoolWithTag);
      if ( RelatedTargetDevice >= 0 )
      {
        ExAcquireFastMutex(&PnpHwProfileNotifyLock);
        v25 = (__int64 **)qword_1406FBF60;
        *PoolWithTag = &PnpProfileNotifyList;
        PoolWithTag[1] = v25;
        if ( *v25 != &PnpProfileNotifyList )
          __fastfail(3u);
        *v25 = PoolWithTag;
        v17 = &PnpHwProfileNotifyLock;
        qword_1406FBF60 = (__int64)PoolWithTag;
        goto LABEL_11;
      }
      v27 = 963669584;
    }
    ExFreePoolWithTag(PoolWithTag, v27);
    goto LABEL_13;
  }
  return result;
}

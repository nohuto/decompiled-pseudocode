/*
 * XREFs of IoRegisterPlugPlayNotification @ 0x140561348
 * Callers:
 *     PopConnectToPolicyDevice @ 0x1405C32C0 (PopConnectToPolicyDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406B2BE4 (PopRegisterCoolingExtensionProtection.c)
 *     SmKmStoreFileCreate @ 0x1406DD710 (SmKmStoreFileCreate.c)
 *     VerifierIoRegisterPlugPlayNotification @ 0x140741FF0 (VerifierIoRegisterPlugPlayNotification.c)
 *     PoInitDriverServices @ 0x1407E74CC (PoInitDriverServices.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140007C50 (ObReferenceObjectByPointer.c)
 *     PnpGetRelatedTargetDevice @ 0x1400080C4 (PnpGetRelatedTargetDevice.c)
 *     PsGetServerSiloGlobals @ 0x140026D98 (PsGetServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14045BF70 (IopGetSessionIdFromSymbolicName.c)
 *     PnpNotifyDriverCallback @ 0x14045E160 (PnpNotifyDriverCallback.c)
 *     PnpDeferNotification @ 0x140561854 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x1405619FC (PnpInitializeNotifyEntry.c)
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
  _QWORD *PoolWithTag; // rsi
  __int64 v15; // r14
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r14
  unsigned __int8 CurrentIrql; // r15
  signed __int8 v20; // cf
  __int64 v21; // rax
  _QWORD *v22; // rcx
  unsigned __int8 v23; // r14
  signed __int32 v24; // eax
  ULONG_PTR *v25; // rcx
  _DWORD *v26; // r15
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rcx
  char *v31; // rax
  char **v32; // rcx
  unsigned __int8 v33; // r14
  signed __int32 v34; // eax
  __int128 v35; // xmm1
  PVOID v36; // r14
  const WCHAR *v37; // rdi
  int SessionIdFromSymbolicName; // eax
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // r14
  unsigned __int8 v42; // r15
  __int64 **v43; // rax
  signed __int32 v44; // eax
  void *v45; // rcx
  ULONG v46; // edx
  __int64 v47; // [rsp+30h] [rbp-61h] BYREF
  ULONG v48; // [rsp+38h] [rbp-59h]
  PVOID P; // [rsp+40h] [rbp-51h] BYREF
  __int64 v50; // [rsp+48h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-41h] BYREF
  int v52; // [rsp+60h] [rbp-31h] BYREF
  int v53; // [rsp+68h] [rbp-29h] BYREF
  GUID v54; // [rsp+6Ch] [rbp-25h]
  __int128 v55; // [rsp+7Ch] [rbp-15h]
  UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp-1h]

  v48 = EventCategoryFlags;
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
          goto LABEL_52;
        }
        RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)EventCategoryData, &v47);
        if ( RelatedTargetDevice < 0 )
        {
LABEL_52:
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
            v45 = *(void **)(v47 + 32);
          }
          else
          {
            PoolWithTag[10] = EventCategoryData;
            v15 = v47;
            PoolWithTag[11] = *(_QWORD *)(v47 + 32);
            RelatedTargetDevice = PnpDeferNotification(PoolWithTag);
            if ( RelatedTargetDevice >= 0 )
            {
              v17 = KeAbPreAcquire((ULONG_PTR)&PnpTargetDeviceNotifyLock, 0LL, 0LL, v16);
              v18 = v17;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(1uLL);
              v20 = _interlockedbittestandreset((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, 0);
              if ( !v20 )
                ExpAcquireFastMutexContended((ULONG_PTR)&PnpTargetDeviceNotifyLock, v17);
              if ( v18 )
                *(_BYTE *)(v18 + 26) |= 1u;
              qword_14034B2A8 = (__int64)KeGetCurrentThread();
              dword_14034B2D0 = CurrentIrql;
              v21 = v47 + 472;
              v22 = *(_QWORD **)(v47 + 480);
              *PoolWithTag = v47 + 472;
              PoolWithTag[1] = v22;
              if ( *v22 != v21 )
                __fastfail(3u);
              *v22 = PoolWithTag;
              *(_QWORD *)(v21 + 8) = PoolWithTag;
              v23 = dword_14034B2D0;
              qword_14034B2A8 = 0LL;
              v24 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, 1, 0);
              if ( v24 )
                ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpTargetDeviceNotifyLock, v24);
              v25 = &PnpTargetDeviceNotifyLock;
LABEL_17:
              __writecr8(v23);
              KeAbPostRelease((ULONG_PTR)v25);
LABEL_18:
              *NotificationEntry = PoolWithTag;
              goto LABEL_19;
            }
            ExFreePoolWithTag(PoolWithTag, 0x43706E50u);
            v45 = *(void **)(v15 + 32);
          }
          ObfDereferenceObject(v45);
LABEL_19:
          if ( RelatedTargetDevice >= 0 )
            return RelatedTargetDevice;
          goto LABEL_52;
        }
        ObfDereferenceObject(*(PVOID *)(v47 + 32));
LABEL_55:
        RelatedTargetDevice = -1073741670;
        goto LABEL_52;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x44706E50u);
      if ( !PoolWithTag )
        goto LABEL_55;
      RelatedTargetDevice = PnpInitializeNotifyEntry(
                              (_DWORD)PoolWithTag,
                              2,
                              (_DWORD)CallbackRoutine,
                              (_DWORD)Context,
                              (__int64)DriverObject,
                              (__int64)&PnpDeviceClassNotifyLock);
      if ( RelatedTargetDevice < 0 )
        goto LABEL_52;
      v26 = PoolWithTag + 10;
      *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)EventCategoryData;
      RelatedTargetDevice = PnpDeferNotification(PoolWithTag);
      if ( RelatedTargetDevice >= 0 )
      {
        v28 = KeAbPreAcquire((ULONG_PTR)&PnpDeviceClassNotifyLock, 0LL, 0LL, v27);
        v29 = v28;
        v30 = KeGetCurrentIrql();
        v50 = v30;
        __writecr8(1uLL);
        v20 = _interlockedbittestandreset((volatile signed __int32 *)&PnpDeviceClassNotifyLock, 0);
        if ( !v20 )
        {
          ExpAcquireFastMutexContended((ULONG_PTR)&PnpDeviceClassNotifyLock, v28);
          LOBYTE(v30) = v50;
        }
        if ( v29 )
          *(_BYTE *)(v29 + 26) |= 1u;
        qword_14034B268 = (__int64)KeGetCurrentThread();
        dword_14034B290 = (unsigned __int8)v30;
        v31 = (char *)&PnpDeviceClassNotifyList
            + 16
            * ((*v26 + *((_DWORD *)PoolWithTag + 21) + *((_DWORD *)PoolWithTag + 22) + *((_DWORD *)PoolWithTag + 23))
             % 0xDu);
        v32 = (char **)*((_QWORD *)v31 + 1);
        *PoolWithTag = v31;
        PoolWithTag[1] = v32;
        if ( *v32 != v31 )
          __fastfail(3u);
        *v32 = (char *)PoolWithTag;
        v33 = dword_14034B290;
        *((_QWORD *)v31 + 1) = PoolWithTag;
        qword_14034B268 = 0LL;
        v34 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpDeviceClassNotifyLock, 1, 0);
        if ( v34 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpDeviceClassNotifyLock, v34);
        __writecr8(v33);
        KeAbPostRelease((ULONG_PTR)&PnpDeviceClassNotifyLock);
        if ( (v48 & 1) != 0 )
        {
          v35 = *(_OWORD *)v26;
          v53 = 3145729;
          v54 = GUID_DEVICE_INTERFACE_ARRIVAL;
          v55 = v35;
          RelatedTargetDevice = IopGetDeviceInterfaces((int *)PoolWithTag + 20, 0LL, 0, 0, &P, 0LL);
          if ( RelatedTargetDevice < 0 )
            goto LABEL_52;
          v36 = P;
          v37 = (const WCHAR *)P;
          if ( *(_WORD *)P )
          {
            do
            {
              RtlInitUnicodeString(&DestinationString, v37);
              p_DestinationString = &DestinationString;
              if ( *((_DWORD *)PoolWithTag + 5) == *(_DWORD *)PsGetServerSiloGlobals((_QWORD *)0xFFFFFFFFFFFFFFFFLL)
                || (SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(), SessionIdFromSymbolicName == -1)
                || *((_DWORD *)PoolWithTag + 5) == SessionIdFromSymbolicName )
              {
                PnpNotifyDriverCallback((__int64)PoolWithTag, (__int64)&v53, &v52);
              }
              v37 += ((unsigned __int64)DestinationString.Length >> 1) + 1;
            }
            while ( *v37 );
            v36 = P;
          }
          ExFreePoolWithTag(v36, 0);
        }
        goto LABEL_18;
      }
      v46 = 1148218960;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x39706E50u);
      if ( !PoolWithTag )
        goto LABEL_55;
      RelatedTargetDevice = PnpInitializeNotifyEntry(
                              (_DWORD)PoolWithTag,
                              1,
                              (_DWORD)CallbackRoutine,
                              (_DWORD)Context,
                              (__int64)DriverObject,
                              (__int64)&PnpHwProfileNotifyLock);
      if ( RelatedTargetDevice < 0 )
        goto LABEL_52;
      RelatedTargetDevice = PnpDeferNotification(PoolWithTag);
      if ( RelatedTargetDevice >= 0 )
      {
        v40 = KeAbPreAcquire((ULONG_PTR)&PnpHwProfileNotifyLock, 0LL, 0LL, v39);
        v41 = v40;
        v42 = KeGetCurrentIrql();
        __writecr8(1uLL);
        v20 = _interlockedbittestandreset((volatile signed __int32 *)&PnpHwProfileNotifyLock, 0);
        if ( !v20 )
          ExpAcquireFastMutexContended((ULONG_PTR)&PnpHwProfileNotifyLock, v40);
        if ( v41 )
          *(_BYTE *)(v41 + 26) |= 1u;
        qword_14034B2E8 = (__int64)KeGetCurrentThread();
        dword_14034B310 = v42;
        v43 = (__int64 **)qword_14077EF70;
        *PoolWithTag = &PnpProfileNotifyList;
        PoolWithTag[1] = v43;
        if ( *v43 != &PnpProfileNotifyList )
          __fastfail(3u);
        *v43 = PoolWithTag;
        v23 = dword_14034B310;
        qword_14077EF70 = (__int64)PoolWithTag;
        qword_14034B2E8 = 0LL;
        v44 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpHwProfileNotifyLock, 1, 0);
        if ( v44 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpHwProfileNotifyLock, v44);
        v25 = &PnpHwProfileNotifyLock;
        goto LABEL_17;
      }
      v46 = 963669584;
    }
    ExFreePoolWithTag(PoolWithTag, v46);
    goto LABEL_19;
  }
  return result;
}

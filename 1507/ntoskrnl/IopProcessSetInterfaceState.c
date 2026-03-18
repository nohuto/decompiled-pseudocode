/*
 * XREFs of IopProcessSetInterfaceState @ 0x1404E3518
 * Callers:
 *     IoSetDeviceInterfaceState @ 0x14045A0B4 (IoSetDeviceInterfaceState.c)
 *     IopDoDeferredSetInterfaceState @ 0x140550270 (IopDoDeferredSetInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x140180630 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x1401812F0 (ZwOpenSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14043F2AC (_CmGetDeviceInterfaceClassGuid.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PnpSetDeviceClassChange @ 0x14045F3A4 (PnpSetDeviceClassChange.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404DF548 (_PnpObjectRaisePropertyChangeEvent.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E04DC (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E0538 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E066C (PiDmAddCacheReferenceForObject.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1404E3A00 (IopBuildGlobalSymbolicLinkString.c)
 *     PiDeferSetInterfaceState @ 0x140556B68 (PiDeferSetInterfaceState.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(UNICODE_STRING *String2, char a2, unsigned int *a3)
{
  char v4; // di
  PVOID v6; // r12
  char v7; // r14
  wchar_t *v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  int inited; // ebx
  WCHAR *PoolWithTag; // rax
  WCHAR *v13; // r14
  int ObjectProperty; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _DEVICE_OBJECT *v18; // rax
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rcx
  char *DeviceNode; // r14
  int v21; // eax
  struct _DEVICE_OBJECT *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  signed __int64 *v26; // rdi
  ULONG_PTR v27; // rdx
  signed __int64 v28; // rax
  signed __int64 v29; // rcx
  signed __int64 v30; // rtt
  ULONG_PTR v31; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v33; // ax
  GUID *v34; // rcx
  UNICODE_STRING **v36; // r14
  UNICODE_STRING *i; // rdi
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  void *v41; // rcx
  __int64 v42; // rcx
  wchar_t *Buffer; // rax
  char v44; // [rsp+68h] [rbp-A0h]
  WCHAR *v45; // [rsp+70h] [rbp-98h]
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-88h] BYREF
  wchar_t *v48; // [rsp+88h] [rbp-80h] BYREF
  int v49; // [rsp+90h] [rbp-78h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp-70h]
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-68h] BYREF
  char v52[8]; // [rsp+B0h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING Name; // [rsp+F8h] [rbp-10h] BYREF
  GUID v56; // [rsp+108h] [rbp+0h] BYREF

  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  v45 = 0LL;
  v4 = (char)a3;
  UnicodeString.Length = 0;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  v6 = 0LL;
  HIWORD(UnicodeString.Buffer) = 0;
  v7 = 0;
  BugCheckParameter2 = 0LL;
  v8 = 0LL;
  DeviceObject = 0LL;
  v48 = 0LL;
  v44 = 0;
  if ( !String2 || !String2->Buffer || !String2->Length )
  {
    inited = -1073741811;
    goto LABEL_42;
  }
  v9 = PnpUnicodeStringToWstr(&v48, 0LL, &String2->Length);
  v8 = v48;
  inited = v9;
  if ( v9 < 0
    || (inited = CmGetDeviceInterfaceClassGuid(v10, v48, &v56), inited < 0)
    || (inited = IopBuildGlobalSymbolicLinkString(String2, &UnicodeString), inited < 0) )
  {
    v13 = 0LL;
  }
  else
  {
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
    v45 = PoolWithTag;
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      ObjectProperty = PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)v8,
                         3u,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_InstanceId,
                         (__int64)&v49,
                         (__int64)PoolWithTag,
                         400,
                         (__int64)v52,
                         0);
      inited = ObjectProperty;
      if ( ObjectProperty == -1073741275 )
        goto LABEL_68;
      if ( ObjectProperty < 0 )
        goto LABEL_49;
      if ( v49 != 18 )
        goto LABEL_68;
      inited = RtlInitUnicodeStringEx(&DestinationString, v13);
      if ( inited < 0 )
        goto LABEL_49;
      v18 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance((__int64)&DestinationString, v15, v16, v17);
      DeviceObject = v18;
      if ( v18 )
      {
        DeviceObjectExtension = v18->DeviceObjectExtension;
        DeviceNode = (char *)DeviceObjectExtension->DeviceNode;
        if ( a2 )
        {
          v21 = *((_DWORD *)DeviceNode + 75);
          if ( v21 <= 769 || v21 > 781 && v21 != 784 )
          {
            inited = -1073741808;
            goto LABEL_48;
          }
        }
        if ( v4 && (DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
        {
          if ( a2 )
          {
            inited = PiDeferSetInterfaceState(DeviceObjectExtension->DeviceNode, String2);
          }
          else
          {
            v36 = (UNICODE_STRING **)(DeviceNode + 608);
            for ( i = *v36; i != (UNICODE_STRING *)v36; i = *(UNICODE_STRING **)&i->Length )
            {
              if ( RtlEqualUnicodeString(i + 1, String2, 1u) )
              {
                v42 = *(_QWORD *)&i->Length;
                Buffer = i->Buffer;
                if ( *(UNICODE_STRING **)(*(_QWORD *)&i->Length + 8LL) != i || *(UNICODE_STRING **)Buffer != i )
                  __fastfail(3u);
                *(_QWORD *)Buffer = v42;
                *(_QWORD *)(v42 + 8) = Buffer;
                ExFreePoolWithTag(i[1].Buffer, 0);
                ExFreePoolWithTag(i, 0);
                goto LABEL_48;
              }
            }
          }
          goto LABEL_48;
        }
        if ( a2 )
        {
          v22 = DeviceObject;
          LODWORD(NumberOfBytes) = 512;
          while ( 1 )
          {
            if ( v6 )
              ExFreePoolWithTag(v6, 0);
            v6 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20207050u);
            if ( !v6 )
              break;
            inited = IoGetDeviceProperty(
                       v22,
                       DevicePropertyPhysicalDeviceObjectName,
                       NumberOfBytes,
                       v6,
                       (PULONG)&NumberOfBytes);
            if ( inited != -1073741789 )
              goto LABEL_26;
          }
          inited = -1073741670;
LABEL_26:
          v7 = 0;
          if ( inited < 0 )
            goto LABEL_48;
          if ( !(_DWORD)NumberOfBytes )
            goto LABEL_48;
          RtlInitUnicodeString(&Name, (PCWSTR)v6);
          inited = PiDmAddCacheReferenceForObject(3u, v8, (volatile signed __int32 **)&BugCheckParameter2);
          if ( inited < 0 )
            goto LABEL_48;
          v26 = (signed __int64 *)BugCheckParameter2;
          PiDmObjectAcquireExclusiveLock((unsigned __int64 *)BugCheckParameter2, v23, v24, v25);
          if ( (v26[4] & 1) != 0 )
          {
            if ( v26[5] )
            {
              v7 = 1;
              inited = 0x40000000;
            }
            else
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &UnicodeString;
              ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              inited = ZwOpenSymbolicLinkObject((PHANDLE)v26 + 5, 0xF0001u, &ObjectAttributes);
              if ( inited == -1073741772 )
                inited = ZwCreateSymbolicLinkObject((PHANDLE)v26 + 5, 0xF0001u, &ObjectAttributes, &Name);
              if ( inited >= 0 )
                v44 = 1;
            }
          }
          else
          {
            v7 = 1;
            inited = -1073741772;
          }
        }
        else
        {
          inited = PiDmGetObject(3LL, (__int64)v8, &BugCheckParameter2);
          if ( inited < 0 )
          {
LABEL_48:
            v13 = v45;
            goto LABEL_49;
          }
          v26 = (signed __int64 *)BugCheckParameter2;
          PiDmObjectAcquireExclusiveLock((unsigned __int64 *)BugCheckParameter2, v38, v39, v40);
          v41 = (void *)v26[5];
          if ( v41 )
          {
            ZwClose(v41);
            v26[5] = 0LL;
            v7 = 1;
            v44 = 1;
          }
          else
          {
            inited = -1073741772;
            v7 = 0;
          }
        }
        _m_prefetchw(v26);
        v28 = *v26;
        if ( (*v26 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v29 = v28 - 16;
        else
          v29 = 0LL;
        if ( (v28 & 2) != 0
          || (v27 = BugCheckParameter2,
              v30 = *v26,
              v30 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v29, v28)) )
        {
          v31 = BugCheckParameter2;
          ExfReleasePushLock((_QWORD *)BugCheckParameter2, v27);
        }
        else
        {
          v31 = BugCheckParameter2;
        }
        KeAbPostRelease(v31);
        CurrentThread = KeGetCurrentThread();
        v33 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v33;
        if ( v33
          || ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink == &CurrentThread->152
          || CurrentThread->SpecialApcDisable )
        {
          v8 = v48;
        }
        else
        {
          KiCheckForKernelApcDelivery();
          v8 = v48;
        }
LABEL_42:
        if ( v44 )
        {
          v34 = &GUID_DEVICE_INTERFACE_ARRIVAL;
          if ( !a2 )
            v34 = &GUID_DEVICE_INTERFACE_REMOVAL;
          PnpSetDeviceClassChange(v34, &v56, (const void **)String2);
          PnpObjectRaisePropertyChangeEvent(
            *(__int64 *)&PiPnpRtlCtx,
            (__int64)v8,
            3LL,
            0LL,
            0LL,
            (__int64)&DEVPKEY_DeviceInterface_Enabled);
        }
        if ( v7 )
          PiDmRemoveCacheReferenceForObject(3, (__int64)v8, a3);
        goto LABEL_48;
      }
      if ( a2 )
LABEL_68:
        inited = -1073741808;
    }
    else
    {
      inited = -1073741670;
    }
  }
LABEL_49:
  RtlFreeAnsiString(&UnicodeString);
  PnpUnicodeStringToWstrFree(v8, (__int64)String2);
  if ( DeviceObject )
    ObfDereferenceObject(DeviceObject);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  return (unsigned int)inited;
}

/*
 * XREFs of IopProcessSetInterfaceState @ 0x1403F1568
 * Callers:
 *     IoSetDeviceInterfaceState @ 0x1403EFF24 (IoSetDeviceInterfaceState.c)
 *     IopDoDeferredSetInterfaceState @ 0x14050D724 (IopDoDeferredSetInterfaceState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x14015B890 (ZwCreateSymbolicLinkObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x14015C5B0 (ZwOpenSymbolicLinkObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1403F1348 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     PnpSetDeviceClassChange @ 0x140488DB8 (PnpSetDeviceClassChange.c)
 *     PiDeferSetInterfaceState @ 0x1404CF084 (PiDeferSetInterfaceState.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1404DB9D4 (_CmGetDeviceInterfaceClassGuid.c)
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PnpUnicodeStringToWstrFree @ 0x1404E3F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1404E3F44 (PnpUnicodeStringToWstr.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E90B4 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E9110 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E9218 (PiDmAddCacheReferenceForObject.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404E9784 (_PnpObjectRaisePropertyChangeEvent.c)
 */

__int64 __fastcall IopProcessSetInterfaceState(PCUNICODE_STRING String2, char a2, char a3)
{
  char v3; // al
  char v5; // di
  PVOID v6; // r13
  void *v7; // r12
  char v8; // r14
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  int inited; // ebx
  WCHAR *PoolWithTag; // rax
  WCHAR *v14; // r14
  int ObjectProperty; // eax
  struct _DEVICE_OBJECT *v16; // rax
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rcx
  char *DeviceNode; // r14
  int v19; // eax
  struct _DEVICE_OBJECT *v20; // r14
  signed __int64 *v21; // rdi
  signed __int64 v22; // rax
  signed __int64 v23; // rcx
  signed __int64 v24; // rtt
  ULONG_PTR v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  GUID *v29; // rcx
  void *v31; // rcx
  UNICODE_STRING **v32; // r14
  UNICODE_STRING *i; // rdi
  __int64 v34; // rcx
  wchar_t *Buffer; // rax
  char v36; // [rsp+69h] [rbp-9Fh]
  WCHAR *v39; // [rsp+70h] [rbp-98h]
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-88h] BYREF
  __int64 v42; // [rsp+88h] [rbp-80h] BYREF
  int v43; // [rsp+90h] [rbp-78h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp-70h]
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-68h] BYREF
  char v46[8]; // [rsp+B0h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING Name; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v50[16]; // [rsp+108h] [rbp+0h] BYREF

  v3 = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  v39 = 0LL;
  v5 = a2;
  UnicodeString.Length = 0;
  v6 = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  v7 = 0LL;
  HIWORD(UnicodeString.Buffer) = 0;
  v8 = 0;
  BugCheckParameter2 = 0LL;
  v9 = 0LL;
  DeviceObject = 0LL;
  v42 = 0LL;
  v36 = 0;
  if ( !String2 || !String2->Buffer || !String2->Length )
  {
    inited = -1073741811;
LABEL_41:
    if ( v3 )
    {
      v29 = &GUID_DEVICE_INTERFACE_ARRIVAL;
      if ( !v5 )
        v29 = &GUID_DEVICE_INTERFACE_REMOVAL;
      PnpSetDeviceClassChange(v29, v50, String2);
      PnpObjectRaisePropertyChangeEvent(PiPnpRtlCtx, v9, 3, 0, 0LL, (__int64)&DEVPKEY_DeviceInterface_Enabled);
    }
    if ( v8 )
      PiDmRemoveCacheReferenceForObject(3LL, v9);
    goto LABEL_47;
  }
  v10 = PnpUnicodeStringToWstr(&v42, 0LL, String2);
  v9 = v42;
  inited = v10;
  if ( v10 < 0
    || (inited = CmGetDeviceInterfaceClassGuid(v11, v42, v50), inited < 0)
    || (inited = IopBuildGlobalSymbolicLinkString((__int64)String2, &UnicodeString), inited < 0) )
  {
    v14 = 0LL;
  }
  else
  {
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
    v39 = PoolWithTag;
    v14 = PoolWithTag;
    if ( PoolWithTag )
    {
      ObjectProperty = PnpGetObjectProperty(
                         PiPnpRtlCtx,
                         v9,
                         3,
                         0,
                         0LL,
                         (__int64)&DEVPKEY_Device_InstanceId,
                         (__int64)&v43,
                         (__int64)PoolWithTag,
                         400,
                         (__int64)v46,
                         0);
      inited = ObjectProperty;
      if ( ObjectProperty == -1073741275 )
        goto LABEL_68;
      if ( ObjectProperty < 0 )
        goto LABEL_48;
      if ( v43 != 18 )
        goto LABEL_68;
      inited = RtlInitUnicodeStringEx(&DestinationString, v14);
      if ( inited < 0 )
        goto LABEL_48;
      v16 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstance(&DestinationString);
      DeviceObject = v16;
      if ( v16 )
      {
        DeviceObjectExtension = v16->DeviceObjectExtension;
        DeviceNode = (char *)DeviceObjectExtension->DeviceNode;
        if ( v5 )
        {
          v19 = *((_DWORD *)DeviceNode + 75);
          if ( v19 <= 769 || v19 > 781 && v19 != 784 )
          {
            inited = -1073741808;
            goto LABEL_47;
          }
        }
        if ( a3 && (DeviceObjectExtension->ExtensionFlags & 0x10) != 0 )
        {
          if ( v5 )
          {
            inited = PiDeferSetInterfaceState(DeviceObjectExtension->DeviceNode, String2);
          }
          else
          {
            v32 = (UNICODE_STRING **)(DeviceNode + 608);
            for ( i = *v32; i != (UNICODE_STRING *)v32; i = *(UNICODE_STRING **)&i->Length )
            {
              if ( RtlEqualUnicodeString(i + 1, String2, 1u) )
              {
                v34 = *(_QWORD *)&i->Length;
                Buffer = i->Buffer;
                if ( *(UNICODE_STRING **)(*(_QWORD *)&i->Length + 8LL) != i || *(UNICODE_STRING **)Buffer != i )
                  __fastfail(3u);
                *(_QWORD *)Buffer = v34;
                *(_QWORD *)(v34 + 8) = Buffer;
                ExFreePoolWithTag(i[1].Buffer, 0);
                ExFreePoolWithTag(i, 0);
                goto LABEL_47;
              }
            }
          }
          goto LABEL_47;
        }
        if ( v5 )
        {
          v20 = DeviceObject;
          LODWORD(NumberOfBytes) = 512;
          while ( 1 )
          {
            if ( v6 )
              ExFreePoolWithTag(v6, 0);
            v6 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20207050u);
            if ( !v6 )
              break;
            inited = IoGetDeviceProperty(
                       v20,
                       DevicePropertyPhysicalDeviceObjectName,
                       NumberOfBytes,
                       v6,
                       (PULONG)&NumberOfBytes);
            if ( inited != -1073741789 )
              goto LABEL_26;
          }
          inited = -1073741670;
LABEL_26:
          v8 = 0;
          if ( inited < 0 || !(_DWORD)NumberOfBytes )
            goto LABEL_47;
          RtlInitUnicodeString(&Name, (PCWSTR)v6);
          inited = PiDmAddCacheReferenceForObject(3LL, v9, &BugCheckParameter2);
          if ( inited >= 0 )
          {
            v21 = (signed __int64 *)BugCheckParameter2;
            PiDmObjectAcquireExclusiveLock(BugCheckParameter2);
            if ( (v21[4] & 1) != 0 )
            {
              if ( v21[5] )
              {
                v8 = 1;
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
                inited = ZwOpenSymbolicLinkObject((PHANDLE)v21 + 5, 0xF0001u, &ObjectAttributes);
                if ( inited == -1073741772 )
                  inited = ZwCreateSymbolicLinkObject((PHANDLE)v21 + 5, 0xF0001u, &ObjectAttributes, &Name);
                if ( inited >= 0 )
                  v36 = 1;
              }
            }
            else
            {
              v8 = 1;
              inited = -1073741772;
            }
            goto LABEL_35;
          }
        }
        else
        {
          inited = PiDmGetObject(3LL, v9, &BugCheckParameter2);
          if ( inited >= 0 )
          {
            v21 = (signed __int64 *)BugCheckParameter2;
            PiDmObjectAcquireExclusiveLock(BugCheckParameter2);
            v31 = (void *)v21[5];
            if ( v31 )
            {
              ZwClose(v31);
              v21[5] = 0LL;
              v8 = 1;
              v36 = 1;
            }
            else
            {
              inited = -1073741772;
              v8 = 0;
            }
LABEL_35:
            _m_prefetchw(v21);
            v22 = *v21;
            if ( (*v21 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
              v23 = v22 - 16;
            else
              v23 = 0LL;
            if ( (v22 & 2) != 0
              || (v24 = *v21,
                  v24 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v23, v22)) )
            {
              v25 = BugCheckParameter2;
              ExfReleasePushLock((_QWORD *)BugCheckParameter2);
            }
            else
            {
              v25 = BugCheckParameter2;
            }
            KeAbPostRelease(v25);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
            v3 = v36;
            v7 = (void *)BugCheckParameter2;
            v9 = v42;
            v5 = a2;
            goto LABEL_41;
          }
        }
        v7 = (void *)BugCheckParameter2;
LABEL_47:
        v14 = v39;
        goto LABEL_48;
      }
      if ( v5 )
LABEL_68:
        inited = -1073741808;
    }
    else
    {
      inited = -1073741670;
    }
  }
LABEL_48:
  RtlFreeAnsiString(&UnicodeString);
  PnpUnicodeStringToWstrFree(v9, String2);
  if ( DeviceObject )
    ObfDereferenceObject(DeviceObject);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v7 )
    PiDmObjectRelease(v7);
  return (unsigned int)inited;
}
